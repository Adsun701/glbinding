from binding import *
from classes.Command import *



functionForwardTemplate = """GLBINDING_API %s %s(%s);"""

functionForwardImplTemplate = """%s %s(%s)
{
    return (*glbinding::currentBinding().%s)(%s);
}
"""

functionForwardTemplateInline = """%s %s(%s)
{
    return gl::%s(%s);
}
"""

functionForwardImplTemplateRValueCast = """%s %s(%s)
{
    return static_cast<gl%s::%s>((*glbinding::currentBinding().%s)(%s));
}
"""


def namespacify(type, namespace):

    if " void" in type or type.startswith("void"):
        return type

    if type.startswith("const "):
        return "const " + namespace + "::" + type[6:]

    return namespace + "::" + type


def bitfieldType(param):

    return param.groupString if param.groupString else "GLbitfield" 


def paramSignature(param, forward):

    if param.type == "GLbitfield":
        return bitfieldType(param)

#    if forward and param.array is not "":
#        return param.type + " " + param.array
#    else:
    return param.type


def functionMember(function):

    params = ", ".join([function.returntype] + [ paramSignature(p, False) for p in function.params ])
    return tab+'%s = new Function<%s>("%s");' % (functionBID(function), params, function.name)


def functionDecl(api, function):

    params = ", ".join([namespacify(function.returntype, api)] + [ namespacify(paramSignature(p, True), api) for p in function.params ])
    return tab + "Function<%s> * %s;" % (params, functionBID(function))


def functionSignature(api, function, extern = True):

    params = ", ".join([namespacify(function.returntype, api)] + [ namespacify(paramSignature(p, True), api) for p in function.params ])
    if extern:
        return "extern template Function<%s>;" % (params)
    else:
        return "template Function<%s>;" % (params)


def functionForward(function, feature, version, impl):

    params = ", ".join([paramSignature(p, False) + " " + paramPass(p) for p in function.params])
    paramNames = ", ".join([p.name for p in function.params])

    if feature and function.returntype in [ "GLenum", "GLbitfield" ]:
        if impl:
            return functionForwardTemplateInline % (function.returntype, functionBID(function), params,
                    functionBID(function), paramNames)
        else:
            return functionForwardTemplate % (function.returntype, functionBID(function), params)
    else:
        if impl:
            if feature:
                return functionForwardTemplateInline % (function.returntype, functionBID(function), params,
                    functionBID(function), paramNames)
            else:
                return functionForwardImplTemplate % (function.returntype, functionBID(function), params,
                    functionBID(function), paramNames)
        else:
            return functionForwardTemplate % (function.returntype, functionBID(function), params)


def paramPass(param): 

    return param.name # + param.array

    # this returns a string used for passing the param by its name to a function object.
    # if this is inside a featured function, the param will be cast from featured GLenum 
    # and GLbitfield to gl::GLenum and gl::GLbitfield, required for function object.
    # t = param.type
    #
    # if not feature:
    #    return param.name
    # elif t == "GLenum":
    #    return "static_cast<gl::GLenum>(" + param.name + ")"
    # elif "GLenum" in t and "*" in t:
    #    return ("reinterpret_cast<" + t + ">").replace("GLenum", "gl::GLenum") + "(" + param.name + ")"
    # elif t == "GLbitfield":
    #    return "static_cast<gl::GLbitfield>(" + param.name + ")"
    # elif "GLbitfield" in t and "*" in t:
    #    return ("reinterpret_cast<" + t + ">").replace("GLbitfield", "gl::GLbitfield") + "(" + param.name + ")"
    # else:
    #    return param.name

def functionList(commands):
    #return "std::vector<AbstractFunction*>(&%s, %s)" % (commands[0].name, len(commands))
    return ",\n        ".join([ "&"+ functionBID(f) for f in commands ])

def genFunctionObjects_h(commands, outputdir, outputfile):    

    of = outputfile
    t = template(of)

    status(outputdir + of)

    extern_templates = set([ functionSignature("gl", f) for f in commands])

    with open(outputdir + of, 'w') as file:
        file.write(t % (
            "\n".join(sorted(extern_templates)), 
            "\n".join([ functionDecl("gl", f) for f in commands ])))

def genFunctionObjects_cpp(commands, outputdir, outputfile):

    of = outputfile
    t = template(of)

    status(outputdir + of)

    extern_templates = set([ functionSignature("gl", f, False) for f in commands])

    with open(outputdir + of, 'w') as file:
        file.write(t.replace("%b", commands[0].name).replace("%e", commands[-1].name) % (
            "\n".join(sorted(extern_templates)), 
            len(commands),
            "\n".join([ functionMember(f) for f in commands ])
            #,functionList(commands)
        ))

def genFunctionsAll_h(api, commands, outputdir, outputfile):

    genFeatureFunctions(api, commands, None, outputdir, outputfile, False, None)


def genFunctionsAll_cpp(api, commands, outputdir, outputfile):

    genFeatureFunctions(api, commands, None, outputdir, outputfile, True, None)


def genFunctionsFeatureGrouped_h(api, commands, features, outputdir, outputfile):

    genFunctionsFeatureGrouped(api, commands, features, outputdir, outputfile)


def genFunctionsFeatureGrouped(api, commands, features, outputdir, outputfile):

    # gen functions feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genFeatureFunctions(api, commands, f, outputdir, outputfile, True)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFeatureFunctions(api, commands, f, outputdir, outputfile, True, True)
            genFeatureFunctions(api, commands, f, outputdir, outputfile, True, False, True)


def genFeatureFunctions(api, commands, feature, outputdir, outputfile, impl, core = False, ext = False):

    of_all = outputfile.replace("?", "F")

    version = versionBID(feature, core, ext)

    t = template(of_all).replace("%f", version).replace("%a", api)
    of = outputfile.replace("?", version)

    status(outputdir + of)

    pureCommands = [ c for c in commands if
        (not ext and c.supported(feature, core)) or (ext and not c.supported(feature, False)) ]

    with open(outputdir + of, 'w') as file:
        if not feature:
            file.write(t % ("\n".join(
                [ functionForward(c, feature, version, impl) for c in pureCommands ])))
        else:
            file.write(t % ("\n".join(
                [ functionForward(c, feature, version, impl) for c in pureCommands ])))
