#def 함수 이름(매개변수, 매개변수, ..., *가변 매개변수):
#제약
#1. 가변 매개변수 뒤에는 일반 매개변수 올 수 없음
#2. 가변 매개변수는 ㅎ하나만 사용할 수 있음
def print_n_times(n, *values):
    for i in range(n):
        for value in values:
            print(value)
        print()
print_n_times(3,"안녕하세요","즐거운","파이썬 프로그래밍")