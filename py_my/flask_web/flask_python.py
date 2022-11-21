#!/usr/bin/python
from pymysql.cursors import DictCursor
import pymysql
import json
from flask import Flask,render_template,request,redirect
app = Flask(__name__)
def db_execute(sql,arg_list):
    conn= pymysql.connect(host="127.0.0.1",port=3306,user="root",passwd="1234",charset="utf8")
    cursor=conn.cursor(cursor=DictCursor)
    cursor.execute("use cmcc;")
    cursor.execute(sql,arg_list)
    conn.commit()
    cursor.close()
    conn.close()
def db_fetchall(sql,arg_list):
    conn= pymysql.connect(host="127.0.0.1",port=3306,user="root",passwd="1234",charset="utf8")
    cursor=conn.cursor(cursor=DictCursor)
    cursor.execute("use cmcc;")
    cursor.execute(sql,arg_list)
    data = cursor.fetchall()
    cursor.close()
    conn.close()
    return data
    
@app.route("/phone/list")
def phone_list():
    data=db_fetchall("select id,mobile,city,name from phone order by id desc;", [])
    #cursor.execute('insert into userinfo(user,pwd,age) values(%s,%s,%s)',[user,pwd,age])
    return render_template("phone_list.html",data=data)
@app.route("/index")
def index():
    return render_template("index.html")
@app.route("/search")
def search():
    data = request.args.get('keyword')
    print(data)
    return render_template("search.html", v1=data)
@app.route("/register")
def register():
    return render_template("register.html")
@app.route("/do/register")
def do_register():
    #    return render_template("register.html")
    print(request.args)
    user = request.args.get("usr")
    password = request.args.get("pwd")
    gender = request.args.get("gender")
    city = request.args.get("city")
    hobby = request.args.getlist("hobby")
    textarea = request.args.getlist("textarea")
    line = "{}|{}|{}\n".format(user,password,gender)
    file_obj = open("db.txt",mode="a",encoding="utf-8")
    file_obj.write(line)
    file_obj.close()
    return redirect("/user/list")
@app.route("/user/list")
def user_list():
    data_list=[]
    data_list_list =[]
    file_obj = open("db.txt",mode="r",encoding="utf-8")
    for line in file_obj:
        data = line.strip("\n")
        data_list.append(data)
        data_list_list.append(data.split("|"))   
    file_obj.close()
    return render_template("user_list.html",v1=data_list,v2=data_list_list)
@app.route("/login")
def login():
    return "login"
@app.route("/mi")
def mi():
    return render_template("mi.html")
@app.route("/users")
def users():
    dict = {"name":"wg","passwd":1234,"addr":(12,123,1)}
    return json.dumps(dict) 
if __name__ == "__main__":
    app.run()
