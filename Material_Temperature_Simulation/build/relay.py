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
        material = int(msg["material"]) % 4 + 1

        thermInit = int(msg["thermInit"])
        thermMod1 = (int(msg["thermMod1"]) % 51 + 75) / 100
        thermMod2 = (int(msg["thermMod2"]) % 51 + 75) / 100
        thermMod3 = (int(msg["thermMod3"]) % 51 + 75) / 100
        thermMod4 = (int(msg["thermMod4"]) % 51 + 75) / 100
        thermMod5 = (int(msg["thermMod5"]) % 51 + 75) / 100
        thermMod6 = (int(msg["thermMod6"]) % 51 + 75) / 100
        thermMod7 = (int(msg["thermMod7"]) % 51 + 75) / 100
        heatInit = int(msg["heatInit"])
        heatMod1 = (int(msg["heatMod1"]) % 51 + 75) / 100
        heatMod2 = (int(msg["heatMod2"]) % 51 + 75) / 100
        heatMod3 = (int(msg["heatMod3"]) % 51 + 75) / 100
        heatMod4 = (int(msg["heatMod4"]) % 51 + 75) / 100
        heatMod5 = (int(msg["heatMod5"]) % 51 + 75) / 100
        heatMod6 = (int(msg["heatMod6"]) % 51 + 75) / 100
        heatMod7 = (int(msg["heatMod7"]) % 51 + 75) / 100

        xDim = int(msg["xDim"]) % 16
        yDim = int(msg["yDim"]) % 16
        zDim = int(msg["zDim"]) % 16

        isoFlag = int(msg["isoFlag"]) % 2
        isoNum = int(msg["isoNum"]) % 100
        isoVals = []
        isoVals.append(int(msg["isoVal0"]) % 545 - 172)
        isoVals.append(int(msg["isoVal1"]) % 545 - 172)
        isoVals.append(int(msg["isoVal2"]) % 545 - 172)
        isoVals.append(int(msg["isoVal3"]) % 545 - 172)
        isoVals.append(int(msg["isoVal4"]) % 545 - 172)
        isoVals.append(int(msg["isoVal5"]) % 545 - 172)
        isoVals.append(int(msg["isoVal6"]) % 545 - 172)
        isoVals.append(int(msg["isoVal7"]) % 545 - 172)
        isoVals.append(int(msg["isoVal8"]) % 545 - 172)
        isoVals.append(int(msg["isoVal9"]) % 545 - 172)
        isoVals.append(int(msg["isoVal10"]) % 545 - 172)
        isoVals.append(int(msg["isoVal11"]) % 545 - 172)
        isoVals.append(int(msg["isoVal12"]) % 545 - 172)
        isoVals.append(int(msg["isoVal13"]) % 545 - 172)
        isoVals.append(int(msg["isoVal14"]) % 545 - 172)
        isoVals.append(int(msg["isoVal15"]) % 545 - 172)
        isoVals.append(int(msg["isoVal16"]) % 545 - 172)
        isoVals.append(int(msg["isoVal17"]) % 545 - 172)
        isoVals.append(int(msg["isoVal18"]) % 545 - 172)
        isoVals.append(int(msg["isoVal19"]) % 545 - 172)
        isoVals.append(int(msg["isoVal20"]) % 545 - 172)
        isoVals.append(int(msg["isoVal21"]) % 545 - 172)
        isoVals.append(int(msg["isoVal22"]) % 545 - 172)
        isoVals.append(int(msg["isoVal23"]) % 545 - 172)
        isoVals.append(int(msg["isoVal24"]) % 545 - 172)
        isoVals.append(int(msg["isoVal25"]) % 545 - 172)
        isoVals.append(int(msg["isoVal26"]) % 545 - 172)
        isoVals.append(int(msg["isoVal27"]) % 545 - 172)
        isoVals.append(int(msg["isoVal28"]) % 545 - 172)
        isoVals.append(int(msg["isoVal29"]) % 545 - 172)
        isoVals.append(int(msg["isoVal30"]) % 545 - 172)
        isoVals.append(int(msg["isoVal31"]) % 545 - 172)
        isoVals.append(int(msg["isoVal32"]) % 545 - 172)
        isoVals.append(int(msg["isoVal33"]) % 545 - 172)
        isoVals.append(int(msg["isoVal34"]) % 545 - 172)
        isoVals.append(int(msg["isoVal35"]) % 545 - 172)
        isoVals.append(int(msg["isoVal36"]) % 545 - 172)
        isoVals.append(int(msg["isoVal37"]) % 545 - 172)
        isoVals.append(int(msg["isoVal38"]) % 545 - 172)
        isoVals.append(int(msg["isoVal39"]) % 545 - 172)
        isoVals.append(int(msg["isoVal40"]) % 545 - 172)
        isoVals.append(int(msg["isoVal41"]) % 545 - 172)
        isoVals.append(int(msg["isoVal42"]) % 545 - 172)
        isoVals.append(int(msg["isoVal43"]) % 545 - 172)
        isoVals.append(int(msg["isoVal44"]) % 545 - 172)
        isoVals.append(int(msg["isoVal45"]) % 545 - 172)
        isoVals.append(int(msg["isoVal46"]) % 545 - 172)
        isoVals.append(int(msg["isoVal47"]) % 545 - 172)
        isoVals.append(int(msg["isoVal48"]) % 545 - 172)
        isoVals.append(int(msg["isoVal49"]) % 545 - 172)
        isoVals.append(int(msg["isoVal50"]) % 545 - 172)
        isoVals.append(int(msg["isoVal51"]) % 545 - 172)
        isoVals.append(int(msg["isoVal52"]) % 545 - 172)
        isoVals.append(int(msg["isoVal53"]) % 545 - 172)
        isoVals.append(int(msg["isoVal54"]) % 545 - 172)
        isoVals.append(int(msg["isoVal55"]) % 545 - 172)
        isoVals.append(int(msg["isoVal56"]) % 545 - 172)
        isoVals.append(int(msg["isoVal57"]) % 545 - 172)
        isoVals.append(int(msg["isoVal58"]) % 545 - 172)
        isoVals.append(int(msg["isoVal59"]) % 545 - 172)
        isoVals.append(int(msg["isoVal60"]) % 545 - 172)
        isoVals.append(int(msg["isoVal61"]) % 545 - 172)
        isoVals.append(int(msg["isoVal62"]) % 545 - 172)
        isoVals.append(int(msg["isoVal63"]) % 545 - 172)
        isoVals.append(int(msg["isoVal64"]) % 545 - 172)
        isoVals.append(int(msg["isoVal65"]) % 545 - 172)
        isoVals.append(int(msg["isoVal66"]) % 545 - 172)
        isoVals.append(int(msg["isoVal67"]) % 545 - 172)
        isoVals.append(int(msg["isoVal68"]) % 545 - 172)
        isoVals.append(int(msg["isoVal69"]) % 545 - 172)
        isoVals.append(int(msg["isoVal70"]) % 545 - 172)
        isoVals.append(int(msg["isoVal71"]) % 545 - 172)
        isoVals.append(int(msg["isoVal72"]) % 545 - 172)
        isoVals.append(int(msg["isoVal73"]) % 545 - 172)
        isoVals.append(int(msg["isoVal74"]) % 545 - 172)
        isoVals.append(int(msg["isoVal75"]) % 545 - 172)
        isoVals.append(int(msg["isoVal76"]) % 545 - 172)
        isoVals.append(int(msg["isoVal77"]) % 545 - 172)
        isoVals.append(int(msg["isoVal78"]) % 545 - 172)
        isoVals.append(int(msg["isoVal79"]) % 545 - 172)
        isoVals.append(int(msg["isoVal80"]) % 545 - 172)
        isoVals.append(int(msg["isoVal81"]) % 545 - 172)
        isoVals.append(int(msg["isoVal82"]) % 545 - 172)
        isoVals.append(int(msg["isoVal83"]) % 545 - 172)
        isoVals.append(int(msg["isoVal84"]) % 545 - 172)
        isoVals.append(int(msg["isoVal85"]) % 545 - 172)
        isoVals.append(int(msg["isoVal86"]) % 545 - 172)
        isoVals.append(int(msg["isoVal87"]) % 545 - 172)
        isoVals.append(int(msg["isoVal88"]) % 545 - 172)
        isoVals.append(int(msg["isoVal89"]) % 545 - 172)
        isoVals.append(int(msg["isoVal90"]) % 545 - 172)
        isoVals.append(int(msg["isoVal91"]) % 545 - 172)
        isoVals.append(int(msg["isoVal92"]) % 545 - 172)
        isoVals.append(int(msg["isoVal93"]) % 545 - 172)
        isoVals.append(int(msg["isoVal94"]) % 545 - 172)
        isoVals.append(int(msg["isoVal95"]) % 545 - 172)
        isoVals.append(int(msg["isoVal96"]) % 545 - 172)
        isoVals.append(int(msg["isoVal97"]) % 545 - 172)
        isoVals.append(int(msg["isoVal98"]) % 545 - 172)
        isoVals.append(int(msg["isoVal99"]) % 545 - 172)

        enerFlag = int(msg["enerFlag"]) % 2
        enerNum = int(msg["enerNum"]) % 100
        enerVals = []
        enerVals.append(int(msg["enerVal0"]) % 545 - 172)
        enerVals.append(int(msg["enerVal1"]) % 545 - 172)
        enerVals.append(int(msg["enerVal2"]) % 545 - 172)
        enerVals.append(int(msg["enerVal3"]) % 545 - 172)
        enerVals.append(int(msg["enerVal4"]) % 545 - 172)
        enerVals.append(int(msg["enerVal5"]) % 545 - 172)
        enerVals.append(int(msg["enerVal6"]) % 545 - 172)
        enerVals.append(int(msg["enerVal7"]) % 545 - 172)
        enerVals.append(int(msg["enerVal8"]) % 545 - 172)
        enerVals.append(int(msg["enerVal9"]) % 545 - 172)
        enerVals.append(int(msg["enerVal10"]) % 545 - 172)
        enerVals.append(int(msg["enerVal11"]) % 545 - 172)
        enerVals.append(int(msg["enerVal12"]) % 545 - 172)
        enerVals.append(int(msg["enerVal13"]) % 545 - 172)
        enerVals.append(int(msg["enerVal14"]) % 545 - 172)
        enerVals.append(int(msg["enerVal15"]) % 545 - 172)
        enerVals.append(int(msg["enerVal16"]) % 545 - 172)
        enerVals.append(int(msg["enerVal17"]) % 545 - 172)
        enerVals.append(int(msg["enerVal18"]) % 545 - 172)
        enerVals.append(int(msg["enerVal19"]) % 545 - 172)
        enerVals.append(int(msg["enerVal20"]) % 545 - 172)
        enerVals.append(int(msg["enerVal21"]) % 545 - 172)
        enerVals.append(int(msg["enerVal22"]) % 545 - 172)
        enerVals.append(int(msg["enerVal23"]) % 545 - 172)
        enerVals.append(int(msg["enerVal24"]) % 545 - 172)
        enerVals.append(int(msg["enerVal25"]) % 545 - 172)
        enerVals.append(int(msg["enerVal26"]) % 545 - 172)
        enerVals.append(int(msg["enerVal27"]) % 545 - 172)
        enerVals.append(int(msg["enerVal28"]) % 545 - 172)
        enerVals.append(int(msg["enerVal29"]) % 545 - 172)
        enerVals.append(int(msg["enerVal30"]) % 545 - 172)
        enerVals.append(int(msg["enerVal31"]) % 545 - 172)
        enerVals.append(int(msg["enerVal32"]) % 545 - 172)
        enerVals.append(int(msg["enerVal33"]) % 545 - 172)
        enerVals.append(int(msg["enerVal34"]) % 545 - 172)
        enerVals.append(int(msg["enerVal35"]) % 545 - 172)
        enerVals.append(int(msg["enerVal36"]) % 545 - 172)
        enerVals.append(int(msg["enerVal37"]) % 545 - 172)
        enerVals.append(int(msg["enerVal38"]) % 545 - 172)
        enerVals.append(int(msg["enerVal39"]) % 545 - 172)
        enerVals.append(int(msg["enerVal40"]) % 545 - 172)
        enerVals.append(int(msg["enerVal41"]) % 545 - 172)
        enerVals.append(int(msg["enerVal42"]) % 545 - 172)
        enerVals.append(int(msg["enerVal43"]) % 545 - 172)
        enerVals.append(int(msg["enerVal44"]) % 545 - 172)
        enerVals.append(int(msg["enerVal45"]) % 545 - 172)
        enerVals.append(int(msg["enerVal46"]) % 545 - 172)
        enerVals.append(int(msg["enerVal47"]) % 545 - 172)
        enerVals.append(int(msg["enerVal48"]) % 545 - 172)
        enerVals.append(int(msg["enerVal49"]) % 545 - 172)
        enerVals.append(int(msg["enerVal50"]) % 545 - 172)
        enerVals.append(int(msg["enerVal51"]) % 545 - 172)
        enerVals.append(int(msg["enerVal52"]) % 545 - 172)
        enerVals.append(int(msg["enerVal53"]) % 545 - 172)
        enerVals.append(int(msg["enerVal54"]) % 545 - 172)
        enerVals.append(int(msg["enerVal55"]) % 545 - 172)
        enerVals.append(int(msg["enerVal56"]) % 545 - 172)
        enerVals.append(int(msg["enerVal57"]) % 545 - 172)
        enerVals.append(int(msg["enerVal58"]) % 545 - 172)
        enerVals.append(int(msg["enerVal59"]) % 545 - 172)
        enerVals.append(int(msg["enerVal60"]) % 545 - 172)
        enerVals.append(int(msg["enerVal61"]) % 545 - 172)
        enerVals.append(int(msg["enerVal62"]) % 545 - 172)
        enerVals.append(int(msg["enerVal63"]) % 545 - 172)
        enerVals.append(int(msg["enerVal64"]) % 545 - 172)
        enerVals.append(int(msg["enerVal65"]) % 545 - 172)
        enerVals.append(int(msg["enerVal66"]) % 545 - 172)
        enerVals.append(int(msg["enerVal67"]) % 545 - 172)
        enerVals.append(int(msg["enerVal68"]) % 545 - 172)
        enerVals.append(int(msg["enerVal69"]) % 545 - 172)
        enerVals.append(int(msg["enerVal70"]) % 545 - 172)
        enerVals.append(int(msg["enerVal71"]) % 545 - 172)
        enerVals.append(int(msg["enerVal72"]) % 545 - 172)
        enerVals.append(int(msg["enerVal73"]) % 545 - 172)
        enerVals.append(int(msg["enerVal74"]) % 545 - 172)
        enerVals.append(int(msg["enerVal75"]) % 545 - 172)
        enerVals.append(int(msg["enerVal76"]) % 545 - 172)
        enerVals.append(int(msg["enerVal77"]) % 545 - 172)
        enerVals.append(int(msg["enerVal78"]) % 545 - 172)
        enerVals.append(int(msg["enerVal79"]) % 545 - 172)
        enerVals.append(int(msg["enerVal80"]) % 545 - 172)
        enerVals.append(int(msg["enerVal81"]) % 545 - 172)
        enerVals.append(int(msg["enerVal82"]) % 545 - 172)
        enerVals.append(int(msg["enerVal83"]) % 545 - 172)
        enerVals.append(int(msg["enerVal84"]) % 545 - 172)
        enerVals.append(int(msg["enerVal85"]) % 545 - 172)
        enerVals.append(int(msg["enerVal86"]) % 545 - 172)
        enerVals.append(int(msg["enerVal87"]) % 545 - 172)
        enerVals.append(int(msg["enerVal88"]) % 545 - 172)
        enerVals.append(int(msg["enerVal89"]) % 545 - 172)
        enerVals.append(int(msg["enerVal90"]) % 545 - 172)
        enerVals.append(int(msg["enerVal91"]) % 545 - 172)
        enerVals.append(int(msg["enerVal92"]) % 545 - 172)
        enerVals.append(int(msg["enerVal93"]) % 545 - 172)
        enerVals.append(int(msg["enerVal94"]) % 545 - 172)
        enerVals.append(int(msg["enerVal95"]) % 545 - 172)
        enerVals.append(int(msg["enerVal96"]) % 545 - 172)
        enerVals.append(int(msg["enerVal97"]) % 545 - 172)
        enerVals.append(int(msg["enerVal98"]) % 545 - 172)
        enerVals.append(int(msg["enerVal99"]) % 545 - 172)

        runTime = int(msg["runTime"]) % 10000 + 1

        msg = ""
        msg = "{material}".format(material = material)
        sys.stdout.write(msg)
        sys.stdout.flush()
        if (material == 4): #Custom material
            msg = "{tcVal}".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit *= thermMod1
            msg = "{tcVal}".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit *= thermMod2
            msg = "{tcVal}".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit *= thermMod3
            msg = "{tcVal}".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit *= thermMod4
            msg = "{tcVal}".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit *= thermMod5
            msg = "{tcVal}".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit *= thermMod6
            msg = "{tcVal}".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit *= thermMod7
            msg = "{tcVal}".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{hcVal}".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit *= heatMod1
            msg = "{hcVal}".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit *= heatMod2
            msg = "{hcVal}".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit *= heatMod3
            msg = "{hcVal}".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit *= heatMod4
            msg = "{hcVal}".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit *= heatMod5
            msg = "{hcVal}".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit *= heatMod6
            msg = "{hcVal}".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit *= heatMod7
            msg = "{hcVal}".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
        msg = "{x},{y},{z}".format(x = xDim, y = yDim, z = zDim)
        sys.stdout.write(msg)
        sys.stdout.flush()
        if (isoFlag == 0): #Isothermic
            msg = "y"
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{temp}".format(temp = isoVals[0])
            sys.stdout.write(msg)
            sys.stdout.flush()
        else: #Not isothermic
            msg = "n"
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = ""
            for i in range(0, isoNum, 1):
                msg += "{temp},".format(temp = isoVals[i])
            sys.stdout.write(msg[:-1]) #Remove the final comma
            sys.stdout.flush()
        if (enerFlag == 0): #Constant energy sources
            msg = ""
            for i in range(0, enerNum, 1):
                msg += "{temp},".format(temp = enerVals[i])
            sys.stdout.write(msg[:-1]) #Remove the final comma
            sys.stdout.flush()
        #Do nothing for no constant energy sources
        msg = "{runtime}".format(runtime = runTime)
        sys.stdout.write(msg)
        sys.stdout.flush()
        msg = "\n"
        for i in range(0, runTime, 10): #Cycle through the simulation
            sys.stdout.write(msg)
            sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Material_Temperature_Simulation Relay")
    relay = RELAY()
    relay.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
