from urllib import request

#urlopen() 함수로 구글의 메인 페이지를 읽습니다
target = request.urlopen("http://www.hanbit.co.kr/images/common/logo_hanbit.png")
output = target.read()
print(output)
#write binary[바이너리 쓰기] 모드로
file = open("output.png","wb")#binary데이터를 사용할때는 꼭 'b'를 넣어줘야함
file.write(output)
file.close()