import requests

url = requests.get('https://api.ipify.org/?format=json')
url = url.json()['ip']
loc = requests.get('https://ipinfo.io/'+url+'/geo')
print(loc.json())

