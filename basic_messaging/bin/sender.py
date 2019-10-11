#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_genStr(Structure):
    _fields_ = [("chas"   , c_double)
            ]

class c_msg(Structure):
    _fields_ = [("main"   , c_double),
                ("genStr" , c_genStr),
                ("index1" , c_double),
                ("index2" , c_double),
                ("user"   , c_double),
                ("id"     , c_double)
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
        val = int(round(struc.genStr.chas))
        if 0 <= val <= 127 :
            genStr = chr(val)
        else :
            genStr = str(val)
        msg = ""
        msg += " main {}".format(int(round(struc.main)))
        msg += " genStr {}".format(genStr)
        msg += " index1 {}".format(int(round(struc.index1)))
        msg += " index2 {}".format(int(round(struc.index2)))
        msg += " user {}".format(int(round(struc.user)))
        msg += " id {}".format(int(round(struc.id)))

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    while True:
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="basic_messaging Relay")
        sender = SENDER()
        sender.run(line)

###############################################################################
if __name__ == "__main__":
    main()