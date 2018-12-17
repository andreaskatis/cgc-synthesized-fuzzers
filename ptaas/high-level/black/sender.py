#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import socket

###############################################################################

class c_tuple(Structure):
    _fields_ = [("x" , c_int),
                ("y" , c_int),
                ("z" , c_int)
            ]

class c_rgb(Structure):
    _fields_ = [("r" , c_int),
                ("g" , c_int),
                ("b" , c_int)
            ]

class c_msg(Structure):
    _fields_ = [("object"   , c_int),
                ("spec"     , c_int),
                ("parm"     , c_int),
                ("position" , c_tuple),
                ("vector"   , c_tuple),
                ("color"    , c_rgb),
                ("emission" , c_rgb)
            ]

_libptass = CDLL('../lib/libptaas.so')
_libptass.step.restype  = c_msg

def cstep():
    global _libptass
    return _libptass.step()

###############################################################################

class SENDER():

    def __init__(self,relay_address):
        self.relay_address = relay_address

    def openSockets(self):
        self.wsock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.wsock.connect(self.relay_address)

    def closeSockets(self):
        self.wsock.close()

    def run(self):
        self.openSockets()
        try:
            while True:
                msg = self.getTestVector()
                self.processTestVector(msg)
        finally:
            self.closeSockets()

    def getTestVector(self):
        return cstep()

    def processTestVector(self,struc):
        msg = ""
        msg += ' object {}'.format(struc.object)
        msg += ' spec {}'.format(struc.spec)
        msg += ' parm {}'.format(struc.parm)
        msg += ' position.x {}'.format(struc.position.x)
        msg += ' position.y {}'.format(struc.position.y)
        msg += ' position.z {}'.format(struc.position.z)
        msg += ' vector.x {}'.format(struc.vector.x)
        msg += ' vector.y {}'.format(struc.vector.y)
        msg += ' vector.z {}'.format(struc.vector.z)
        msg += ' color.r {}'.format(struc.color.r)
        msg += ' color.g {}'.format(struc.color.g)
        msg += ' color.b {}'.format(struc.color.b)
        msg += ' emission.r {}'.format(struc.emission.r)
        msg += ' emission.g {}'.format(struc.emission.g)
        msg += ' emission.b {}'.format(struc.emission.b)
        print('sending : ' + msg)
        self.wsock.send(bytes(msg, 'utf-8'))

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="PTAAS Relay")
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
