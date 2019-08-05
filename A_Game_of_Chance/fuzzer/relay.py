#!/usr/bin/env python3
import sys
from sys import stdin
import argparse
import base64

###############################################################################
class RELAY():
    #Possible commands
    
    #Map of ints to respective hex chars
    

    def __init__(self):
        pass

    def run(self):
        while True:
            msg = self.getTestVector()
            #print(msg)
            self.processTestVector(msg)

    #Might need to edit based on how the deck is transmitted
    def getTestVector(self):
        payload = stdin.readline()
        print(payload)
        un64 = base64.b64decode(payload.encode()).decode()
        pairlist = un64.split()
        #print(pairlist)
        assert(0 == (len(pairlist) % 2))
        assert(0 != (len(pairlist)))
        pairs = [pairlist[i:i+2] for i in range(0,len(pairlist),2)]
        alist = { key: value for (key,value) in pairs}
        #print(alist)
        return alist

    def processTestVector(self,msg):
        #print(msg)
        cmd = ["!aaaa", "a_aaa", "aa<aa", "aaaBa", "aaaac"][int(msg["command"])]
        size = int(msg["size"])
        deck = []
        for cha in msg["deck"]:
            deck.append(int(cha))
        chaDeck = []
        chaConv = ["\x02", "\x03", "\x04", "\x05", "\x06", "\x07", "\x08", "\x09", "\x0a"]
        for num in deck:
            chaDeck.append(chaConv[num])
        #print(cmd, size, chaDeck)

        msg = ""
        if cmd == "!aaaa": #New deck
            msg += "{cmd}\n{size}\n{deck}".format(cmd = cmd, size = size, deck = chaDeck[:size])
        else: #Any other command
            msg += "{cmd}".format(cmd = cmd)

        sys.stdout.write(msg)
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="GoC Relay")
    relay = RELAY()
    relay.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
