#데코레이터
#@로 시작하는 구문을 파이썬에서 '데코레이터'라고 한다
#데코레이터는 만드는 방법에 따라 크게
#함수 데코레이터와 클레스 데코레이터로 나룰 수 있음


#여기서는 함수 데코레이터를 살펴봄
def test(function):
    def wrapper():
        print("인사가 시작되었습니다")
        function()
        print("인사가 종료되었습니다")
    return wrapper

#데코레이터를 붙여 함수를 만듭니다
@test
def hello():
    print("hello")
#함수 호출
hello()

#그니까 test함수에 hello()를 매개변수로 전달함?