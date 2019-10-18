#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_msg(Structure):
    _fields_ = [("cha" , c_double),
                ("option"   , c_double),
                ("location", c_double)
            ]

_lib_Palindrome = CDLL('../lib/lib_Palindrome.so')
_lib_Palindrome.step.restype  = c_msg

def cstep(cvg):
    global _lib_Palindrome
    return _lib_Palindrome.step(cvg)

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
        
        msg = ""
        msg += " cha {}".format(int(round(struc.cha)))
        msg += " option {}".format(int(round(struc.option)))
        msg += " location {}".format(int(round(struc.location)))

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="Palindrome Relay")
        sender = SENDER()
        sender.run(line)

###############################################################################
if __name__ == "__main__":
    main()
