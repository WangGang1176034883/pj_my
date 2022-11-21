#!/usr/bin/python
class Foo:
    def __init__(self):
        self.x1 ="sh" 
        self.x2 ="bj" 
f = Foo()
########
#choice = input("input(x1/x2):")
#if choice == "x1":
#    print(f.x1)
#elif choice == "x2":
#    print(f.x2)
####
#data = getattr(f,choice)
#print(data)
########
f.x3 = 666
print(f.__dict__)
