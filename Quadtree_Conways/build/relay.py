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
        command = int(msg["command"]) % 5 + 1
        xCoord = int(msg["xCoord"]) % 8192
        yCoord = int(msg["yCoord"]) % 8192
        runTime = int(msg["runTime"]) % 901 + 100

        msg = ""
        msg = "{cmd}".format(cmd = command)
        sys.stdout.write(msg)
        sys.stdout.flush()
        if (command == 1):
            msg = "{x},{y}".format(x = xCoord, y = yCoord)
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (command == 3):
            msg = "{run}".format(run = runTime)
            sys.stdout.write(msg)
            sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Quadtree_Conways Relay")
    relay = RELAY()
    relay.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
