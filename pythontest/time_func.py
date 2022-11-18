#!/usr/bin/python
import time
#######
#res = time.time()
#print(res)
#######
start = time.time()
print(start)
for i in range(3):
    time.sleep(1)
    data = i
print(data)
end = time.time()
print(end)
print(end -start)
