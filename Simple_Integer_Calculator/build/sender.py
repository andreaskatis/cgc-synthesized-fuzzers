#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_strChar(Structure):
    _fields_ = [("cha1" , c_int), #Represents ASCII value: 32-126
                ("cha2" , c_int),
                ("cha3" , c_int),
                ("cha4" , c_int),
                ("cha5" , c_int),
                ("cha6" , c_int)
            ]

class c_expr(Structure):
    _fields_ = [("typeF" , c_int), #Type of the front value: 0-2
                ("operF" , c_int), #Represents front int/bool value: Any int
                ("strF"  , c_strChar), #Represents front str
                ("cmd"   , c_int), #Possible command: 0-15
                ("typeB" , c_int),
                ("operB" , c_int),
                ("strB"  , c_strChar)
            ]

class c_msg(Structure):
    _fields_ = [("length" , c_int), #How many expressions to use
                ("exp1"   , c_expr),
                ("exp2"   , c_expr),
                ("exp3"   , c_expr),
                ("exp4"   , c_expr),
                ("exp5"   , c_expr),
                ("exp6"   , c_expr),
                ("exp7"   , c_expr),
                ("exp8"   , c_expr),
                ("exp9"   , c_expr),
                ("exp10"  , c_expr),
                ("exp11"  , c_expr),
                ("exp12"  , c_expr),
                ("exp13"  , c_expr),
                ("exp14"  , c_expr),
                ("exp15"  , c_expr),
                ("exp16"  , c_expr),
                ("exp17"  , c_expr),
            ]

_lib_Simple_Integer_Calculator = CDLL('../lib/lib_Simple_Integer_Calculator.so')
_lib_Simple_Integer_Calculator.step.restype  = c_msg

def cstep():
    global _lib_Simple_Integer_Calculator
    return _lib_Simple_Integer_Calculator.step()

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
        msg = ""
        msg += " length {}".format(struc.length)

        msg += " e1tyF {}".format(struc.exp1.typeF)
        msg += " e1opF {}".format(struc.exp1.operF)
        msg += " e1sF1 {}".format(struc.exp1.strF.cha1)
        msg += " e1sF2 {}".format(struc.exp1.strF.cha2)
        msg += " e1sF3 {}".format(struc.exp1.strF.cha3)
        msg += " e1sF4 {}".format(struc.exp1.strF.cha4)
        msg += " e1sF5 {}".format(struc.exp1.strF.cha5)
        msg += " e1sF6 {}".format(struc.exp1.strF.cha6)
        msg += " e1cmd {}".format(struc.exp1.cmd)
        msg += " e1tyB {}".format(struc.exp1.typeB)
        msg += " e1opB {}".format(struc.exp1.operB)
        msg += " e1sB1 {}".format(struc.exp1.strB.cha1)
        msg += " e1sB2 {}".format(struc.exp1.strB.cha2)
        msg += " e1sB3 {}".format(struc.exp1.strB.cha3)
        msg += " e1sB4 {}".format(struc.exp1.strB.cha4)
        msg += " e1sB5 {}".format(struc.exp1.strB.cha5)
        msg += " e1sB6 {}".format(struc.exp1.strB.cha6)

        msg += " e2tyF {}".format(struc.exp2.typeF)
        msg += " e2opF {}".format(struc.exp2.operF)
        msg += " e2sF1 {}".format(struc.exp2.strF.cha1)
        msg += " e2sF2 {}".format(struc.exp2.strF.cha2)
        msg += " e2sF3 {}".format(struc.exp2.strF.cha3)
        msg += " e2sF4 {}".format(struc.exp2.strF.cha4)
        msg += " e2sF5 {}".format(struc.exp2.strF.cha5)
        msg += " e2sF6 {}".format(struc.exp2.strF.cha6)
        msg += " e2cmd {}".format(struc.exp2.cmd)
        msg += " e2tyB {}".format(struc.exp2.typeB)
        msg += " e2opB {}".format(struc.exp2.operB)
        msg += " e2sB1 {}".format(struc.exp2.strB.cha1)
        msg += " e2sB2 {}".format(struc.exp2.strB.cha2)
        msg += " e2sB3 {}".format(struc.exp2.strB.cha3)
        msg += " e2sB4 {}".format(struc.exp2.strB.cha4)
        msg += " e2sB5 {}".format(struc.exp2.strB.cha5)
        msg += " e2sB6 {}".format(struc.exp2.strB.cha6)

        msg += " e3tyF {}".format(struc.exp3.typeF)
        msg += " e3opF {}".format(struc.exp3.operF)
        msg += " e3sF1 {}".format(struc.exp3.strF.cha1)
        msg += " e3sF2 {}".format(struc.exp3.strF.cha2)
        msg += " e3sF3 {}".format(struc.exp3.strF.cha3)
        msg += " e3sF4 {}".format(struc.exp3.strF.cha4)
        msg += " e3sF5 {}".format(struc.exp3.strF.cha5)
        msg += " e3sF6 {}".format(struc.exp3.strF.cha6)
        msg += " e3cmd {}".format(struc.exp3.cmd)
        msg += " e3tyB {}".format(struc.exp3.typeB)
        msg += " e3opB {}".format(struc.exp3.operB)
        msg += " e3sB1 {}".format(struc.exp3.strB.cha1)
        msg += " e3sB2 {}".format(struc.exp3.strB.cha2)
        msg += " e3sB3 {}".format(struc.exp3.strB.cha3)
        msg += " e3sB4 {}".format(struc.exp3.strB.cha4)
        msg += " e3sB5 {}".format(struc.exp3.strB.cha5)
        msg += " e3sB6 {}".format(struc.exp3.strB.cha6)

        msg += " e4tyF {}".format(struc.exp4.typeF)
        msg += " e4opF {}".format(struc.exp4.operF)
        msg += " e4sF1 {}".format(struc.exp4.strF.cha1)
        msg += " e4sF2 {}".format(struc.exp4.strF.cha2)
        msg += " e4sF3 {}".format(struc.exp4.strF.cha3)
        msg += " e4sF4 {}".format(struc.exp4.strF.cha4)
        msg += " e4sF5 {}".format(struc.exp4.strF.cha5)
        msg += " e4sF6 {}".format(struc.exp4.strF.cha6)
        msg += " e4cmd {}".format(struc.exp4.cmd)
        msg += " e4tyB {}".format(struc.exp4.typeB)
        msg += " e4opB {}".format(struc.exp4.operB)
        msg += " e4sB1 {}".format(struc.exp4.strB.cha1)
        msg += " e4sB2 {}".format(struc.exp4.strB.cha2)
        msg += " e4sB3 {}".format(struc.exp4.strB.cha3)
        msg += " e4sB4 {}".format(struc.exp4.strB.cha4)
        msg += " e4sB5 {}".format(struc.exp4.strB.cha5)
        msg += " e4sB6 {}".format(struc.exp4.strB.cha6)

        msg += " e5tyF {}".format(struc.exp5.typeF)
        msg += " e5opF {}".format(struc.exp5.operF)
        msg += " e5sF1 {}".format(struc.exp5.strF.cha1)
        msg += " e5sF2 {}".format(struc.exp5.strF.cha2)
        msg += " e5sF3 {}".format(struc.exp5.strF.cha3)
        msg += " e5sF4 {}".format(struc.exp5.strF.cha4)
        msg += " e5sF5 {}".format(struc.exp5.strF.cha5)
        msg += " e5sF6 {}".format(struc.exp5.strF.cha6)
        msg += " e5cmd {}".format(struc.exp5.cmd)
        msg += " e5tyB {}".format(struc.exp5.typeB)
        msg += " e5opB {}".format(struc.exp5.operB)
        msg += " e5sB1 {}".format(struc.exp5.strB.cha1)
        msg += " e5sB2 {}".format(struc.exp5.strB.cha2)
        msg += " e5sB3 {}".format(struc.exp5.strB.cha3)
        msg += " e5sB4 {}".format(struc.exp5.strB.cha4)
        msg += " e5sB5 {}".format(struc.exp5.strB.cha5)
        msg += " e5sB6 {}".format(struc.exp5.strB.cha6)

        msg += " e6tyF {}".format(struc.exp6.typeF)
        msg += " e6opF {}".format(struc.exp6.operF)
        msg += " e6sF1 {}".format(struc.exp6.strF.cha1)
        msg += " e6sF2 {}".format(struc.exp6.strF.cha2)
        msg += " e6sF3 {}".format(struc.exp6.strF.cha3)
        msg += " e6sF4 {}".format(struc.exp6.strF.cha4)
        msg += " e6sF5 {}".format(struc.exp6.strF.cha5)
        msg += " e6sF6 {}".format(struc.exp6.strF.cha6)
        msg += " e6cmd {}".format(struc.exp6.cmd)
        msg += " e6tyB {}".format(struc.exp6.typeB)
        msg += " e6opB {}".format(struc.exp6.operB)
        msg += " e6sB1 {}".format(struc.exp6.strB.cha1)
        msg += " e6sB2 {}".format(struc.exp6.strB.cha2)
        msg += " e6sB3 {}".format(struc.exp6.strB.cha3)
        msg += " e6sB4 {}".format(struc.exp6.strB.cha4)
        msg += " e6sB5 {}".format(struc.exp6.strB.cha5)
        msg += " e6sB6 {}".format(struc.exp6.strB.cha6)

        msg += " e7tyF {}".format(struc.exp7.typeF)
        msg += " e7opF {}".format(struc.exp7.operF)
        msg += " e7sF1 {}".format(struc.exp7.strF.cha1)
        msg += " e7sF2 {}".format(struc.exp7.strF.cha2)
        msg += " e7sF3 {}".format(struc.exp7.strF.cha3)
        msg += " e7sF4 {}".format(struc.exp7.strF.cha4)
        msg += " e7sF5 {}".format(struc.exp7.strF.cha5)
        msg += " e7sF6 {}".format(struc.exp7.strF.cha6)
        msg += " e7cmd {}".format(struc.exp7.cmd)
        msg += " e7tyB {}".format(struc.exp7.typeB)
        msg += " e7opB {}".format(struc.exp7.operB)
        msg += " e7sB1 {}".format(struc.exp7.strB.cha1)
        msg += " e7sB2 {}".format(struc.exp7.strB.cha2)
        msg += " e7sB3 {}".format(struc.exp7.strB.cha3)
        msg += " e7sB4 {}".format(struc.exp7.strB.cha4)
        msg += " e7sB5 {}".format(struc.exp7.strB.cha5)
        msg += " e7sB6 {}".format(struc.exp7.strB.cha6)

        msg += " e8tyF {}".format(struc.exp8.typeF)
        msg += " e8opF {}".format(struc.exp8.operF)
        msg += " e8sF1 {}".format(struc.exp8.strF.cha1)
        msg += " e8sF2 {}".format(struc.exp8strF.cha2)
        msg += " e8sF3 {}".format(struc.exp8.strF.cha3)
        msg += " e8sF4 {}".format(struc.exp8.strF.cha4)
        msg += " e8sF5 {}".format(struc.exp8.strF.cha5)
        msg += " e8sF6 {}".format(struc.exp8.strF.cha6)
        msg += " e8cmd {}".format(struc.exp8.cmd)
        msg += " e8tyB {}".format(struc.exp8.typeB)
        msg += " e8opB {}".format(struc.exp8.operB)
        msg += " e8sB1 {}".format(struc.exp8.strB.cha1)
        msg += " e8sB2 {}".format(struc.exp8.strB.cha2)
        msg += " e8sB3 {}".format(struc.exp8.strB.cha3)
        msg += " e8sB4 {}".format(struc.exp8.strB.cha4)
        msg += " e8sB5 {}".format(struc.exp8.strB.cha5)
        msg += " e8sB6 {}".format(struc.exp8.strB.cha6)

        msg += " e9tyF {}".format(struc.exp9.typeF)
        msg += " e9opF {}".format(struc.exp9.operF)
        msg += " e9sF1 {}".format(struc.exp9.strF.cha1)
        msg += " e9sF2 {}".format(struc.exp9.strF.cha2)
        msg += " e9sF3 {}".format(struc.exp9.strF.cha3)
        msg += " e9sF4 {}".format(struc.exp9.strF.cha4)
        msg += " e9sF5 {}".format(struc.exp9.strF.cha5)
        msg += " e9sF6 {}".format(struc.exp9.strF.cha6)
        msg += " e9cmd {}".format(struc.exp9.cmd)
        msg += " e9tyB {}".format(struc.exp9.typeB)
        msg += " e9opB {}".format(struc.exp9.operB)
        msg += " e9sB1 {}".format(struc.exp9.strB.cha1)
        msg += " e9sB2 {}".format(struc.exp9.strB.cha2)
        msg += " e9sB3 {}".format(struc.exp9.strB.cha3)
        msg += " e9sB4 {}".format(struc.exp9.strB.cha4)
        msg += " e9sB5 {}".format(struc.exp9.strB.cha5)
        msg += " e9sB6 {}".format(struc.exp9.strB.cha6)

        msg += " e10tyF {}".format(struc.exp10.typeF)
        msg += " e10opF {}".format(struc.exp10.operF)
        msg += " e10sF1 {}".format(struc.exp10.strF.cha1)
        msg += " e10sF2 {}".format(struc.exp10.strF.cha2)
        msg += " e10sF3 {}".format(struc.exp10.strF.cha3)
        msg += " e10sF4 {}".format(struc.exp10.strF.cha4)
        msg += " e10sF5 {}".format(struc.exp10.strF.cha5)
        msg += " e10sF6 {}".format(struc.exp10.strF.cha6)
        msg += " e10cmd {}".format(struc.exp10.cmd)
        msg += " e10tyB {}".format(struc.exp10.typeB)
        msg += " e10opB {}".format(struc.exp10.operB)
        msg += " e10sB1 {}".format(struc.exp10.strB.cha1)
        msg += " e10sB2 {}".format(struc.exp10.strB.cha2)
        msg += " e10sB3 {}".format(struc.exp10.strB.cha3)
        msg += " e10sB4 {}".format(struc.exp10.strB.cha4)
        msg += " e10sB5 {}".format(struc.exp10.strB.cha5)
        msg += " e10sB6 {}".format(struc.exp10.strB.cha6)

        msg += " e11tyF {}".format(struc.exp11.typeF)
        msg += " e11opF {}".format(struc.exp11.operF)
        msg += " e11sF1 {}".format(struc.exp11.strF.cha1)
        msg += " e11sF2 {}".format(struc.exp11.strF.cha2)
        msg += " e11sF3 {}".format(struc.exp11.strF.cha3)
        msg += " e11sF4 {}".format(struc.exp11.strF.cha4)
        msg += " e11sF5 {}".format(struc.exp11.strF.cha5)
        msg += " e11sF6 {}".format(struc.exp11.strF.cha6)
        msg += " e11cmd {}".format(struc.exp11.cmd)
        msg += " e11tyB {}".format(struc.exp11.typeB)
        msg += " e11opB {}".format(struc.exp11.operB)
        msg += " e11sB1 {}".format(struc.exp11.strB.cha1)
        msg += " e11sB2 {}".format(struc.exp11.strB.cha2)
        msg += " e11sB3 {}".format(struc.exp11.strB.cha3)
        msg += " e11sB4 {}".format(struc.exp11.strB.cha4)
        msg += " e11sB5 {}".format(struc.exp11.strB.cha5)
        msg += " e11sB6 {}".format(struc.exp11.strB.cha6)

        msg += " e12tyF {}".format(struc.exp12.typeF)
        msg += " e12opF {}".format(struc.exp12.operF)
        msg += " e12sF1 {}".format(struc.exp12.strF.cha1)
        msg += " e12sF2 {}".format(struc.exp12.strF.cha2)
        msg += " e12sF3 {}".format(struc.exp12.strF.cha3)
        msg += " e12sF4 {}".format(struc.exp12.strF.cha4)
        msg += " e12sF5 {}".format(struc.exp12.strF.cha5)
        msg += " e12sF6 {}".format(struc.exp12.strF.cha6)
        msg += " e12cmd {}".format(struc.exp12.cmd)
        msg += " e12tyB {}".format(struc.exp12.typeB)
        msg += " e12opB {}".format(struc.exp12.operB)
        msg += " e12sB1 {}".format(struc.exp12.strB.cha1)
        msg += " e12sB2 {}".format(struc.exp12.strB.cha2)
        msg += " e12sB3 {}".format(struc.exp12.strB.cha3)
        msg += " e12sB4 {}".format(struc.exp12.strB.cha4)
        msg += " e12sB5 {}".format(struc.exp12.strB.cha5)
        msg += " e12sB6 {}".format(struc.exp12.strB.cha6)

        msg += " e13tyF {}".format(struc.exp13.typeF)
        msg += " e13opF {}".format(struc.exp13.operF)
        msg += " e13sF1 {}".format(struc.exp13.strF.cha1)
        msg += " e13sF2 {}".format(struc.exp13.strF.cha2)
        msg += " e13sF3 {}".format(struc.exp13.strF.cha3)
        msg += " e13sF4 {}".format(struc.exp13.strF.cha4)
        msg += " e13sF5 {}".format(struc.exp13.strF.cha5)
        msg += " e13sF6 {}".format(struc.exp13.strF.cha6)
        msg += " e13cmd {}".format(struc.exp13.cmd)
        msg += " e13tyB {}".format(struc.exp13.typeB)
        msg += " e13opB {}".format(struc.exp13.operB)
        msg += " e13sB1 {}".format(struc.exp13.strB.cha1)
        msg += " e13sB2 {}".format(struc.exp13.strB.cha2)
        msg += " e13sB3 {}".format(struc.exp13.strB.cha3)
        msg += " e13sB4 {}".format(struc.exp13.strB.cha4)
        msg += " e13sB5 {}".format(struc.exp13.strB.cha5)
        msg += " e13sB6 {}".format(struc.exp13.strB.cha6)

        msg += " e14tyF {}".format(struc.exp14.typeF)
        msg += " e14opF {}".format(struc.exp14.operF)
        msg += " e14sF1 {}".format(struc.exp14.strF.cha1)
        msg += " e14sF2 {}".format(struc.exp14.strF.cha2)
        msg += " e14sF3 {}".format(struc.exp14.strF.cha3)
        msg += " e14sF4 {}".format(struc.exp14.strF.cha4)
        msg += " e14sF5 {}".format(struc.exp14.strF.cha5)
        msg += " e14sF6 {}".format(struc.exp14.strF.cha6)
        msg += " e14cmd {}".format(struc.exp14.cmd)
        msg += " e14tyB {}".format(struc.exp14.typeB)
        msg += " e14opB {}".format(struc.exp14.operB)
        msg += " e14sB1 {}".format(struc.exp14.strB.cha1)
        msg += " e14sB2 {}".format(struc.exp14.strB.cha2)
        msg += " e14sB3 {}".format(struc.exp14.strB.cha3)
        msg += " e14sB4 {}".format(struc.exp14.strB.cha4)
        msg += " e14sB5 {}".format(struc.exp14.strB.cha5)
        msg += " e14sB6 {}".format(struc.exp14.strB.cha6)

        msg += " e15tyF {}".format(struc.exp15.typeF)
        msg += " e15opF {}".format(struc.exp15.operF)
        msg += " e15sF1 {}".format(struc.exp15.strF.cha1)
        msg += " e15sF2 {}".format(struc.exp15.strF.cha2)
        msg += " e15sF3 {}".format(struc.exp15.strF.cha3)
        msg += " e15sF4 {}".format(struc.exp15.strF.cha4)
        msg += " e15sF5 {}".format(struc.exp15.strF.cha5)
        msg += " e15sF6 {}".format(struc.exp15.strF.cha6)
        msg += " e15cmd {}".format(struc.exp15.cmd)
        msg += " e15tyB {}".format(struc.exp15.typeB)
        msg += " e15opB {}".format(struc.exp15.operB)
        msg += " e15sB1 {}".format(struc.exp15.strB.cha1)
        msg += " e15sB2 {}".format(struc.exp15.strB.cha2)
        msg += " e15sB3 {}".format(struc.exp15.strB.cha3)
        msg += " e15sB4 {}".format(struc.exp15.strB.cha4)
        msg += " e15sB5 {}".format(struc.exp15.strB.cha5)
        msg += " e15sB6 {}".format(struc.exp15.strB.cha6)

        msg += " e16tyF {}".format(struc.exp16.typeF)
        msg += " e16opF {}".format(struc.exp16.operF)
        msg += " e16sF1 {}".format(struc.exp16.strF.cha1)
        msg += " e16sF2 {}".format(struc.exp16.strF.cha2)
        msg += " e16sF3 {}".format(struc.exp16.strF.cha3)
        msg += " e16sF4 {}".format(struc.exp16.strF.cha4)
        msg += " e16sF5 {}".format(struc.exp16.strF.cha5)
        msg += " e16sF6 {}".format(struc.exp16.strF.cha6)
        msg += " e16cmd {}".format(struc.exp16.cmd)
        msg += " e16tyB {}".format(struc.exp16.typeB)
        msg += " e16opB {}".format(struc.exp16.operB)
        msg += " e16sB1 {}".format(struc.exp16.strB.cha1)
        msg += " e16sB2 {}".format(struc.exp16.strB.cha2)
        msg += " e16sB3 {}".format(struc.exp16.strB.cha3)
        msg += " e16sB4 {}".format(struc.exp16.strB.cha4)
        msg += " e16sB5 {}".format(struc.exp16.strB.cha5)
        msg += " e16sB6 {}".format(struc.exp16.strB.cha6)

        msg += " e17tyF {}".format(struc.exp17.typeF)
        msg += " e17opF {}".format(struc.exp17.operF)
        msg += " e17sF1 {}".format(struc.exp17.strF.cha1)
        msg += " e17sF2 {}".format(struc.exp17.strF.cha2)
        msg += " e17sF3 {}".format(struc.exp17.strF.cha3)
        msg += " e17sF4 {}".format(struc.exp17.strF.cha4)
        msg += " e17sF5 {}".format(struc.exp17.strF.cha5)
        msg += " e17sF6 {}".format(struc.exp17.strF.cha6)
        msg += " e17cmd {}".format(struc.exp17.cmd)
        msg += " e17tyB {}".format(struc.exp17.typeB)
        msg += " e17opB {}".format(struc.exp17.operB)
        msg += " e17sB1 {}".format(struc.exp17.strB.cha1)
        msg += " e17sB2 {}".format(struc.exp17.strB.cha2)
        msg += " e17sB3 {}".format(struc.exp17.strB.cha3)
        msg += " e17sB4 {}".format(struc.exp17.strB.cha4)
        msg += " e17sB5 {}".format(struc.exp17.strB.cha5)
        msg += " e17sB6 {}".format(struc.exp17.strB.cha6)

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Simple_Integer_Calculator Relay")
    sender = SENDER()
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
