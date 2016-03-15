#!/usr/bin/python

import sys, getopt

import time

from os.path import join as pjoin

import xml.etree.ElementTree as ET

from classes.Feature import *
from classes.Enum import *
from classes.Command import *
from classes.Extension import *
from classes.Type import *

from binding import *

from gen_revision import *

from gen_features import *
from gen_bitfields import *
from gen_booleans import *
from gen_enums import *
from gen_values import *
from gen_types import *

from gen_extensions import *
from gen_functions import *

from gen_versions import *

from gen_meta import *
from gen_test import *


# def doForAllAPIMemberSets(features, callback): #callback(feature, core, ext)
#     for f in features:
#         if f.api == "gl": # ToDo: probably seperate for all apis
#             callback(f, False, False)
#             if f.major > 3 or (f.major == 3 and f.minor >= 2):
#                 callback(f, True, False)
#             callback(f, False, True)

def listApiMemberSets(features):
    apiMemberSetList = []
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            apiMemberSetList.append( (f, False, False) )
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                apiMemberSetList.append( (f, True, False) )
            apiMemberSetList.append( (f, False, True) )
    return apiMemberSetList

def generate(inputfile, patchfile, targetdir, revisionfile):

    # preparing

    print("")
    print("PREPARING")

    api     = "gl" # ToDo: other apis are untested yet

    print("checking revision")
    file = open(revisionfile, "r")
    revision = int(file.readline())
    file.close()
    print(" revision is " + str(revision))

    print("loading " + inputfile)
    tree       = ET.parse(inputfile)
    registry   = tree.getroot()

    # parsing

    print("")
    print("PARSING (" + api + " API)")

    print("parsing features")
    features   = parseFeatures(registry, api)
    print(" # " + str(len(features)) + " features parsed")

    print("parsing types")
    types      = parseTypes(registry, api)
    print(" # " + str(len(types)) + " types parsed")

    print("parsing extensions")
    extensions = parseExtensions(registry, features, api)
    print(" # " + str(len(extensions)) + " extensions parsed")

    print("parsing commands")
    commands   = parseCommands(registry, features, extensions, api)
    print(" # " + str(len(commands)) + " commands parsed")

    print("parsing enums")
    enums      = parseEnums(registry, features, extensions, commands, api)
    print(" # " + str(len(enums)) + " enums parsed")

    print("parsing enum groups")
    groups     = parseGroups(registry, enums)
    print(" # " + str(len(groups)) + " enum groups parsed")

    # patching

    print("")
    print("PATCHING")

    if patchfile is not None:

        print("parsing " + patchfile)
        patchtree     = ET.parse(patchfile)
        patchregistry = patchtree.getroot()

        print("patching types")
        patch = parseTypes(patchregistry, api)
        patchTypes(types, patch)

        print("patching commands")
        patch = parseCommands(patchregistry, features, extensions, api)
        patchCommands(commands, patch)

        print("patching features")
        print(" WARNING: todo")

        print("patching enums")
        patch = parseEnums(patchregistry, features, extensions, commands, api)
        patchEnums(enums, patch, groups)

        print("patching groups")
        patch = parseGroups(patchregistry, enums)
        patchGroups(groups, patch)

    # resolving references for classes

    enumsByName    = dict([(enum.name, enum) for enum in enums])
    groupsByName   = dict([(group.name, group) for group in groups])
    commandsByName = dict([(command.name, command) for command in commands])

    print("")
    print("RESOLVING")

    print("resolving features")
    resolveFeatures(features, enumsByName, commandsByName)

    print("resolving extensions")
    resolveExtensions(extensions, enumsByName, commandsByName, features, api)

    print("resolving groups")
    resolveGroups(groups, enumsByName)

    print("resolving enums")
    resolveEnums(enums, enumsByName, groupsByName)

    # verifying

    print("")
    print("VERIFYING")

    bitfGroups = [ g for g in groups
        if len(g.enums) > 0 and any(enum.type == "GLbitfield" for enum in g.enums) ]

    print("verifying groups")
    verifyGroups(groups, enums)

    print("verifying commands")
    verifyCommands(commands, bitfGroups)

    # generating

    print("")
    print("GENERATING")
    generateBegin = time.time()

    includedir = pjoin(targetdir, "include/glbinding/")
    sourcedir  = pjoin(targetdir, "source/")
    testdir    = pjoin(targetdir, "../tests/glbinding-test/")

    includedir_api = pjoin(includedir, "{api}{memberSet}/")
    sourcedir_api  = pjoin(sourcedir, "{api}/")

    includedir_api_old = pjoin(includedir, api + "?/")
    sourcedir_api_old = pjoin(sourcedir, api + "?/")

    # prepare contexts:

    apiMemberSetList = listApiMemberSets(features)

    extensionContexts = genExtensionContexts(extensions)
    booleanContexts = genBooleanContexts(enums)
    valueContexts = genValueContexts(enums)
    typeContexts = genTypeContexts(types, bitfGroups)
    bitfieldContexts = genBitfieldContexts(enums, bitfGroups)
    enumContexts = genEnumContexts(enums)
    functionContexts = genFunctionContexts(commands)
    featureContexts = genFeatureContexts(features)

    context = {"api": api,
               "memberSet": "",
               "revision": revision}

    context["apiMemberSets"] = listContext( [{"memberSet": versionBID(feature, core, ext)}
                                             for feature, core, ext in ( [(None, False, False)] + apiMemberSetList )] )

    context["extensions"] = listContext(extensionContexts, sortKey = lambda e: e["identifier"])
    context["booleans"] = listContext(booleanContexts, sortKey = lambda e: e["identifier"])
    context["valuesByType"] = groupedContext(valueContexts, groupKey = lambda e: [ e["type"] ])
    context["types"] = listContext(typeContexts)
    context["bitfields"] = listContext(bitfieldContexts, sortKey = lambda b: b["value"])
    context["bitfieldsByGroup"] = groupedContext(bitfieldContexts,
                                                 groupKey = lambda b: [ i["item"] for i in b["groups"]["items"] ],
                                                 primaryGroupKey = lambda b: b["primaryGroup"],
                                                 groupSortKey = lambda g: g,
                                                 itemSortKey = lambda b: b["value"])
    context["bitfieldsByInitial"] = groupedContext(bitfieldContexts,
                                                   groupKey = lambda b: [ alphabeticalGroupKey(b["identifier"], "GL_") ],
                                                   groupKeyList = alphabeticalGroupKeys(),
                                                   groupSortKey = lambda k: k,
                                                   itemSortKey = lambda b: b["identifier"])
    context["bitfieldGroups"] = listContext([g.name for g in bitfGroups], sortKey = lambda g: g)
    context["enums"] = listContext(enumContexts, sortKey = lambda e: e["value"])
    context["enumsByGroup"] = groupedContext(enumContexts,
                                             groupKey = lambda e: [ i["item"] for i in e["groups"]["items"] ],
                                             primaryGroupKey = lambda e: e["primaryGroup"],
                                             groupSortKey = lambda g: g,
                                             itemSortKey = lambda b: b["value"])
    context["enumsByInitial"] = groupedContext(enumContexts,
                                               groupKey = lambda e: [ alphabeticalGroupKey(e["identifier"], "GL_") ],
                                               groupKeyList = alphabeticalGroupKeys(),
                                               groupSortKey = lambda k: k,
                                               itemSortKey = lambda e: e["identifier"])
    context["functions"] = listContext(functionContexts, sortKey = lambda f: f["identifier"])
    context["functionsByInitial"] = groupedContext(functionContexts,
                                                   groupKey = lambda f: [ alphabeticalGroupKey(f["identifier"], "gl") ],
                                                   groupKeyList = alphabeticalGroupKeys(),
                                                   groupSortKey = lambda k: k,
                                                   itemSortKey = lambda f: f["identifier"])

    context["features"] = listContext(featureContexts)
    context["latestFeature"] = context["features"]["items"][-1]["item"]


    # import json
    # print(json.dumps(context["bitfieldsByGroup"], sort_keys=True, indent=4, separators=(',', ': '), default= lambda o: "ERR"))
    # import ipdb
    # ipdb.set_trace()



    # Generate API namespace classes (gl, gles1, gles2, ...) - ToDo: for now only gl
    Generator.generate(context, pjoin(sourcedir, "glrevision.h"))
    Generator.generate(context, pjoin(includedir_api, "extension.h"))
    Generator.generate(context, pjoin(includedir_api, "boolean.h"))
    Generator.generate(context, pjoin(includedir_api, "values.h"))
    Generator.generate(context, pjoin(includedir_api, "types.h"))
    Generator.generate(context, pjoin(includedir_api, "bitfield.h"))
    Generator.generate(context, pjoin(includedir_api, "enum.h"))
    Generator.generate(context, pjoin(includedir_api, "functions.h"))
    Generator.generate(context, pjoin(includedir_api, "gl.h"))

    Generator.generate(context, pjoin(sourcedir_api, "types.cpp"))
    Generator.generate(context, pjoin(testdir, "AllVersions_test.cpp"))
    Generator.generate(context, pjoin(includedir, "Binding.h"))
    Generator.generate(context, pjoin(sourcedir, "Binding_list.cpp"))
    Generator.generate(context, pjoin(sourcedir, "Version_ValidVersions.cpp"))

    Generator.generate(context, pjoin(includedir, "Meta.h"))
    Generator.generate(context, pjoin(sourcedir,  "Meta_Maps.h"))
    Generator.generate(context, pjoin(sourcedir,  "Meta_getStringByBitfield.cpp"))
    Generator.generate(context, pjoin(sourcedir,  "Meta_StringsByBitfield.cpp"))
    Generator.generate(context, pjoin(sourcedir,  "Meta_BitfieldsByString.cpp"))
    Generator.generate(context, pjoin(sourcedir,  "Meta_StringsByBoolean.cpp"))
    Generator.generate(context, pjoin(sourcedir,  "Meta_BooleansByString.cpp"))
    Generator.generate(context, pjoin(sourcedir,  "Meta_StringsByEnum.cpp"))
    Generator.generate(context, pjoin(sourcedir,  "Meta_EnumsByString.cpp"))

    for functionGroup in context["functionsByInitial"]["groups"]:
        specificContext = context.copy()
        specificContext["currentFunctionGroup"] = functionGroup
        specificContext["currentFunctionInitial"] = functionGroup["name"].lower()

        Generator.generate(specificContext, pjoin(sourcedir_api, "functions_{currentFunctionInitial}.cpp"), "functions.cpp")
        Generator.generate(specificContext, pjoin(sourcedir, "Binding_objects_{currentFunctionInitial}.cpp"), "Binding_objects.cpp")


    # genRevision                    (revision,                pjoin(sourcedir, "glrevision.h"))
    # genExtensions                  (api, extensions,         pjoin(includedir_api, "extension.h"))
    # genBooleans                    (api, enums, features,    pjoin(includedir_api, "boolean.h"))
    # genValues                      (api, enums, features,    pjoin(includedir_api, "values.h"))
    # genTypeHeaders                 (api, types, bitfGroups,  features, pjoin(includedir_api, "types.h"))
    # genBitfields                   (api, enums, features,    pjoin(includedir_api, "bitfield.h"))
    # genEnums                       (api, enums, features,    pjoin(includedir_api, "enum.h"))
    # genFunctionHeaders             (api, commands, features, pjoin(includedir_api, "functions.h"))
    # genFeatures                    (api, features,           pjoin(includedir_api, "gl.h"))

    # genTypeSources                 (api, types, bitfGroups,  pjoin(sourcedir_api, "types.cpp"))
    # genFunctionSources             (api, commands,           pjoin(sourcedir_api, "functions_{key}.cpp"))

    # genTest                        (api, features,           pjoin(testdir, "AllVersions_test.cpp"))

    # Generate GLBINDING namespace classes

    # genFunctionObjectHeaders       (commands,           pjoin(includedir, "Binding.h"))
    # genFunctionObjectSources       (commands,           pjoin(sourcedir, "Binding_objects_{key}.cpp"))
    # genFunctionList                (commands,           pjoin(sourcedir, "Binding_list.cpp"))

    # genVersions                    (features,           pjoin(sourcedir, "Version_ValidVersions.cpp"))

    # ToDo: the generation of enum to/from string will probably be unified...
    # genMeta_h                      (bitfGroups,         pjoin(includedir, "Meta.h"))
    # genMetaMaps		               (bitfGroups,         pjoin(sourcedir,  "Meta_Maps.h"))
    # genMetaGetStringByBitfield     (bitfGroups,         pjoin(sourcedir,  "Meta_getStringByBitfield.cpp"))
    # genMetaStringsByBitfield       (bitfGroups,         pjoin(sourcedir,  "Meta_StringsByBitfield.cpp"))
    # genMetaBitfieldByString        (bitfGroups,         pjoin(sourcedir,  "Meta_BitfieldsByString.cpp"))
    # genMetaStringsByEnum           (enums, "GLboolean", pjoin(sourcedir,  "Meta_StringsByBoolean.cpp"))
    # genMetaEnumsByString           (enums, "GLboolean", pjoin(sourcedir,  "Meta_BooleansByString.cpp"))
    # genMetaStringsByEnum           (enums, "GLenum",    pjoin(sourcedir,  "Meta_StringsByEnum.cpp"))
    # genMetaEnumsByString           (enums, "GLenum",    pjoin(sourcedir,  "Meta_EnumsByString.cpp"))

    genMetaStringsByExtension      (extensions,         pjoin(sourcedir,  "Meta_StringsByExtension.cpp"))
    genMetaExtensionsByString      (extensions,         pjoin(sourcedir,  "Meta_ExtensionsByString.cpp"))

    genMetaReqVersionsByExtension  (extensions,         pjoin(sourcedir,  "Meta_ReqVersionsByExtension.cpp"))

    genMetaFunctionStringsByExtension(extensions,       pjoin(sourcedir,  "Meta_FunctionStringsByExtension.cpp"))
    genMetaExtensionsByFunctionString(extensions,       pjoin(sourcedir,  "Meta_ExtensionsByFunctionString.cpp"))

    for feature, core, ext in apiMemberSetList:
        specificContext = {"api": api,
                           "memberSet": versionBID(feature, core, ext),
                           "revision": revision}

        specificContext["includeMemberSets"] = [ {"memberSet": versionBID(feature, core, ext)} ]
        if not core and not ext:
            specificContext["includeMemberSets"].append( {"memberSet": versionBID(feature, False, True)} )

        specificContext["booleans"] = listContext(booleanContexts, sortKey = lambda e: e["identifier"])
        specificContext["valuesByType"] = groupedContext(valueContexts, groupKey = lambda v: [ v["type"] ],
                                                        groupSortKey = lambda t: t,
                                                        itemSortKey = lambda v: v["value"],
                                                        filter = lambda v: v["supported"](feature, core, ext))
        specificContext["types"] = context["types"]
        specificContext["bitfields"] = listContext(bitfieldContexts, sortKey = lambda b: b["value"],
                                                  filter = lambda b: b["supported"](feature, core, ext))
        specificContext["enumsByGroup"] = groupedContext(enumContexts,
                                                        groupKey = lambda e: [ i["item"] for i in e["groups"]["items"] ],
                                                        primaryGroupKey = lambda e: e["primaryGroup"],
                                                        groupSortKey = lambda g: g,
                                                        itemSortKey = lambda b: b["value"],
                                                        filter = lambda e: e["supported"](feature, core, ext))
        specificContext["functions"] = listContext(functionContexts, sortKey = lambda f: f["identifier"],
                                                  filter = lambda f: f["supported"](feature, core, ext))

        Generator.generate(specificContext, pjoin(includedir_api, "boolean.h"), "booleanF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "values.h"), "valuesF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "types.h"), "typesF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "bitfield.h"), "bitfieldF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "enum.h"), "enumF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "functions.h"), "functionsF.h")
        Generator.generate(specificContext, pjoin(includedir_api, "gl.h"), "glF.h")


    generateEnd = time.time()
    print("generation took {:.3f} seconds".format(generateEnd - generateBegin))


def main(argv):
    try:
        opts, args = getopt.getopt(argv[1:], "s:p:d:r:", ["spec=", "patch=", "directory=" , "revision="])
    except getopt.GetoptError:
        print("usage: %s -s <GL spec> [-p <patch spec file>] [-d <output directory>] [-r <revision file>]" % argv[0])
        sys.exit(1)

    targetdir = "."
    inputfile = None
    patchfile = None

    for opt, arg in opts:
        if opt in ("-s", "--spec"):
            inputfile = arg

        if opt in ("-p", "--patch"):
            patchfile = arg

        if opt in ("-d", "--directory"):
            targetdir = arg

        if opt in ("-r", "--revision"):
            revision  = arg

    if inputfile == None:
        print("no GL spec file given")
        sys.exit(1)

    Status.targetdir = targetdir

    generate(inputfile, patchfile, targetdir, revision)

if __name__ == "__main__":
    main(sys.argv)
