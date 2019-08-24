#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_msg(Structure):
    _fields_ = [("command" , c_int),
                ("xCoord"  , c_int),
                ("yCoord"  , c_int),
                ("runTime" , c_int)
            ]

_lib_Quadtree_Conways = CDLL('../lib/lib_Quadtree_Conways.so')
_lib_Quadtree_Conways.step.restype  = c_msg

def cstep():
    global _lib_Quadtree_Conways
    return _lib_Quadtree_Conways.step()

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
        msg = ""
        msg += " command {}".format(struc.command)
        msg += " xCoord {}".format(struc.xCoord)
        msg += " yCoord {}".format(struc.yCoord)
        msg += " runTime {}".format(struc.runTime)

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Quadtree_Conways Relay")
    sender = SENDER()
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
