#!/usr/bin/python
#class Base:
#    def f1(self):
#        print("Base.f1")
#class Son(Base):
#    def f2(self):
#        print("Son.f2")
#class Foo(Son):
#    def f3(self):
#        print("Foo.f3")
#class Bar(Foo):
#    def f4(self):
#        print("Bar.f4")
#b = Bar()
#b.f4()
#b.f3()
#b.f2()
#b.f1()
########
#class Base:
#    def f1(self):
#        print(self.name)
#class Son(Base):
#    def f2(self):
#        print(self.age)
#s = Son()
#s.name = "lisi"
#s.age = 20
#s.f1()
class Base:
    def f1(self):
        print("Base.f1")
class Son():
    def f2(self):
        print("Son.f2")
class Foo(Base,Son):
    def f3(self):
        print("Foo.f3")
f = Foo()
f.f3()
f.f2()
f.f1()
