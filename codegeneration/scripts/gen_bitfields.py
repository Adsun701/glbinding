from binding import *
from classes.Enum import *
from classes.Feature import *


def bitfieldDefinition(enum):
	return "%s = %s," % (enumBID(enum), enum.value)

def bitfieldImportDefinition(enum):
	return "static const GLbitfield %s = GLbitfield::%s;" % (enumBID(enum), enumBID(enum))


def genBitfieldsAll(enums, outputdir, outputfile):

	genFeatureBitfields(enums, None, outputdir, outputfile, None)


def genBitfieldsFeatureGrouped(enums, features, outputdir, outputfile):

	# gen bitfields feature grouped
	for f in features:
		if f.api == "gl": # ToDo: probably seperate for all apis
			genFeatureBitfields(enums, f, outputdir, outputfile, False)
			if f.major > 3 or (f.major == 3 and f.minor >= 2):
				genFeatureBitfields(enums, f, outputdir, outputfile, True)


def genFeatureBitfields(enums, feature, outputdir, outputfile, core):

	of_all = outputfile.replace("?", "")

	version = ""
	if feature:
		version = str(feature.major) + str(feature.minor) + ("core" if core else "")

	t = template(of_all).replace("?", version)
	of = outputfile.replace("?", version)

	status(outputdir + of)

	tgrouped = groupEnumsByType(enums)

	pureBitfields    = [ b for b in tgrouped["GLbitfield"] if b.supported(feature, core) ]
	groupedBitfields = groupEnumsByGroup(pureBitfields)

	a = sorted([ ("\n" + tab + "// %s\n" + tab + "%s") % (group, ("\n" + tab).join(
		[ bitfieldDefinition(e) for e in values ])) 
			for group, values in groupedBitfields.items() ])

	b = sorted([ ("\n// %s\n" + "%s") % (group, "\n".join(
		[ bitfieldImportDefinition(e) for e in values ])) 
			for group, values in groupedBitfields.items() ])

	with open(outputdir + of, 'w') as file:
		file.write(t % ("using namespace gl;\n\n" if feature else "", # using namespace,
			("\n").join(a), ("\n") .join(b)))
