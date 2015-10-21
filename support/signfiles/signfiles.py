__author__ = 'bfosterjr'

import argparse
import os
import subprocess

def parseargs():
    parser = argparse.ArgumentParser(description="Recursively sign a directory of PE (.dll/.exe/.sys) files")
    parser.add_argument('-s', dest='signtool', default=None, required=True,
                        help="full path to signtool.exe" )
    parser.add_argument('-d', dest='directory', default=None, required=True,
                        help="full path to input directory")
    parser.add_argument('-c', dest='certname', default=None, required=True,
                        help="name of root certificate to use")
    args = parser.parse_args()
    return args

def main():
    args = parseargs()
    for directory, subdirectories, files in os.walk(args.directory):
        for file in files:
            fname = os.path.join(directory, file).lower()
            if fname.endswith(".exe") or fname.endswith(".dll") or fname.endswith(".sys"):
                signcmd = [args.signtool,'sign','/v', '/sm', '/s', 'Root', '/n',  args.certname,
                           '/tr', 'http://www.startssl.com/timestamp','/ph', '/fd', 'sha256',
                           fname]
                subprocess.call(signcmd)


if __name__ == "__main__":
    main()