
import os, sys

templatedir = "templates/"
tab         = "    "
tab2        = tab + tab
execdir     = os.path.dirname(os.path.abspath(sys.argv[0])) + "/"

def template(outputfile):
	with open (execdir + templatedir + outputfile + ".in", "r") as file:
		return file.read()

def status(file):
	print "generating " + file

def versionBID(feature, core):
	if feature:
		return str(feature.major) + str(feature.minor) + ("core" if core else "")
	return ""

# enum_binding_name_exceptions = [ "DOMAIN", "MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB", "FALSE", "TRUE", "NO_ERROR", "WAIT_FAILED" ]

def enumBID(enum):
	return enum.name

# extension_binding_name_exceptions = [ ]

# ToDo: discuss - just use name for glbinding?
def extensionBID(extension):
	return extension.name	


def functionBID(function):
	return function.name
