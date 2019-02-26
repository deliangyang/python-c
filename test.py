import example
from ctypes import *
import os


example = cdll.LoadLibrary(os.getcwd() + "/py-add/example.so")
print(example.fact(10))