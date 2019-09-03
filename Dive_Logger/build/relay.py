#!/usr/bin/env python3
import sys
from sys import stdin
import argparse
import base64

###############################################################################
class RELAY():
    def __init__(self):
        pass

    def run(self):
        while True:
            msg = self.getTestVector()
            self.processTestVector(msg)

    def getTestVector(self):
        payload = stdin.readline()
        un64 = base64.b64decode(payload.encode()).decode()
        pairlist = un64.split()
        assert(0 == (len(pairlist) % 2))
        pairs = [pairlist[i:i+2] for i in range(0,len(pairlist),2)]
        alist = { key: value for (key,value) in pairs}
        return alist

    def processTestVector(self,msg):
        main = ["c", "l", "d", "e", "p", "r", "s", "x"][int(msg["command"]) % 8]
        sharedStr1 = msg["sharedStr1"]
        sharedStr2 = msg["sharedStr2"]
        date = "{month}/{day}/{year}".format(month = int(msg["month"]) % 13, day = int(msg["day"]) % 32, year = int(msg["year"]))

        chStreet = msg["chStreet"]
        chCity = msg["chCity"]
        chState = msg["chState"]
        chZip = int(msg["chZip"])
        chPhone = int(msg["chPhone"])
        chPADINum = int(msg["chPADINum"])

        logTime = "{hr}:{mn}:{sc}".format(hr = int(msg["lgHr"]), mn = int(msg["lgMin"]), sc = int(msg["logSec"]))
        logMaxDep = int(msg["lgMaxDep"])
        logAvgDep = int(msg["lgAvgDep"])
        logDurat = int(msg["lgDurat"])
        logO2 = int(msg["lgO2"])
        logPSIIn = int(msg["lgPSIIn"])
        logPSIOut = int(msg["lgPSIOut"])

        downHex = msg["downHex"]
        index = int(msg["index"]) % 20 + 1

        hexArr = []
        for cha in downHex:
            hexArr.append(cha)

        msg = ""
        msg = "{cmd}".format(cmd = main)
        sys.stdout.write(msg)
        sys.stdout.flush()
        if (command == "c"): #Change diver info
            msg = "{first}\n{last}\n{street}\n{city}\n{state}\n{zipC}\n{phone}\n{PADINum}\n{date}".format(first = sharedStr1, last = sharedStr2, street = chStreet, city = chCity, state = chState, zipC = chZip, phone = chPhone, PADINum = chPADINum, date = date)
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (command == "l"): #Log new dive
            msg = "{site}\n{date}\n{time}\n{loc}\n{maxDep}\n{avgDep}\n{durat}\n{O2}\n{PSIIn}\n{PSIOut}".format(site = sharedStr1, date = date, time = logTime, loc = sharedStr2, maxDep = logMaxDep, avgDep = logAvgDep, durat = logDurat, O2 = logO2, PSIIn = logPSIIn, PSIOut = logPSIOut)
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (command == "d"): #Download new dive
            for i in range(0, 8, 1):
                msg = ""
                for j in range(0, 4, 1):
                    msg += hexArr[i * 4 + j]
                sys.stdout.write(msg)
                sys.stdout.flush()
            msg = "\x00\x00\x00\x00"
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{date}\n{time}\n{loc}\n{maxDep}\n{avgDep}\n{durat}\n{O2}\n{PSIIn}\n{PSIOut}".format(date = date, time = logTime, loc = sharedStr2, maxDep = logMaxDep, avgDep = logAvgDep, durat = logDurat, O2 = logO2, PSIIn = logPSIIn, PSIOut = logPSIOut)
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (command == "e"): #Edit dive
            msg = "{index}".format(index = index)
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{site}\n{date}\n{time}\n{loc}\n{maxDep}\n{avgDep}\n{durat}\n{O2}\n{PSIIn}\n{PSIOut}".format(site = sharedStr1, date = date, time = logTime, loc = sharedStr2, maxDep = logMaxDep, avgDep = logAvgDep, durat = logDurat, O2 = logO2, PSIIn = logPSIIn, PSIOut = logPSIOut)
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (command == "p" or command == "r"): #Print and Remove dive have the same input format
            msg = "{index}".format(index = index)
            sys.stdout.write(msg)
            sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Dive_Logger Relay")
    relay = RELAY()
    relay.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
