#!/usr/bin/python
class Message:
    def __init__(self,n,m):
        self.x1 =n
        self.x2 =m
    def send(self,to,content):
        print(self.x1,self.x2,to,content)
obj1 = Message("obj1","good")
obj1.send("obj1","good")
obj2 = Message("obj2","bad")
obj2.send("obj2","bad")
