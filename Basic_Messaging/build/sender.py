#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_genStr(Structure):
    _fields_ = [("length" , c_int),
                ("chas"   , c_int * 100)
            ]

class c_msg(Structure):
    _fields_ = [("main"   , c_int),
                ("genStr" , c_genStr),
                ("index1" , c_int),
                ("index2" , c_int),
                ("user"   , c_int),
                ("id"     , c_int)
            ]

_lib_Basic_Messaging = CDLL('../lib/lib_Basic_Messaging.so')
_lib_Basic_Messaging.step.restype  = c_msg

def cstep():
    global _lib_Basic_Messaging
    return _lib_Basic_Messaging.step()

###############################################################################
class SENDER():
    def __init__(self):
        pass

    def run(self):
        while True:
            msg = self.getTestVector()
            self.processTestVector(msg)
            time.sleep(0.1)

    def getTestVector(self):
        return cstep()

    def processTestVector(self,struc):
        genStr = ""
        for num in struc.genStr.chas:
            asc = chr(int(num) % 95 + 32)
            genStr += asc

        msg = ""
        msg += " main {}".format(struc.main)
        msg += " strLength {}".format(struc.genStr.length)
        msg += " genStr {}".format(genStr)
        msg += " index1 {}".format(struc.index1)
        msg += " index2 {}".format(struc.index2)
        msg += " user {}".format(struc.user)
        msg += " id {}".format(struc.id)

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Basic_Messaging Relay")
    sender = SENDER()
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
