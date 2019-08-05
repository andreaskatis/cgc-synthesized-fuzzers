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
        #print(payload)
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

        sizeHex = hex(size)
        sizeFront = ""
        sizeBack = ""
        if (len(sizeHex) == 3):
            sizeFront += "\\" + "x0" + sizeHex[-1]
            sizeBack += "\\" + "x00"
        elif (len(sizeHex) == 4):
            sizeFront += "\\" + "x" + sizeHex[-2:]
            sizeBack += "\\" + "x00"
        else:
            sizeFront += "\\" + "x" + sizeHex[-2:]
            sizeBack += "\\" + "x0" + sizeHex[-3]

        for cha in msg["deck"]:
            deck.append(int(cha))
        chaDeck = ""
        for num in deck:
            num += 1 #Undo the -1 operation in sender
            if (num == 10):
                chaDeck += "\\" + "x10"
            else:
                hexNum = hex(num)
                chaDeck += "\\" + "x0" + hexNum[-1]
        #print(cmd, size, chaDeck)

        msg = ""
        if cmd == "!aaaa": #New deck
            msg = "{cmd}".format(cmd = cmd)
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{front}\n{back}".format(front = sizeFront, back = sizeBack)
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{deck}".format(deck = chaDeck[:size])
            sys.stdout.write(msg)
            sys.stdout.flush()
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
