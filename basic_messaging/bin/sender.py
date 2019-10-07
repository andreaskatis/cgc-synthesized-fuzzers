#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_genStr(Structure):
    _fields_ = [("chas"   , c_int)
    		]

class c_msg(Structure):
    _fields_ = [("main"   , c_int),
                ("genStr" , c_genStr),
                ("index1" , c_int),
                ("index2" , c_int),
                ("user"   , c_int),
                ("id"     , c_int)
            ]

_lib_basic_messaging = CDLL('../lib/lib_basic_messaging.so')
_lib_basic_messaging.step.restype  = c_msg

def cstep(cvg):
    global _lib_basic_messaging
    return _lib_basic_messaging.step(cvg)

###############################################################################
class SENDER():
    def __init__(self):
        pass

    def run(self, cvg):
        msg = self.getTestVector(cvg)
        self.processTestVector(msg)
        time.sleep(0.1)

    def getTestVector(self, cvg):
        return cstep(cvg)

    def processTestVector(self,struc):
        genStr = chr(int(struc.genStr.chas))
        msg = ""
        msg += " main {}".format(struc.main)
        msg += " genStr {}".format(genStr)
        msg += " index1 {}".format(struc.index1)
        msg += " index2 {}".format(struc.index2)
        msg += " user {}".format(struc.user)
        msg += " id {}".format(struc.id)

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main(cvg):
    parser = argparse.ArgumentParser(description="basic_messaging Relay")
    sender = SENDER()
    sender.run(cvg)

###############################################################################
if __name__ == "__main__":
	main(sys.argv[1])