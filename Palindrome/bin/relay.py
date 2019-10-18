#!/usr/bin/env python3
import sys
from sys import stdin
import argparse
import base64

###############################################################################
outstr = ""
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
        global outstr
        option = int(msg["option"])
        location = int(msg["location"]) % len(outstr) if len(outstr) > 0 else 0
        cha = chr(int(msg["cha"])) if 32 <= int(msg["cha"]) <= 126 else msg["cha"]
        if option == 1 :
            #add character at location
            outstr = outstr[:location] + cha + outstr[location:]
        elif option == 2 :
            #change character at location
            outstr = outstr[:location] + cha + outstr[location+1:]
        else :
            #delete character at location
            outstr = outstr[:location] + outstr[location+1:]
        sys.stdout.write(outstr+"\n")
        sys.stdout.flush()

###############################################################################
def main():
    global outstr
    while True:
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="Palindrome Relay")
        relay = RELAY()
        relay.run(line)

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
