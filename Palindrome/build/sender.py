#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_msg(Structure):
    _fields_ = [("length" , c_int),
                ("chas"   , c_int * 200)
            ]

_lib_Palindrome = CDLL('../lib/lib_Palindrome.so')
_lib_Palindrome.step.restype  = c_msg

def cstep():
    global _lib_Palindrome
    return _lib_Palindrome.step()

###############################################################################
class SENDER():
    def __init__(self):
        pass

    def run(self):
        while True:
            msg = self.getTestVector()
            self.processTestVector(msg)
            time.sleep(0.1)

    def getTestVector(self):
        return cstep()

    def processTestVector(self,struc):
        testStr = ""
        for num in struc.chas:
            asc = chr(int(num))
            testStr += asc

        msg = ""
        msg += " length {}".format(struc.length)
        msg += " testStr {}".format(testStr)

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Palindrome Relay")
    sender = SENDER()
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
