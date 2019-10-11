#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_msg(Structure):
    _fields_ = [("command"  , c_double),
                ("size"     , c_double),
                ("deck"     , c_double * 127),
                ("snd"     , c_double)
            ]

_lib_A_Game_of_Chance = CDLL('../lib/lib_A_Game_of_Chance.so')
_lib_A_Game_of_Chance.step.restype = c_msg

def cstep(cvg):
    global _lib_A_Game_of_Chance
    return _lib_A_Game_of_Chance.step(cvg)

###############################################################################
class SENDER():
    def __init__(self):
        pass

    def run(self, cvg):
        msg = self.getTestVector(cvg)
        self.processTestVector(msg)
        time.sleep(0.1)

    def getTestVector(self, cvg):
        return cstep(cvg)

    def processTestVector(self,struc):
        deckStr = ""
        for num in struc.deck:
             deckStr += "{}".format(int(round(num)))

        msg = ""
        msg += " command {}".format(int(round(struc.command)))
        msg += " size {}".format(int(round(struc.size)))
        msg += " deck {}".format(deckStr)
        msg += " snd {}".format(int(round(struc.snd)))
        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + "\n")
        sys.stdout.flush()

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="A_Game_of_Chance Relay")
        sender = SENDER()
        sender.run(line)

###############################################################################
if __name__ == "__main__":
    sys.exit(main())