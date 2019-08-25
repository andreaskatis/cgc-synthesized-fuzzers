#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_capacity(Structure):
    _fields_ = [("initial" , c_int),
                ("mod1"    , c_int),
                ("mod2"    , c_int),
                ("mod3"    , c_int),
                ("mod4"    , c_int),
                ("mod5"    , c_int),
                ("mod6"    , c_int),
                ("mod7"    , c_int)
            ]

class c_temps(Structure):
    _fields_ = [("flag"   , c_int),
                ("num"    , c_int),
                ("values" , c_int * 100)
            ]

class c_msg(Structure):
    _fields_ = [("material" , c_int),
                ("thermal"  , c_capacity),
                ("heat"     , c_capacity),
                ("xDim"     , c_int),
                ("yDim"     , c_int),
                ("zDim"     , c_int),
                ("isotherm" , c_temps),
                ("constEn"  , c_temps),
                ("runTime"  , c_int)
            ]

_lib_Material_Temperature_Simulation = CDLL('../lib/lib_Material_Temperature_Simulation.so')
_lib_Material_Temperature_Simulation.step.restype  = c_msg

def cstep():
    global _lib_Material_Temperature_Simulation
    return _lib_Material_Temperature_Simulation.step()

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
        isoVals = []
        for num in struc.isotherm.values:
            isoVals.append(num)

        enerVals = []
        for num in struc.constEn.values:
            enerVals.append(num)

        msg = ""
        msg += " material {}".format(struc.material)

        msg += " thermInit {}".format(struc.thermal.initial)
        msg += " thermMod1 {}".format(struc.thermal.mod1)
        msg += " thermMod2 {}".format(struc.thermal.mod2)
        msg += " thermMod3 {}".format(struc.thermal.mod3)
        msg += " thermMod4 {}".format(struc.thermal.mod4)
        msg += " thermMod5 {}".format(struc.thermal.mod5)
        msg += " thermMod6 {}".format(struc.thermal.mod6)
        msg += " thermMod7 {}".format(struc.thermal.mod7)
        msg += " heatInit {}".format(struc.heat.initial)
        msg += " heatMod1 {}".format(struc.heat.mod1)
        msg += " heatMod2 {}".format(struc.heat.mod2)
        msg += " heatMod3 {}".format(struc.heat.mod3)
        msg += " heatMod4 {}".format(struc.heat.mod4)
        msg += " heatMod5 {}".format(struc.heat.mod5)
        msg += " heatMod6 {}".format(struc.heat.mod6)
        msg += " heatMod7 {}".format(struc.heat.mod7)

        msg += " xDim {}".format(struc.xDim)
        msg += " yDim {}".format(struc.yDim)
        msg += " zDim {}".format(struc.zDim)

        msg += " isoFlag {}".format(struc.isotherm.flag)
        msg += " isoNum {}".format(struc.isotherm.num)
        msg += " isoVal0 {}".format(isoVals[0])
        msg += " isoVal1 {}".format(isoVals[1])
        msg += " isoVal2 {}".format(isoVals[2])
        msg += " isoVal3 {}".format(isoVals[3])
        msg += " isoVal4 {}".format(isoVals[4])
        msg += " isoVal5 {}".format(isoVals[5])
        msg += " isoVal6 {}".format(isoVals[6])
        msg += " isoVal7 {}".format(isoVals[7])
        msg += " isoVal8 {}".format(isoVals[8])
        msg += " isoVal9 {}".format(isoVals[9])
        msg += " isoVal10 {}".format(isoVals[10])
        msg += " isoVal11 {}".format(isoVals[11])
        msg += " isoVal12 {}".format(isoVals[12])
        msg += " isoVal13 {}".format(isoVals[13])
        msg += " isoVal14 {}".format(isoVals[14])
        msg += " isoVal15 {}".format(isoVals[15])
        msg += " isoVal16 {}".format(isoVals[16])
        msg += " isoVal17 {}".format(isoVals[17])
        msg += " isoVal18 {}".format(isoVals[18])
        msg += " isoVal19 {}".format(isoVals[19])
        msg += " isoVal20 {}".format(isoVals[20])
        msg += " isoVal21 {}".format(isoVals[21])
        msg += " isoVal22 {}".format(isoVals[22])
        msg += " isoVal23 {}".format(isoVals[23])
        msg += " isoVal24 {}".format(isoVals[24])
        msg += " isoVal25 {}".format(isoVals[25])
        msg += " isoVal26 {}".format(isoVals[26])
        msg += " isoVal27 {}".format(isoVals[27])
        msg += " isoVal28 {}".format(isoVals[28])
        msg += " isoVal29 {}".format(isoVals[29])
        msg += " isoVal30 {}".format(isoVals[30])
        msg += " isoVal31 {}".format(isoVals[31])
        msg += " isoVal32 {}".format(isoVals[32])
        msg += " isoVal33 {}".format(isoVals[33])
        msg += " isoVal34 {}".format(isoVals[34])
        msg += " isoVal35 {}".format(isoVals[35])
        msg += " isoVal36 {}".format(isoVals[36])
        msg += " isoVal37 {}".format(isoVals[37])
        msg += " isoVal38 {}".format(isoVals[38])
        msg += " isoVal39 {}".format(isoVals[39])
        msg += " isoVal40 {}".format(isoVals[40])
        msg += " isoVal41 {}".format(isoVals[41])
        msg += " isoVal42 {}".format(isoVals[42])
        msg += " isoVal43 {}".format(isoVals[43])
        msg += " isoVal44 {}".format(isoVals[44])
        msg += " isoVal45 {}".format(isoVals[45])
        msg += " isoVal46 {}".format(isoVals[46])
        msg += " isoVal47 {}".format(isoVals[47])
        msg += " isoVal48 {}".format(isoVals[48])
        msg += " isoVal49 {}".format(isoVals[49])
        msg += " isoVal50 {}".format(isoVals[50])
        msg += " isoVal51 {}".format(isoVals[51])
        msg += " isoVal52 {}".format(isoVals[52])
        msg += " isoVal53 {}".format(isoVals[53])
        msg += " isoVal54 {}".format(isoVals[54])
        msg += " isoVal55 {}".format(isoVals[55])
        msg += " isoVal56 {}".format(isoVals[56])
        msg += " isoVal57 {}".format(isoVals[57])
        msg += " isoVal58 {}".format(isoVals[58])
        msg += " isoVal59 {}".format(isoVals[59])
        msg += " isoVal60 {}".format(isoVals[60])
        msg += " isoVal61 {}".format(isoVals[61])
        msg += " isoVal62 {}".format(isoVals[62])
        msg += " isoVal63 {}".format(isoVals[63])
        msg += " isoVal64 {}".format(isoVals[64])
        msg += " isoVal65 {}".format(isoVals[65])
        msg += " isoVal66 {}".format(isoVals[66])
        msg += " isoVal67 {}".format(isoVals[67])
        msg += " isoVal68 {}".format(isoVals[68])
        msg += " isoVal69 {}".format(isoVals[69])
        msg += " isoVal70 {}".format(isoVals[80])
        msg += " isoVal71 {}".format(isoVals[81])
        msg += " isoVal72 {}".format(isoVals[82])
        msg += " isoVal73 {}".format(isoVals[83])
        msg += " isoVal74 {}".format(isoVals[84])
        msg += " isoVal75 {}".format(isoVals[85])
        msg += " isoVal76 {}".format(isoVals[86])
        msg += " isoVal77 {}".format(isoVals[87])
        msg += " isoVal78 {}".format(isoVals[88])
        msg += " isoVal79 {}".format(isoVals[89])
        msg += " isoVal90 {}".format(isoVals[90])
        msg += " isoVal91 {}".format(isoVals[91])
        msg += " isoVal92 {}".format(isoVals[92])
        msg += " isoVal93 {}".format(isoVals[93])
        msg += " isoVal94 {}".format(isoVals[94])
        msg += " isoVal95 {}".format(isoVals[95])
        msg += " isoVal96 {}".format(isoVals[96])
        msg += " isoVal97 {}".format(isoVals[97])
        msg += " isoVal98 {}".format(isoVals[98])
        msg += " isoVal99 {}".format(isoVals[99])

        msg += " enerFlag {}".format(struc.constEn.flag)
        msg += " enerNum {}".format(struc.constEn.num)
        msg += " enerVal0 {}".format(enerVals[0])
        msg += " enerVal1 {}".format(enerVals[1])
        msg += " enerVal2 {}".format(enerVals[2])
        msg += " enerVal3 {}".format(enerVals[3])
        msg += " enerVal4 {}".format(enerVals[4])
        msg += " enerVal5 {}".format(enerVals[5])
        msg += " enerVal6 {}".format(enerVals[6])
        msg += " enerVal7 {}".format(enerVals[7])
        msg += " enerVal8 {}".format(enerVals[8])
        msg += " enerVal9 {}".format(enerVals[9])
        msg += " enerVal10 {}".format(enerVals[10])
        msg += " enerVal11 {}".format(enerVals[11])
        msg += " enerVal12 {}".format(enerVals[12])
        msg += " enerVal13 {}".format(enerVals[13])
        msg += " enerVal14 {}".format(enerVals[14])
        msg += " enerVal15 {}".format(enerVals[15])
        msg += " enerVal16 {}".format(enerVals[16])
        msg += " enerVal17 {}".format(enerVals[17])
        msg += " enerVal18 {}".format(enerVals[18])
        msg += " enerVal19 {}".format(enerVals[19])
        msg += " enerVal20 {}".format(enerVals[20])
        msg += " enerVal21 {}".format(enerVals[21])
        msg += " enerVal22 {}".format(enerVals[22])
        msg += " enerVal23 {}".format(enerVals[23])
        msg += " enerVal24 {}".format(enerVals[24])
        msg += " enerVal25 {}".format(enerVals[25])
        msg += " enerVal26 {}".format(enerVals[26])
        msg += " enerVal27 {}".format(enerVals[27])
        msg += " enerVal28 {}".format(enerVals[28])
        msg += " enerVal29 {}".format(enerVals[29])
        msg += " enerVal30 {}".format(enerVals[30])
        msg += " enerVal31 {}".format(enerVals[31])
        msg += " enerVal32 {}".format(enerVals[32])
        msg += " enerVal33 {}".format(enerVals[33])
        msg += " enerVal34 {}".format(enerVals[34])
        msg += " enerVal35 {}".format(enerVals[35])
        msg += " enerVal36 {}".format(enerVals[36])
        msg += " enerVal37 {}".format(enerVals[37])
        msg += " enerVal38 {}".format(enerVals[38])
        msg += " enerVal39 {}".format(enerVals[39])
        msg += " enerVal40 {}".format(enerVals[40])
        msg += " enerVal41 {}".format(enerVals[41])
        msg += " enerVal42 {}".format(enerVals[42])
        msg += " enerVal43 {}".format(enerVals[43])
        msg += " enerVal44 {}".format(enerVals[44])
        msg += " enerVal45 {}".format(enerVals[45])
        msg += " enerVal46 {}".format(enerVals[46])
        msg += " enerVal47 {}".format(enerVals[47])
        msg += " enerVal48 {}".format(enerVals[48])
        msg += " enerVal49 {}".format(enerVals[49])
        msg += " enerVal50 {}".format(enerVals[50])
        msg += " enerVal51 {}".format(enerVals[51])
        msg += " enerVal52 {}".format(enerVals[52])
        msg += " enerVal53 {}".format(enerVals[53])
        msg += " enerVal54 {}".format(enerVals[54])
        msg += " enerVal55 {}".format(enerVals[55])
        msg += " enerVal56 {}".format(enerVals[56])
        msg += " enerVal57 {}".format(enerVals[57])
        msg += " enerVal58 {}".format(enerVals[58])
        msg += " enerVal59 {}".format(enerVals[59])
        msg += " enerVal60 {}".format(enerVals[60])
        msg += " enerVal61 {}".format(enerVals[61])
        msg += " enerVal62 {}".format(enerVals[62])
        msg += " enerVal63 {}".format(enerVals[63])
        msg += " enerVal64 {}".format(enerVals[64])
        msg += " enerVal65 {}".format(enerVals[65])
        msg += " enerVal66 {}".format(enerVals[66])
        msg += " enerVal67 {}".format(enerVals[67])
        msg += " enerVal68 {}".format(enerVals[68])
        msg += " enerVal69 {}".format(enerVals[69])
        msg += " enerVal70 {}".format(enerVals[80])
        msg += " enerVal71 {}".format(enerVals[81])
        msg += " enerVal72 {}".format(enerVals[82])
        msg += " enerVal73 {}".format(enerVals[83])
        msg += " enerVal74 {}".format(enerVals[84])
        msg += " enerVal75 {}".format(enerVals[85])
        msg += " enerVal76 {}".format(enerVals[86])
        msg += " enerVal77 {}".format(enerVals[87])
        msg += " enerVal78 {}".format(enerVals[88])
        msg += " enerVal79 {}".format(enerVals[89])
        msg += " enerVal90 {}".format(enerVals[90])
        msg += " enerVal91 {}".format(enerVals[91])
        msg += " enerVal92 {}".format(enerVals[92])
        msg += " enerVal93 {}".format(enerVals[93])
        msg += " enerVal94 {}".format(enerVals[94])
        msg += " enerVal95 {}".format(enerVals[95])
        msg += " enerVal96 {}".format(enerVals[96])
        msg += " enerVal97 {}".format(enerVals[97])
        msg += " enerVal98 {}".format(enerVals[98])
        msg += " enerVal99 {}".format(enerVals[99])

        msg += "runTime {}".format(struc.runTime)

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Material_Temperature_Simulation Relay")
    sender = SENDER()
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
