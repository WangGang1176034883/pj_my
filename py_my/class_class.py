#!/usr/bin/python
class students:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def info(self):
        print("my name is {},I'm {} years old!".format(self.name,self.age))

s1 = students("wg",33)
s1.info()
s2 = students("lisi",18)
s2.info()

class Classes:
    def __init__(self,title):
        self.title = title
        self.stu_list = []
    def add(self,stu):
        self.stu_list.append(stu)
c1 = Classes("高一(9)班")
c1.add(s1)
c1.add(s2)
print(c1.__dict__)
for stu in c1.stu_list:
    print(stu.name,stu.age)
    stu.info()
