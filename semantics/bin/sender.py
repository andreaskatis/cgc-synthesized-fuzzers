#!/usr/bin/env python3
from ctypes import *
import random
import sys
import argparse
import socket

###############################################################################

class c_semantics_output_str(Structure):
    _fields_ = [("median" , c_int),
                ("fuzz"   , c_int)
    ]

class c_semantics_input_str (Structure):
    _fields_ = [("val"    , c_int)
    ]

_libsemantics = CDLL('../lib/libsemantics.so')

c_compute_output = _libsemantics.compute_output
c_compute_output.restype  = c_semantics_output_str
c_compute_output.argtypes = [c_semantics_input_str]

###############################################################################

class SENDER():

    def __init__(self,relay_address):
        pass

    def run(self):
        try:
            while True:
                c_output = self.getTestVector()
        finally:
            pass

    def getTestVector(self):
        global c_compute_output
        c_input = c_semantics_input_str(random.randint(-100,100))
        c_output = c_compute_output(c_input)
        print('{:d}  {:d}'.format(c_input.val,c_output.median,c_output.fuzz))
        return c_output

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="SEMANTICS Relay")
    parser.add_argument('-r', '--relay',
                        required=False,
                        help="The URL of the Relay [localhost]")
    parser.set_defaults(fuzzer='localhost')
    args = parser.parse_args()
    relay_port = 9973
    sender = SENDER((args.fuzzer,relay_port))
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
