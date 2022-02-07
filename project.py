"""Script for building the Containers project"""
import argparse
import os

if __name__ == "__main__":
	parser = argparse.ArgumentParser()
	parser.usage = """usage: project.py [options]
	options:
		build : build the project with default settings
	
	"""
	parser.add_argument("build", help="build project")
	
	
	args = parser.parse_args()
	if args.build:
		# TODO: build with cmake
		
