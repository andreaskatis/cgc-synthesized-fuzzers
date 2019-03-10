#!/usr/bin/env python3
from ctypes import *
import random
import sys
import argparse
import socket

###############################################################################

class c_or_input_str(Structure):
    _fields_ = [("xin"    , c_int)
    ]

class c_or_output_str (Structure):
    _fields_ = [("out"   , c_int)
    ]

_libor = CDLL('../lib/libor.so')

c_compute_output = _libor.compute_output
c_compute_output.restype  = c_or_output_str
c_compute_output.argtypes = [c_or_input_str]

###############################################################################

class SENDER():

    def __init__(self,relay_address):
        self.relay_address = relay_address

    def run(self):
        while True:
            c_output = self.getTestVector()

    def getTestVector(self):
        global c_compute_output
        c_input = c_or_input_str(random.randint(-9,9))
        c_output = c_compute_output(c_input)
        print('{:02d} {:+04d}'.format(c_input.xin, c_output.out))
        return c_output

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="OR Sender")
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
