#!/usr/bin/python
import json
import datetime
ctime = datetime.datetime.now()
str_time = ctime.strftime("%Y-%m-%d %H-%M-%S")
dict = {"wg":123,'lisi':str_time,"zhansan":(1,2,3)}
print(dict)
str = json.dumps(dict)
print(str)
