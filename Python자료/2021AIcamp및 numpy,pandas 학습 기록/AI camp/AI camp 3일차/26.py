counter = 0
def fibonacci(n):
    global counter
    counter+=1
    if n == 1:
        return 1
    if n == 2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
print("fibonacci(10):", fibonacci(10))
print("fibonacci(10) 계산에 활용된 덧셈 횟수는 {}번 입니다.".format(counter))
