#!/usr/bin/python
import requests
import json
res = requests.get("https://m.luffycity.com/api/v1/course/degree/3/?courseType=degree&id=3")
dict = json.loads(res.text)
for item in dict["data"].items():
    k,v = item
    print(k,v)
