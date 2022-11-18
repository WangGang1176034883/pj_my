#!/usr/bin/python
import os
import datetime
########
#res = datetime.datetime.now()
#print(res)
########
#time_zone=datetime.timezone(datetime.timedelta(hours=7))
#res = datetime.datetime.now(time_zone)
#print(res)
########
#day_time = datetime.datetime.now()
#print(day_time)
#days = datetime.timedelta(days=7)
#print(days)
#print(day_time+days)
########
#day_time = datetime.datetime.now()
#day_str = day_time.strftime("%Y-%m-%d %H:%M:%S")
#print(day_str)
########
#date_str ="2022-11-17 11:52:55" 
#date_obj = datetime.datetime.strptime(date_str,"%Y-%m-%d %H:%M:%S")
#print(date_obj)
########
#mobile_num = input("input mobile number:")
#date_time = datetime.datetime.now()
#date_str=datetime.datetime.strftime(date_time,"%Y-%m-%d")
#file_obj = open("data.txt",mode="a",encoding="utf-8")
#file_obj.write("{},{}\n".format(mobile_num, date_str))
#file_obj.close
########
mobile_num = input("input mobile number:")
date_time = datetime.datetime.now()
date_str= datetime.datetime.strftime(date_time,"%Y-%m-%d")
dirpath = os.path.abspath("usrtime")
if not os.path.exists(dirpath):
    os.mkdir("usrtime")
filepath = os.path.join("usrtime",date_str)
file_obj = open(filepath,mode="a",encoding="utf-8")
file_obj.write("{},{}\n".format(mobile_num, date_str))
file_obj.close

