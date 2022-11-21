#!/usr/bin/python
import hashlib
def encrypt(str):
    obj = hashlib.md5()
    obj.update(str.encode("utf-8"))
    res = obj.hexdigest()
    return res
def sign_in():
    name = input("name:")
    passwd = input("passwd:")
    pwd = encrypt(passwd)
    line = "{}|{}\n".format(name,pwd)
    file_obj = open("usr_pwd.txt",mode = "a",encoding = "utf-8")
    file_obj.write(line)
    file_obj.close()
def sign_up():
    name = input("name:")
    passwd = input("passwd:")
    name_pwd = encrypt(passwd)
    file_obj = open("usr_pwd.txt",mode = "r",encoding = "utf-8")
    data = file_obj.read()
    data_list = data.strip().split("\n")
    flag = False
    for item in data_list:
        usr,pwd = item.split("|")
        if usr == name and pwd == name_pwd:
            flag = True
            break
    file_obj.close()
    if flag:
        print("success!")
    else:
        print("false!")
    return 0
def run():
    sign_up()
if __name__ == '__main__':
    run()
