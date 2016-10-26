#! /usr/bin/python
# coding=utf-8

import os

os.system("make clean")
os.system("make")
os.system("./main < data")
