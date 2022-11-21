#!/usr/bin/python
from pymysql.cursors import DictCursor
import pymysql
conn= pymysql.connect(host="127.0.0.1",port=3306,user="root",passwd="1234",charset="utf8")
cursor=conn.cursor(cursor=DictCursor)
#cursor.execute("CREATE DATABASE cmcc DEFAULT CHARSET utf8 COLLATE utf8_general_ci;")
cursor.execute("use cmcc;")
cursor.execute("CREATE TABLE phone( id int not null auto_increment primary key, mobile varchar(16) not null, city varchar(32) not null, name varchar(32) not null)DEFAULT charset=utf8;")
#cursor.execute('insert into tb5(name,email,age) values("qn","xxx",7);')
#cursor.execute('select * from tb5;')
#result = cursor.fetchall()
#print(result)
cursor.execute('insert into phone(mobile,city,name) values(%s,%s,%s)',["13521431329","上海","wg"])
#cursor.execute("select * from userinfo where user=%s and pwd=%s",[user,pwd])
#res = cursor.fetchone()
conn.commit()
cursor.close()
conn.close()
#if res:
#    print(res)
#    print("success!")
#else:
#    print("failed!")
