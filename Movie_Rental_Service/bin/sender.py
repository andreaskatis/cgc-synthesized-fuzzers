#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_passStr(Structure):
    _fields_ = [("length" , c_double),
                ("chas"   , c_double * 5)
            ]

class c_add(Structure):
    _fields_ = [("title"  , c_passStr),
                ("desc"   , c_passStr),
                ("year"   , c_double),
                ("score"  , c_double),
                ("genre"  , c_double),
                ("rating" , c_double)
            ]

class c_msg(Structure):
    _fields_ = [("main"    , c_double),
                ("movieID"   , c_double),
                ("flag"    , c_double),
                ("password" , c_passStr),
                ("admin"   , c_double),
                ("addVal"  , c_add)
            ]

_lib_Movie_Rental_Service = CDLL('../lib/lib_Movie_Rental_Service.so')
_lib_Movie_Rental_Service.step.restype  = c_msg

def cstep(cvg):
    global _lib_Movie_Rental_Service
    return _lib_Movie_Rental_Service.step(cvg)

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
        password = ",".join(str(int(round(x))) for x in struc.password.chas)

        title = ",".join(str(int(round(x))) for x in struc.addVal.title.chas)

        desc = ",".join(str(int(round(x))) for x in struc.addVal.desc.chas)

        msg = ""
        msg += " main {}".format(int(round(struc.main)))
        msg += " movieID {}".format(int(round(struc.movieID)))
        msg += " flag {}".format(int(round(struc.flag)))
        msg += " passLength {}".format(int(round(struc.password.length)))
        msg += " passStr {}".format(password)
        msg += " admin {}".format(int(round(struc.admin)))
        msg += " titleLength {}".format(int(round(struc.addVal.title.length)))
        msg += " title {}".format(title)
        msg += " descLength {}".format(int(round(struc.addVal.desc.length)))
        msg += " desc {}".format(desc)
        msg += " year {}".format(int(round(struc.addVal.year)))
        msg += " score {}".format(int(round(struc.addVal.score)))
        msg += " genre {}".format(int(round(struc.addVal.genre)))
        msg += " rating {}".format(int(round(struc.addVal.rating)))

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="Movie_Rental_Service Relay")
        sender = SENDER()
        sender.run(line)

###############################################################################
if __name__ == "__main__":
    main()
