#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_passStr(Structure):
    _fields_ = [("length" , c_int),
                ("chas"   , c_int * 65)
            ]

class c_titleDesc(Structure):
    _fields_ = [("length" , c_int),
                ("chas"   , c_int * 100)
            ]

class c_add(Structure):
    _fields_ = [("title"  , c_titleDesc),
                ("desc"   , c_titleDesc),
                ("year"   , c_int),
                ("score"  , c_int),
                ("genre"  , c_int),
                ("rating" , c_int)
            ]

class c_msg(Structure):
    _fields_ = [("main"    , c_int),
                ("movID"   , c_int),
                ("flag"    , c_int),
                ("passStr" , c_passStr),
                ("admin"   , c_int),
                ("addVal"  , c_add)
            ]

_lib_Movie_Rental_Service = CDLL('../lib/lib_Movie_Rental_Service.so')
_lib_Movie_Rental_Service.step.restype  = c_msg

def cstep():
    global _lib_Movie_Rental_Service
    return _lib_Movie_Rental_Service.step()

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
        password = ""
        for num in struc.passStr.chas:
            asc = chr(int(num) % 95 + 32)
            password += asc

        title = ""
        for num in struc.addVal.title.chas:
            asc = chr(int(num) % 95 + 32)
            title += asc

        desc = ""
        for num in struc.addVal.desc.chas:
            asc = chr(int(num) % 95 + 32)
            desc += asc

        msg = ""
        msg += " main {}".format(struc.main)
        msg += " movID {}".format(struc.movID)
        msg += " flag {}".format(struc.flag)
        msg += " passLength {}".format(struc.passStr.length)
        msg += " passStr {}".format(password)
        msg += " admin {}".format(struc.admin)
        msg += " titleLength {}".format(struc.addVal.title.length)
        msg += " title {}".format(title)
        msg += " descLength {}".format(struc.addVal.desc.length)
        msg += " desc {}".format(desc)
        msg += " year {}".format(struc.addVal.year)
        msg += " score {}".format(struc.addVal.score)
        msg += " genre {}".format(struc.addVal.genre)
        msg += " rating {}".format(struc.addVal.rating)

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Movie_Rental_Service Relay")
    sender = SENDER()
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
