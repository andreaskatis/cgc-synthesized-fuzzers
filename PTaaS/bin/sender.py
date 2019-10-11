#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_tuple(Structure):
    _fields_ = [("x" , c_double),
                ("y" , c_double),
                ("z" , c_double)
            ]

class c_rgb(Structure):
    _fields_ = [("r" , c_double),
                ("g" , c_double),
                ("b" , c_double)
            ]

class c_msg(Structure):
    _fields_ = [("object"   , c_double),
                ("spec"     , c_double),
                ("parm"     , c_double),
                ("position" , c_tuple),
                ("vector"   , c_tuple),
                ("color"    , c_rgb),
                ("emission" , c_rgb)
            ]

_libptass = CDLL('../lib/lib_PTaaS.so')
_libptass.step.restype  = c_msg

def cstep(cvg):
    global _libptass
    return _libptass.step(cvg)

###############################################################################
class SENDER():
    def __init__(self):
        pass

    def run(self, cvg):
        msg = self.getTestVector(cvg)
        self.processTestVector(msg)

    def getTestVector(self, cvg):
        return cstep(cvg)

    def processTestVector(self,struc):
        msg = ""
        msg += ' object {}'.format(int(round(struc.object)))
        msg += ' spec {}'.format(int(round(struc.spec)))
        msg += ' parm {}'.format(int(round(struc.parm)))
        msg += ' position.x {}'.format(int(round(struc.position.x)))
        msg += ' position.y {}'.format(int(round(struc.position.y)))
        msg += ' position.z {}'.format(int(round(struc.position.z)))
        msg += ' vector.x {}'.format(int(round(struc.vector.x)))
        msg += ' vector.y {}'.format(int(round(struc.vector.y)))
        msg += ' vector.z {}'.format(int(round(struc.vector.z)))
        msg += ' color.r {}'.format(int(round(struc.color.r)))
        msg += ' color.g {}'.format(int(round(struc.color.g)))
        msg += ' color.b {}'.format(int(round(struc.color.b)))
        msg += ' emission.r {}'.format(int(round(struc.emission.r)))
        msg += ' emission.g {}'.format(int(round(struc.emission.g)))
        msg += ' emission.b {}'.format(int(round(struc.emission.b)))
        e64 = base64.b64encode(msg.encode()).decode()
        #return e64;
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="PTaaS Relay")
        sender = SENDER()
        sender.run(line)

###############################################################################
if __name__ == "__main__":
    main()
