#!/usr/bin/python
import random
#for i in range(0,10):
#    num = random.randint(1,5)
#    print(num)
########
#list=[1,True,"hello",(1,"world")]
#for i in range(0,5):
#    v1 = random.choice(list)
#    print(v1)
########
#def fun1():
#    print("fun1")
#def fun2():
#    print("fun2")
#def fun3():
#    print("fun3")
#def fun4():
#    print("fun4")
#func_list = [fun1, fun2, fun3, fun4]
#res = random.choice(func_list)
#res()
########
#num_list = [12,32,89,67,53,29]
#print(num_list)
#random.shuffle(num_list)
#print(num_list)
########
color_list = ["黑桃","♡","♧","方片"]
num_list = range(1,14)
poker =[]
for color in color_list:
    for num in num_list:
        group = (color,num)
        poker.append(group)
print(poker)
random.shuffle(poker)
print(poker)
data = random.choice(poker)
print(data)
