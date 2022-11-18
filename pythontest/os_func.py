#!/usr/bin/python
import os
pwd = os.path.abspath("osdir")
print(pwd)
pwd_list = os.listdir(pwd)
print(pwd_list)
obj = os.walk("/data/data/com.termux/files/home/pythontest")
for a,b,c in obj:
    for name in c:
        fpath = os.path.join(a,name)
        print(fpath)
os.mkdir("osmkdirtest")
