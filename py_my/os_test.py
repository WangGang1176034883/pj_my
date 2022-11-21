#!/usr/bin/python
import os
def sign_up():
    name = input("name:")
    pwd = input("pwd:")
    dir_path = os.path.abspath("osdir")
    print(dir_path)
    e1 = os.path.exists(dir_path)
    print(e1)
    if not os.path.exists(dir_path):
        os.mkdir("osdir")
    file_path=os.path.join(dir_path,"{}.txt".format(name))
    file_obj = open(file_path, mode="w",encoding="utf-8")
    file_obj.write(pwd)
    file_obj.close()
def run():
    sign_up()
if __name__ == '__main__':
    run()
