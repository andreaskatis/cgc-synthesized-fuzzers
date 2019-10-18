#!/usr/bin/env python3
import time
import os
import sys
from sys import stdin
import argparse
import base64
from datetime import datetime
###############################################################################
class RELAY():
    def __init__(self):
        pass

    def run(self, payload):
            msg = self.getTestVector(payload)
            self.processTestVector(msg)

    def getTestVector(self, payload):
        un64 = base64.b64decode(payload.encode()).decode()
        pairlist = un64.split()
        assert(0 == (len(pairlist) % 2))
        pairs = [pairlist[i:i+2] for i in range(0,len(pairlist),2)]
        alist = { key: value for (key,value) in pairs}
        return alist

    def processTestVector(self,msg):

        hexConv = ["\x00", "\x01", "\x02", "\x03", "\x04", "\x05", "\x06", "\x07", "\x08", "\x09", "\x0a", "\x0b", "\x0c", "\x0d", "\x0e", "\x0f", "\x10", "\x11", "\x12", "\x13", "\x14", "\x15", "\x16", "\x17", "\x18", "\x19", "\x1a", "\x1b", "\x1c", "\x1d", "\x1e", "\x1f", "\x20", "\x21", "\x22", "\x23", "\x24", "\x25", "\x26", "\x27", "\x28", "\x29", "\x2a", "\x2b", "\x2c", "\x2d", "\x2e", "\x2f", "\x30", "\x31", "\x32", "\x33", "\x34", "\x35", "\x36", "\x37", "\x38", "\x39", "\x3a", "\x3b", "\x3c", "\x3d", "\x3e", "\x3f", "\x40", "\x41", "\x42", "\x43", "\x44", "\x45", "\x46", "\x47", "\x48", "\x49", "\x4a", "\x4b", "\x4c", "\x4d", "\x4e", "\x4f", "\x50", "\x51", "\x52", "\x53", "\x54", "\x55", "\x56", "\x57", "\x58", "\x59", "\x5a", "\x5b", "\x5c", "\x5d", "\x5e", "\x5f", "\x60", "\x61", "\x62", "\x63", "\x64", "\x65", "\x66", "\x67", "\x68", "\x69", "\x6a", "\x6b", "\x6c", "\x6d", "\x6e", "\x6f", "\x70", "\x71", "\x72", "\x73", "\x74", "\x75", "\x76", "\x77", "\x78", "\x79", "\x7a", "\x7b", "\x7c", "\x7d", "\x7e", "\x7f", "\x80", "\x81", "\x82", "\x83", "\x84", "\x85", "\x86", "\x87", "\x88", "\x89", "\x8a", "\x8b", "\x8c", "\x8d", "\x8e", "\x8f", "\x90", "\x91", "\x92", "\x93", "\x94", "\x95", "\x96", "\x97", "\x98", "\x99", "\x9a", "\x9b", "\x9c", "\x9d", "\x9e", "\x9f", "\xa0", "\xa1", "\xa2", "\xa3", "\xa4", "\xa5", "\xa6", "\xa7", "\xa8", "\xa9", "\xaa", "\xab", "\xac", "\xad", "\xae", "\xaf", "\xb0", "\xb1", "\xb2", "\xb3", "\xb4", "\xb5", "\xb6", "\xb7", "\xb8", "\xb9", "\xba", "\xbb", "\xbc", "\xbd", "\xbe", "\xbf", "\xc0", "\xc1", "\xc2", "\xc3", "\xc4", "\xc5", "\xc6", "\xc7", "\xc8", "\xc9", "\xca", "\xcb", "\xcc", "\xcd", "\xce", "\xcf", "\xd0", "\xd1", "\xd2", "\xd3", "\xd4", "\xd5", "\xd6", "\xd7", "\xd8", "\xd9", "\xda", "\xdb", "\xdc", "\xdd", "\xde", "\xdf", "\xe0", "\xe1", "\xe2", "\xe3", "\xe4", "\xe5", "\xe6", "\xe7", "\xe8", "\xe9", "\xea", "\xeb", "\xec", "\xed", "\xee", "\xef", "\xf0", "\xf1", "\xf2", "\xf3", "\xf4", "\xf5", "\xf6", "\xf7", "\xf8", "\xf9", "\xfa", "\xfb", "\xfc", "\xfd", "\xfe", "\xff"]

        main = ["c", "l", "d", "e", "p", "r", "s", "x"][int(msg["main"])] if 0 <= int(msg["main"]) <= 7 else msg["main"]
        sharedStr1 = msg["sharedStr1"]
        sharedStr2 = msg["sharedStr2"]
        dt = msg["date"][:8]
        date = dt[:4] + "/" + dt[4:-2] + "/" + dt[6:]

        chStreet = msg["chStreet"]
        chCity = msg["chCity"]
        chState = msg["chState"]
        chZip = int(msg["chZip"])
        chPhone = int(msg["chPhone"])
        chPADINum = int(msg["chPADINum"])

        logTime = msg["hour"] + ":" + msg["minute"] + ":" + msg["second"]
        logMaxDep = int(msg["lgMaxDep"])
        logAvgDep = int(msg["lgAvgDep"])
        logDurat = int(msg["lgDurat"])
        logO2 = int(msg["lgO2"])
        logPSIIn = int(msg["lgPSIIn"])
        logPSIOut = int(msg["lgPSIOut"])

        downHex=""
        hexlist = msg["downHex"].split(',')
        for num in hexlist:
            val = hexConv[int(num)]
            downHex += val
        
        indx = int(msg["indx"])

        hexArr = []
        for cha in downHex:
            hexArr.append(cha)

        msg = ""
        msg = "{cmd}\n".format(cmd = main)
        sys.stdout.write(msg)
        sys.stdout.flush()
        if (main == "c"): #Change diver info
            msg = "{first}\n{last}\n{street}\n{city}\n{state}\n{zipC}\n{phone}\n{PADINum}\n{date}\n".format(first = sharedStr1, last = sharedStr2, street = chStreet, city = chCity, state = chState, zipC = chZip, phone = chPhone, PADINum = chPADINum, date = date)
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (main == "l"): #Log new dive
            msg = "{site}\n{date}\n{time}\n{loc}\n{maxDep}\n{avgDep}\n{durat}\n{O2}\n{PSIIn}\n{PSIOut}\n".format(site = sharedStr1, date = date, time = logTime, loc = sharedStr2, maxDep = logMaxDep, avgDep = logAvgDep, durat = logDurat, O2 = logO2, PSIIn = logPSIIn, PSIOut = logPSIOut)
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (main == "d"): #Download new dive
            for i in range(0, 8, 1):
                msg = ""
                for j in range(0, 4, 1):
                    msg += hexArr[i * 4 + j]
                    msg += "\n"
                sys.stdout.write(msg)
                sys.stdout.flush()
            msg = "\x00\x00\x00\x00\n"
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{date}\n{time}\n{loc}\n{maxDep}\n{avgDep}\n{durat}\n{O2}\n{PSIIn}\n{PSIOut}\n".format(date = date, time = logTime, loc = sharedStr2, maxDep = logMaxDep, avgDep = logAvgDep, durat = logDurat, O2 = logO2, PSIIn = logPSIIn, PSIOut = logPSIOut)
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (main == "e"): #Edit dive
            msg = "{indx}\n".format(indx = indx)
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{site}\n{date}\n{time}\n{loc}\n{maxDep}\n{avgDep}\n{durat}\n{O2}\n{PSIIn}\n{PSIOut}\n".format(site = sharedStr1, date = date, time = logTime, loc = sharedStr2, maxDep = logMaxDep, avgDep = logAvgDep, durat = logDurat, O2 = logO2, PSIIn = logPSIIn, PSIOut = logPSIOut)
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (main == "p" or main == "r"): #Print and Remove dive have the same input format
            msg = "{indx}\n".format(indx = indx)
            sys.stdout.write(msg)
            sys.stdout.flush()

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="SCUBA_Dive_Logging Relay")
        relay = RELAY()
        relay.run(line)

###############################################################################
if __name__ == "__main__":
    main()