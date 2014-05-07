import sys

def translateType(t, name):
	if name in [ "GL_TRUE", "GL_FALSE" ]:
		return "GLboolean"
		
	return {
		"u" : "GLuint",
		"ull" : "GLuint64"
	}.get(t, "GLuint")

class Enum:
	def __init__(self, xml, group):
		self.name = xml.attrib["name"]
		self.value = xml.attrib["value"]
		self.type = "GLenum"
		self.group = group
		
		if group == "SpecialNumbers":
			self.type = translateType(xml.attrib.get("type", ""), self.name)
		
	def __str__(self):
		return "Enum(%s, %s)" % (self.name, self.value)
		
	def __lt__(self, other):
		return self.name < other.name
		
	exceptions = [ "DOMAIN", "MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB" ]
		
	def baseName(self):
		first = self.name[3]
		n = self.name[3:]
		
		if n in Enum.exceptions:
			return "_" + n
		
		if first.isalpha():
			return n
		else:
			return "_" + n
		
def parseEnums(xml):
	enums = set()
	
	for enumGroup in xml.iter("enums"):
		for enum in enumGroup.findall("enum"):
			if "api" in enum.attrib and enum.attrib["api"] != "gl":
				continue
			group = enumGroup.attrib.get("group", "")
			enums.add(Enum(enum, group))

	return enums
