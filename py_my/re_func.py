#!/usr/bin/python
import re
text = input("input number:")
mtc = re.match("^\d[3589]\d{9}$",text)
if mtc:
    print(mtc.group())
else:
    print("false")
