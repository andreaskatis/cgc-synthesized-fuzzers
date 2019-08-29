#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_msg(Structure):
    _fields_ = [("menu"   , c_int),
                ("genStr" , c_int * 9),
                ("lvl1In" , c_int),
                ("lvl2In" , c_int),
                ("lvl3In" , c_int)
            ]

_lib_Pizza_Ordering_System = CDLL('../lib/lib_Pizza_Ordering_System.so')
_lib_Pizza_Ordering_System.step.restype  = c_msg

def cstep():
    global _lib_Pizza_Ordering_System
    return _lib_Pizza_Ordering_System.step()

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
        for num in struc.genStr:
            asc = chr(int(num) % 95 + 32)
            genStr += asc

        msg = ""
        msg += " menu {}".format(struc.menu)
        msg += " genStr {}".format(genStr)
        msg += " lvl1In {}".format(struc.lvl1In)
        msg += " lvl2In {}".format(struc.lvl2In)
        msg += " lvl3In {}".format(struc.lvl3In)

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Pizza_Ordering_System Relay")
    sender = SENDER()
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
