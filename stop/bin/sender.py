#!/usr/bin/env python3
from ctypes import *
import random
import sys
import argparse
import socket

###############################################################################

class c_stop_output_str(Structure):
    _fields_ = [("xrw"    , c_int),
                ("xact"   , c_int),
                ("xindex" , c_int),
                ("xvalue" , c_int)
    ]

class c_stop_feedback_str(Structure):
    _fields_ = [("rindex" , c_int),
                ("rvalue" , c_int)
    ]

class c_stop_input_str (Structure):
    _fields_ = [("cmd"    , c_int)
    ]

_libstop = CDLL('../lib/libstop.so')

c_compute_output = _libstop.compute_output
c_compute_output.restype  = c_stop_output_str
c_compute_output.argtypes = [c_stop_input_str]

c_apply_feedback  = _libstop.apply_feedback
c_apply_feedback.argtypes  = [c_stop_feedback_str]

###############################################################################
HEADER = """
cmd                  xrw
|busy                |  xact
||      rindex       |  |     xindex
||      |     rval/  |  |     |     xvalue
||      |     xreg   |  |     |     |
||      |     |      |  |     |     |"""

class SENDER():

    def __init__(self,relay_address):
        self.relay_address = relay_address

    def openSockets(self):
        #self.wsock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        #self.wsock.connect(self.relay_address)
        pass

    def closeSockets(self):
        self.wsock.close()

    def run(self):
        global HEADER
        self.openSockets()
        print(HEADER)
        try:
            while True:
                c_output = self.getTestVector()
                self.processTestVector(c_output)
        finally:
            self.closeSockets()

    def getTestVector(self):
        global c_compute_output
        global c_apply_feedback
        c_feedback = c_stop_feedback_str(random.randint(0,15),random.randint(0,15))
        c_apply_feedback(c_feedback)
        c_input = c_stop_input_str(random.randint(0,5))
        c_output = c_compute_output(c_input)
        ##print('{:d}  {:04d}  {:04d}  {:d}  {:d}  {:04d}  {:012d}'.format(c_input.cmd,c_feedback.rindex,c_feedback.rvalue,c_output.xact,c_output.xrw,c_output.xindex,c_output.xvalue))
        cmd  = ['NOOP  ','READ  ','WRITE ','READK ','WRITEK','TWINKL'][c_input.cmd]
        xact = ['COIL','STAT','HREG','IREG'][c_output.xact]
        xrw  = ['w','r'][c_output.xrw]
        print('{}  {:04d}  {:04d} | {}  {}  {:04d}  {:012d}'.format(cmd,c_feedback.rindex,c_feedback.rvalue,xrw,xact,c_output.xindex,c_output.xvalue))
        return c_output

    def processTestVector(self,c_output):
        msg = ""
        msg += ' USER_xact {}'.format(c_output.xact)
        msg += ' USER_xrw {}'.format(c_output.xrw)
        msg += ' USER_xindex {}'.format(c_output.xindex)
        msg += ' USER_xvalue {}'.format(c_output.xvalue)
        #print('output : ' + msg)
        #self.wsock.send(bytes(msg, 'utf-8'))
        pass

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="STOP Relay")
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
