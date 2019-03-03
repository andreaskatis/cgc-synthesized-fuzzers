#!/usr/bin/env python3
from ctypes import *
import random
import sys
import argparse
import socket

###############################################################################

class c_little_output_str(Structure):
    _fields_ = [("i"    , c_int)
    ]

_liblittle = CDLL('../lib/liblittle.so')

c_compute_output = _liblittle.compute_output
c_compute_output.restype  = c_little_output_str
c_compute_output.argtypes = []

###############################################################################

class SENDER():

    def __init__(self,relay_address):
        self.relay_address = relay_address

    def run(self):
        while True:
            c_output = self.getTestVector()

    def getTestVector(self):
        global c_compute_output
        c_output = c_compute_output()
        print('{:+04d}'.format(c_output.i))
        return c_output

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="LITTLE Sender")
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
