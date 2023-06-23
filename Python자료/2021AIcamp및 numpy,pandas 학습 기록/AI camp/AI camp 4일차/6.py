#람다:함수라는 기능을 매개변수로 전달
def call_10_times(func):
    for i in range(10):
        func()
def print_hello():
    print("안녕하세요")

call_10_times(print_hello)