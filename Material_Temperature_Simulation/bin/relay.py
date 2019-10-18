#!/usr/bin/env python3
import sys
from sys import stdin
import argparse
import base64

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
        material = int(msg["material"])

        thermInit = float(msg["thermInit"])
        thermMod = float(msg["thermMod"])

        heatInit = float(msg["thermInit"])
        heatMod = float(msg["thermMod"])

        xDim = int(msg["xDim"])
        yDim = int(msg["yDim"])
        zDim = int(msg["zDim"])

        isoFlag = int(msg["isoFlag"])
        isoVal = float(msg["isoVal"])

        enerFlag = int(msg["enerFlag"])
        enerVal = float(msg["enerVal"])

        runTime = int(msg["runTime"])

        msg = ""
        msg = "{material}\n".format(material = material)
        sys.stdout.write(msg)
        sys.stdout.flush()
        if (material == 4): #Custom material
            msg = "{tcVal}\n".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit = thermInit + thermInit*thermMod
            msg = "{tcVal}\n".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit = thermInit + thermInit*thermMod
            msg = "{tcVal}\n".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit = thermInit + thermInit*thermMod
            msg = "{tcVal}\n".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit = thermInit + thermInit*thermMod
            msg = "{tcVal}\n".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit = thermInit + thermInit*thermMod
            msg = "{tcVal}\n".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit = thermInit + thermInit*thermMod
            msg = "{tcVal}\n".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            thermInit = thermInit + thermInit*thermMod
            msg = "{tcVal}\n".format(tcVal = thermInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{hcVal}\n".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit = heatInit + heatInit*heatMod
            msg = "{hcVal}\n".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit = heatInit + heatInit*heatMod
            msg = "{hcVal}\n".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit = heatInit + heatInit*heatMod
            msg = "{hcVal}\n".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit = heatInit + heatInit*heatMod
            msg = "{hcVal}\n".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit = heatInit + heatInit*heatMod
            msg = "{hcVal}\n".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit = heatInit + heatInit*heatMod
            msg = "{hcVal}\n".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()
            heatInit = heatInit + heatInit*heatMod
            msg = "{hcVal}\n".format(hcVal = heatInit)
            sys.stdout.write(msg)
            sys.stdout.flush()

        msg = "{x},{y},{z}\n".format(x = xDim, y = yDim, z = zDim)
        sys.stdout.write(msg)
        sys.stdout.flush()
        if (isoFlag == 1): #Isothermic
            msg = "y\n"
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{temp}\n".format(temp = isoVal)
            sys.stdout.write(msg)
            sys.stdout.flush()
        else: #Not isothermic
            msg = "n\n"
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = ""
            if 0 <= xDim*yDim*zDim <= 3375:
                for i in range(0, xDim*yDim*zDim, 1):
                    msg += "{temp},".format(temp = isoVal)
                sys.stdout.write(msg[:-1]) #Remove the final comma
            sys.stdout.write("\n")
            sys.stdout.flush()
        if (enerFlag == 1): #Constant energy sources
            msg = "y\n"
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = ""
            if 0 <= xDim*yDim*zDim <= 3375:
                for i in range(0, xDim*yDim*zDim, 1):
                    msg += "{temp}\n,".format(temp = enerVal)
                sys.stdout.write(msg[:-1]) #Remove the final comma
            sys.stdout.write("\n")
            sys.stdout.flush()
        else:
            msg = "n\n"
            sys.stdout.write(msg)
            sys.stdout.flush()
        msg = "{runtime}\n".format(runtime = runTime)
        sys.stdout.write(msg)
        sys.stdout.flush()

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="Material_Temperature_Simulation Relay")
        relay = RELAY()
        relay.run(line)

###############################################################################
if __name__ == "__main__":
    main()
