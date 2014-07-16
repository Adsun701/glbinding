from binding import *
from classes.Command import *



functionForwardTemplate = """inline %s %s(%s)
{
    return glbinding::FunctionObjects::%s(%s);
}
"""
functionForwardTemplateRValueCast = """inline %s %s(%s)
{
    return static_cast<gl%s::%s>(glbinding::FunctionObjects::%s(%s));
}
"""


def namespacify(type, namespace):

    if " void" in type or type.startswith("void"):
        return type

    if type.startswith("const "):
        return "const " + namespace + "::" + type[6:]

    return namespace + "::" + type


def bitfieldType(param):

    return "GLbitfield" 


def paramSignature(param):

    return param.type


def functionTemplate(function):

    params = ", ".join([function.returntype] + [ paramSignature(p) for p in function.params ])
    return 'Function<%s> FunctionObjects::%s("%s");' % (params,
        functionBID(function)[2:], function.name)


def functionDecl(api, function):

    params = ", ".join([namespacify(function.returntype, api)] + [ namespacify(paramSignature(p), api) for p in function.params ])
    return tab + "static Function<%s> %s;" % (params, functionBID(function)[2:])


def functionForward(function, feature, version):

    params = ", ".join([paramSignature(p) + " " + p.name for p in function.params])
    paramNames = ", ".join([(paramPass(p)) for p in function.params])

    if feature and function.returntype in [ "GLenum", "GLbitfield" ]:
        return functionForwardTemplateRValueCast % (function.returntype, functionBID(function), params,
            version, function.returntype, functionBID(function)[2:], paramNames)
    else:
        return functionForwardTemplate % (function.returntype, functionBID(function), params,
            functionBID(function)[2:], paramNames)


def paramPass(param):

    return param.name

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


def genFunctionObjects_h(commands, outputdir, outputfile):    

    of = outputfile
    t = template(of)

    status(outputdir + of)

    with open(outputdir + of, 'w') as file:
        file.write(t % "\n".join(
            # ToDo: multiple APIs
            [ functionDecl("gl", f) for f in commands ]))


def genFunctionObjects_cpp(commands, outputdir, outputfile):    

    of = outputfile
    t = template(of)

    status(outputdir + of)

    with open(outputdir + of, 'w') as file:
        file.write(t % "\n".join(
            [ functionTemplate(f) for f in commands ]))


def genFunctionList(commands, outputdir, outputfile):

    of = outputfile
    t = template(of)

    status(outputdir + of)

    with open(outputdir + of, 'w') as file:
        file.write(t % ",\n    ".join(
            [ "&FunctionObjects::"+ functionBID(f)[2:] for f in commands ]))


def genFunctionsAll(api, commands, outputdir, outputfile):

    genFeatureFunctions(api, commands, None, outputdir, outputfile, None)


def genFunctionsFeatureGrouped(api, commands, features, outputdir, outputfile):

    # gen functions feature grouped
    for f in features:
        if f.api == "gl": # ToDo: probably seperate for all apis
            genFeatureFunctions(api, commands, f, outputdir, outputfile)
            if f.major > 3 or (f.major == 3 and f.minor >= 2):
                genFeatureFunctions(api, commands, f, outputdir, outputfile, True)
            genFeatureFunctions(api, commands, f, outputdir, outputfile, False, True)


def genFeatureFunctions(api, commands, feature, outputdir, outputfile, core = False, ext = False):

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
                [ functionForward(c, feature, version) for c in pureCommands ])))
        else:
            file.write(t % ("\n".join(
                [ functionForward(c, feature, version) for c in pureCommands ])))
