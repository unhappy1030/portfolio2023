from urllib import request

#urlopen() 함수로 구글의 메인 페이지를 읽습니다
target = request.urlopen("http://google.com")
output = target.read()

#출력
print(output)