import requests
from bs4 import BeautifulSoup
url = 'https://movie.naver.com/movie/sdb/rank/rmovie.nhn'
response = requests.get(url)
source = response.text

soup = BeautifulSoup(source, 'html.parser')

top_list = soup.findAll("div",{"class":"tit3"})
print(top_list)
for i,m in enumerate(top_list):
    print('{}'.format(i+1),m.text.strip())