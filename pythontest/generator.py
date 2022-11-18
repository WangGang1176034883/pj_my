#!/usr/bin/python
def outer(func):
    def inner():
        print("before")
        result = func()
        print("after")
        return result
    return inner
@outer
def info1():
    print("info1…")
    return 123
v1 = info1()
print(v1)
@outer
def info2():
    print("info2…")
    return 456
v2 = info2()
print(v2)
@outer
def info3():
    print("info3…")
    return 789
v3 = info3()
print(v3)
