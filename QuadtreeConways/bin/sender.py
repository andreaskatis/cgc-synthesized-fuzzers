#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_msg(Structure):
    _fields_ = [("main"   , c_double),
                ("xCoord" , c_double),
                ("yCoord" , c_double),
                ("time"   , c_double)
            ]

_lib_QuadtreeConways = CDLL('../lib/lib_QuadtreeConways.so')
_lib_QuadtreeConways.step.restype = c_msg

def cstep(cvg):
    global _lib_QuadtreeConways
    return _lib_QuadtreeConways.step(cvg)

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
        msg = ""
        msg += " main {}".format(int(round(struc.main)))
        msg += " xCoord {}".format(int(round(struc.xCoord)))
        msg += " yCoord {}".format(int(round(struc.yCoord)))
        msg += " time {}".format(int(round(struc.time)))

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="QuadtreeConways Relay")
        sender = SENDER()
        sender.run(line)

###############################################################################
if __name__ == "__main__":
    main()
