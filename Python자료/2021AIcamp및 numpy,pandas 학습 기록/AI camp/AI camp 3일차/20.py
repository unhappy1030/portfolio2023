#키위드 매개변수
#키워드 매개변수는 가변 매개변수 뒤에 와야 함
#예시
def print_n_times(*values, n=2):
    for i in range(n):
        for value in values:
            print(value)
        print()
print_n_times("안녕하세요","즐거운","파이썬 프로그래밍",n=3)
#매개변수 이름을 입력해서 직접 값을 지정
#키워드 매개 변수의 특징
#키워드 매개 변수는 순서와 관계없이 사용 가능