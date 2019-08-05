#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_msg(Structure):
    _fields_ = [("command"  , c_int), #Some int 0-4
		("size"     , c_int), #Some int 0-1000
                ("deck"     , c_int * 1000), #Int arr of fixed size 1000
            ]

_libagoc = CDLL('../lib/libagoc.so')
_libagoc.step.restype = c_msg

def cstep():
    global _libagoc
    return _libagoc.step()

###############################################################################
class SENDER():
    def __init__(self):
        pass

    def run(self):
        #print("Sender starting")
        while True:
            #print("Getting test vector")
            msg = self.getTestVector()
            #print("Processing test vector")
            self.processTestVector(msg)
            time.sleep(0.1)

    def getTestVector(self):
        return cstep()

    def processTestVector(self,struc):
        deckStr = ""
        for num in struc.deck:
             #print(num)
             deckStr += "{}".format(num - 2)
        #print(deckStr)
        msg = ""
        msg += " command {}".format(struc.command)
        msg += " size {}".format(struc.size)
        msg += " deck {}".format(deckStr)
        #print(msg)
        e64 = base64.b64encode(msg.encode()).decode()
        #print(e64)
        sys.stdout.write(e64 + "\n")
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="GoC Relay")
    sender = SENDER()
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
