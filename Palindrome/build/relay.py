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
        length = int(msg["length"])
        testStr = msg["testStr"]

        msg = ""
        msg += "{testStr}".format(testStr = testStr[:length])
        sys.stdout.write(msg)
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Palindrome Relay")
    relay = RELAY()
    relay.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
