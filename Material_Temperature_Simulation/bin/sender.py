#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_capacity(Structure):
    _fields_ = [("initial" , c_double),
                ("mod"    , c_double)
            ]

class c_temps(Structure):
    _fields_ = [("flag"   , c_double),
                ("val" , c_double)
            ]

class c_msg(Structure):
    _fields_ = [("material" , c_double),
                ("cap"      , c_capacity),
                ("xDim"     , c_double),
                ("yDim"     , c_double),
                ("zDim"     , c_double),
                ("isoTherm" , c_temps),
                ("constEn"  , c_temps),
                ("runTime"  , c_double)
            ]

_lib_Material_Temperature_Simulation = CDLL('../lib/lib_Material_Temperature_Simulation.so')
_lib_Material_Temperature_Simulation.step.restype  = c_msg

def cstep(cvg):
    global _lib_Material_Temperature_Simulation
    return _lib_Material_Temperature_Simulation.step(cvg)

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
        msg += " material {}".format(int(round(struc.material)))

        msg += " thermInit {}".format(struc.cap.initial)
        msg += " thermMod {}".format(struc.cap.mod)

        msg += " xDim {}".format(int(round(struc.xDim)))
        msg += " yDim {}".format(int(round(struc.yDim)))
        msg += " zDim {}".format(int(round(struc.zDim)))

        msg += " isoFlag {}".format(int(round(struc.isoTherm.flag)))
        msg += " isoVal {}".format(struc.isoTherm.val)
        
        msg += " enerFlag {}".format(int(round(struc.constEn.flag)))
        msg += " enerVal {}".format(struc.constEn.val)
        
        msg += " runTime {}".format(int(round(struc.runTime)))

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="Material_Temperature_Simulation Relay")
        sender = SENDER()
        sender.run(line)

###############################################################################
if __name__ == "__main__":
    main()
