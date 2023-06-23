a=[6,3,7,4,9]
b=10
#함수 안에 글로벌 선언 안함
def p():
    a[2]=1
    print(a[2])
def q():
    b=5
    print(b)
p()
print(a[2])#글로벌 변수의 값이 변함
q()
print(b)#글로벌 변수 b는 값이 변하지 않음
