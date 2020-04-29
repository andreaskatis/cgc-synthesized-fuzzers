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
        main = int(msg["main"])
        xCoord = int(msg["xCoord"])
        yCoord = int(msg["yCoord"])
        time = int(msg["time"])

        msg = ""
        msg += "{main}\n".format(main = main)
        sys.stdout.write(msg)
        sys.stdout.flush
        if (main == 1): # Send coords
            msg = "{x},{y}".format(x = xCoord, y = yCoord)
            sys.stdout.write(msg)
            sys.stdout.flush
        elif (main == 3): # Send time
            msg = "{time}".format(time = time)
            sys.stdout.write(msg)
            sys.stdout.flush
        # Main = 2, 4, 5: Do nothing

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="QuadtreeConways Relay")
        relay = RELAY()
        relay.run(line)

###############################################################################
if __name__ == "__main__":
    main()
