#!/usr/bin/python
class Message:
    def __init__(self,x1,x2):
        self.x1 = x1
        self.x2 =x2

    @property
    def variable(self):
        return "hello world"

    @variable.setter
    def variable(self, n):
        self.x1 = n
    @variable.deleter
    def variable(self):
        self.x2 = 4
    def send(self,to,content):
        print(self,self.x1,self.x2,to,content)
    @staticmethod
    def show():
        print("static method show")
    @classmethod
    def get_info(cls):
        print(cls,"class mathod get_info")

m = Message(1,2)
m.send("bj","sh")
Message.show()
m.show()
Message.get_info()
m.get_info()
print(m.variable)
m.variable = 3
print(m.__dict__)
del m.variable 
print(m.__dict__)
class Property:
    def __init__(self,name):
        self.name = name
    def getname(self):
        print(self.name)
    def setname(self,value):
        self.name = value
        print(self.name)
    def delname(self):
        print("del name")
    per = property(getname,setname,delname)
ppt = Property("wg")
ppt.per
ppt.per = "lisi"
del ppt.per
