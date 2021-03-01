# -*- coding: utf-8 -*- 
import requests

url = "http://www.zhihu.com/"
#伪装浏览器的请求头
pre={'User-agent':'Mozilla/5.0'}
res = requests.get(url,headers=pre)
print(res.encoding)
res.encoding='utf-8'
# 200success 404failed
print(res.status_code)
print(res.request.headers)
#print(res.text)