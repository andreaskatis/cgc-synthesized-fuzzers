#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_msg(Structure):
    _fields_ = [("main"     , c_double),
                ("username" , c_double),
                ("password" , c_double),
                ("flag"     , c_double),
                ("userIdx"  , c_double),
                ("cmd"      , c_double),
                ("index"    , c_double)
            ]

_lib_User_Manager = CDLL('../lib/lib_User_Manager.so')
_lib_User_Manager.step.restype  = c_msg

def cstep(cvg):
    global _lib_User_Manager
    return _lib_User_Manager.step(cvg)

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
        msg += " main {}".format(int(round(struc.main)))
        msg += " username {}".format(int(round(struc.username)))
        msg += " password {}".format(int(round(struc.password)))
        msg += " flag {}".format(int(round(struc.flag)))
        msg += " userIdx {}".format(int(round(struc.userIdx)))
	msg += " cmd {}".format(int(round(struc.cmd)))
	msg += " index {}".format(int(round(struc.index)))

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="User_Manager Relay")
        sender = SENDER()
        sender.run(line)

###############################################################################
if __name__ == "__main__":
    main()
