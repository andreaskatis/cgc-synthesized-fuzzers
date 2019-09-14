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

class c_diverInfo(Structure):
    _fields_ = [("street"  , c_genStr),
                ("city"    , c_genStr),
                ("state"   , c_genStr),
                ("zip"     , c_int),
                ("phone"   , c_int),
                ("PADINum" , c_int)
            ]

class c_logDive(Structure):
    _fields_ = [("hr"     , c_int),
                ("min"    , c_int),
                ("sec"    , c_int),
                ("maxDep" , c_int),
                ("avgDep" , c_int),
                ("durat"  , c_int),
                ("O2"     , c_int),
                ("PSIIn"  , c_int),
                ("PSIOut" , c_int)
            ]

class c_msg(Structure):
    _fields_ = [("main"       , c_int),
                ("sharedStr1" , c_genStr),
                ("sharedStr2" , c_genStr),
                ("month"      , c_int),
                ("day"        , c_int),
                ("year"       , c_int),
                ("change"     , c_diverInfo),
                ("log"        , c_logDive),
                ("downHex"    , c_int * 32),
                ("index"      , c_int)
            ]

_lib_Divelogger2 = CDLL('../lib/lib_Divelogger2.so')
_lib_Divelogger2.step.restype  = c_msg

def cstep():
    global _lib_Divelogger2
    return _lib_Divelogger2.step()

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
        sharedStr1 = ""
        for num in struc.sharedStr1.chas:
            asc = chr(int(num) % 95 + 32)
            sharedStr1 += asc

        sharedStr2 = ""
        for num in struc.sharedStr2.chas:
            asc = chr(int(num) % 95 + 32)
            sharedStr2 += asc

        street = ""
        for num in struc.change.street.chas:
            asc = chr(int(num) % 95 + 32)
            street += asc

        city = ""
        for num in struc.change.city.chas:
            asc = chr(int(num) % 95 + 32)
            city += asc

        state = ""
        for num in struc.change.state.chas:
            asc = chr(int(num) % 95 + 32)
            state += asc

        hexConv = ["\x00", "\x01", "\x02", "\x03", "\x04", "\x05", "\x06", "\x07", "\x08", "\x09", "\x0a", "\x0b", "\x0c", "\x0d", "\x0e", "\x0f", "\x10", "\x11", "\x12", "\x13", "\x14", "\x15", "\x16", "\x17", "\x18", "\x19", "\x1a", "\x1b", "\x1c", "\x1d", "\x1e", "\x1f", "\x20", "\x21", "\x22", "\x23", "\x24", "\x25", "\x26", "\x27", "\x28", "\x29", "\x2a", "\x2b", "\x2c", "\x2d", "\x2e", "\x2f", "\x30", "\x31", "\x32", "\x33", "\x34", "\x35", "\x36", "\x37", "\x38", "\x39", "\x3a", "\x3b", "\x3c", "\x3d", "\x3e", "\x3f", "\x40", "\x41", "\x42", "\x43", "\x44", "\x45", "\x46", "\x47", "\x48", "\x49", "\x4a", "\x4b", "\x4c", "\x4d", "\x4e", "\x4f", "\x50", "\x51", "\x52", "\x53", "\x54", "\x55", "\x56", "\x57", "\x58", "\x59", "\x5a", "\x5b", "\x5c", "\x5d", "\x5e", "\x5f", "\x60", "\x61", "\x62", "\x63", "\x64", "\x65", "\x66", "\x67", "\x68", "\x69", "\x6a", "\x6b", "\x6c", "\x6d", "\x6e", "\x6f", "\x70", "\x71", "\x72", "\x73", "\x74", "\x75", "\x76", "\x77", "\x78", "\x79", "\x7a", "\x7b", "\x7c", "\x7d", "\x7e", "\x7f", "\x80", "\x81", "\x82", "\x83", "\x84", "\x85", "\x86", "\x87", "\x88", "\x89", "\x8a", "\x8b", "\x8c", "\x8d", "\x8e", "\x8f", "\x90", "\x91", "\x92", "\x93", "\x94", "\x95", "\x96", "\x97", "\x98", "\x99", "\x9a", "\x9b", "\x9c", "\x9d", "\x9e", "\x9f", "\xa0", "\xa1", "\xa2", "\xa3", "\xa4", "\xa5", "\xa6", "\xa7", "\xa8", "\xa9", "\xaa", "\xab", "\xac", "\xad", "\xae", "\xaf", "\xb0", "\xb1", "\xb2", "\xb3", "\xb4", "\xb5", "\xb6", "\xb7", "\xb8", "\xb9", "\xba", "\xbb", "\xbc", "\xbd", "\xbe", "\xbf", "\xc0", "\xc1", "\xc2", "\xc3", "\xc4", "\xc5", "\xc6", "\xc7", "\xc8", "\xc9", "\xca", "\xcb", "\xcc", "\xcd", "\xce", "\xcf", "\xd0", "\xd1", "\xd2", "\xd3", "\xd4", "\xd5", "\xd6", "\xd7", "\xd8", "\xd9", "\xda", "\xdb", "\xdc", "\xdd", "\xde", "\xdf", "\xe0", "\xe1", "\xe2", "\xe3", "\xe4", "\xe5", "\xe6", "\xe7", "\xe8", "\xe9", "\xea", "\xeb", "\xec", "\xed", "\xee", "\xef", "\xf0", "\xf1", "\xf2", "\xf3", "\xf4", "\xf5", "\xf6", "\xf7", "\xf8", "\xf9", "\xfa", "\xfb", "\xfc", "\xfd", "\xfe", "\xff"]
        hexStr = ""
        for num in struc.downHex:
            val = hexConv[num % 256]
            hexStr += val

        msg = ""
        msg += " main {}".format(struc.main)
        msg += " sharedStr1 {}".format(sharedStr1[struc.sharedStr1.length])
        msg += " sharedStr2 {}".format(sharedStr2[struc.sharedStr2.length])
        msg += " month {}".format(struc.month)
        msg += " day {}".format(struc.day)
        msg += " year {}".format(struc.year)

        msg += " chStreet {}".format(street[struc.change.street.length])
        msg += " chCity {}".format(city[struc.change.city.length])
        msg += " chState {}".format(state[struc.change.state.length])
        msg += " chZip {}".format(struc.change.zip)
        msg += " chPhone {}".format(struc.change.phone)
        msg += " chPADINum {}".format(struc.change.PADINum)

        msg += " lgHr {}".format(struc.log.hr)
        msg += " lgMin {}".format(struc.log.min)
        msg += " lgSec {}".format(struc.log.sec)
        msg += " lgMaxDep {}".format(struc.log.maxDep)
        msg += " lgAvgDep {}".format(struc.log.avgDep)
        msg += " lgDurat {}".format(struc.log.durat)
        msg += " lgO2 {}".format(struc.log.O2)
        msg += " lgPSIIn {}".format(struc.log.PSIIn)
        msg += " lgPSIOut {}".format(struc.log.PSIOut)

        msg += " downHex {}".format(hexStr)
        msg += " index {}".format(struc.index)

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Divelogger2 Relay")
    sender = SENDER()
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
