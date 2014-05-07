#!/usr/bin/python

import sys, getopt
from classes.types_generation import *

def main(argv):
	inputfile = "gl.xml"
	outputfile = "gl_constants.h"

	try:
		opts, args = getopt.getopt(argv[1:], "i:", ["input="])
	except getopt.GetoptError:
		print("usage: %s [-i <input>]" % argv[0])
		sys.exit(1)
		
	for opt, arg in opts:
		if opt in ("-i", "--input"):
			inputfile = arg

	generateTypes(inputfile)

if __name__ == "__main__":
	main(sys.argv)
