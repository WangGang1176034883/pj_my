#!/usr/bin/python
import configparser
parser = configparser.ConfigParser(allow_no_value=True)
parser.read("my.ini",encoding="utf-8")
sect = parser.sections()
print(sect)
v1 = parser.items("mysqld")
for k,v in v1:
    print(k,v)
v2 = parser.get("mysqld","port")
print(v2)
parser.remove_option("mysqld","max_connections")
parser.remove_section("client")
parser.add_section("client")
parser.set("client","name","wg")
parser.write(open("my.ini",mode="w",encoding="utf-8"))
