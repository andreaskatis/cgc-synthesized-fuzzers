#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_genStr(Structure):
    _fields_ = [("chas"   , c_double * 5)
            ]

class c_diverInfo(Structure):
    _fields_ = [("street"  , c_genStr),
                ("city"    , c_genStr),
                ("state"   , c_genStr),
                ("data"    , c_double)
            ]

class c_logDive(Structure):
    _fields_ = [("hour"   , c_double),
                ("minute", c_double),
                ("second", c_double),
                ("data"    , c_double)
            ]

class c_msg(Structure):
    _fields_ = [("main"       , c_double),
                ("sharedStr1" , c_genStr),
                ("sharedStr2" , c_genStr),
                ("date"       , c_double),
                ("change"     , c_diverInfo),
                ("log"        , c_logDive),
                ("downHex"    , c_double * 32),
                ("indx"      , c_double)
            ]

_lib_Divelogger2 = CDLL('../lib/lib_Divelogger2.so')
_lib_Divelogger2.step.restype  = c_msg

def cstep(cvg):
    global _lib_Divelogger2
    return _lib_Divelogger2.step(cvg)

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
        sharedStr1 = ""
        for num in struc.sharedStr1.chas:
            asc = str(int(round(num)))
            sharedStr1 += asc

        sharedStr2 = ""
        for num in struc.sharedStr2.chas:
            asc = str(int(round(num)))
            sharedStr2 += asc

        street = ""
        for num in struc.change.street.chas:
            asc = str(int(round(num)))
            street += asc

        city = ""
        for num in struc.change.city.chas:
            asc = str(int(round(num)))
            city += asc

        state = ""
        for num in struc.change.state.chas:
            asc = str(int(round(num)))
            state += asc

        hexStr = ",".join(str(int(round(x))) for x in struc.downHex)
        # for num in struc.downHex:
        #     val = str(int(round(num)))
        #     hexStr += val

        msg = ""
        msg += " main {}".format(int(round(struc.main)))
        msg += " sharedStr1 {}".format(sharedStr1)
        msg += " sharedStr2 {}".format(sharedStr2)
        msg += " date {}".format(int(round(struc.date)))

        msg += " chStreet {}".format(street)
        msg += " chCity {}".format(city)
        msg += " chState {}".format(state)
        msg += " chZip {}".format(int(round(struc.change.data)))
        msg += " chPhone {}".format(int(round(struc.change.data)))
        msg += " chPADINum {}".format(int(round(struc.change.data)))

        msg += " hour {}".format(int(round(struc.log.hour)))
        msg += " minute {}".format(int(round(struc.log.minute)))
        msg += " second {}".format(int(round(struc.log.second)))
        msg += " lgMaxDep {}".format(int(round(struc.log.data)))
        msg += " lgAvgDep {}".format(int(round(struc.log.data)))
        msg += " lgDurat {}".format(int(round(struc.log.data)))
        msg += " lgO2 {}".format(int(round(struc.log.data)))
        msg += " lgPSIIn {}".format(int(round(struc.log.data)))
        msg += " lgPSIOut {}".format(int(round(struc.log.data)))

        msg += " downHex {}".format(hexStr)
        msg += " indx {}".format(int(round(struc.indx)))
        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    while True:
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="Divelogger2 Relay")
        sender = SENDER()
        sender.run(line)

###############################################################################
if __name__ == "__main__":
    main()
