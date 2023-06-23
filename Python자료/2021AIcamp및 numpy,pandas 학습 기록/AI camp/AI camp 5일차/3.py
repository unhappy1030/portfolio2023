from flask import Flask
from flask_ngrok import run_with_ngrok
import requests
from bs4 import BeautifulSoup
app = Flask(__name__)
run_with_ngrok(app)

@app.route('/top/<num>')#<num>이거 수업 채팅창으로 받은 피피티에 있음
def topmoive(num):#여기서 num은 문자로 입력됨
    result = ''
    url = 'https://movie.naver.com/movie/sdb/rank/rmovie.nhn'
    response = requests.get(url)
    source = response.text

    soup = BeautifulSoup(source, 'html.parser')

    top_list = soup.findAll("div",{"class":"tit3"})
    num = int(num)
    for i in range(num):
        result += '<h1>{}</h1>'.format(top_list[i].text.strip())
        #print(m.text.strip())
    return result
@app.route('/greet')
def greet():
    return '<h1>Hello World!</h1>'
if __name__ == '__main__':
     app.run()
#app.run()