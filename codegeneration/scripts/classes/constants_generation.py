import xml.etree.ElementTree as ET
from Enum import *

def generateConstantsHeader(enums, outputfile):		
	with open(outputfile, 'w') as file:
		file.write("""#pragma once

#include <glbinding/types.h>

namespace gl {

""")
		for enum in enums:
			file.write("const %s %s = %s;\n" % (enum.type, enum.baseName(), enum.value))
		file.write("""
} // namespace gl
""")

def generateConstantsSource(enums, outputfile):		
	with open(outputfile, 'w') as file:
		file.write("""#include <glbinding/constants.h>

namespace gl {

""")
		for enum in enums:
			file.write("const GLenum %s = %s;\n" % (enum.baseName(), enum.value))
		file.write("""
} // namespace gl
""")

def generateConstants(inputfile):
	tree = ET.parse(inputfile)
	registry = tree.getroot()

	enums = sorted(parseEnums(registry))
		
	generateConstantsHeader(enums, "constants.h")
	#generateConstantsSource(enums, "constants.cpp")
