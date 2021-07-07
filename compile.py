#!/usr/bin/python3

import sys
import subprocess
import os

if __name__ == "__main__":
	os.getcwd()
	if not os.path.exists("./build"):
		os.makedirs("build")
	os.chdir("build")
	retCode = subprocess.check_call(["cmake", ".."], stderr=subprocess.STDOUT)
	retCode = subprocess.check_call(["cmake", "--build", "."], stderr=subprocess.STDOUT)
