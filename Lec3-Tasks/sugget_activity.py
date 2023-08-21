import requests

url = requests.get('https://www.boredapi.com/api/activity')
print(url.json()['activity'])
