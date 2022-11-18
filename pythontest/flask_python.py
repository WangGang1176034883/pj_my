#!/usr/bin/python
import json
from flask import Flask
app = Flask(__name__)
@app.route("/login")
def login():
    return "login"
@app.route("/users")
def users():
    dict = {"name":"wg","passwd":1234,"addr":(12,123,1)}
    return json.dumps(dict) 
if __name__ == "__main__":
    app.run()
