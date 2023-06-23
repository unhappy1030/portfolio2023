import numpy as np
a = np.array([3,6,8,10,11])
A = np.random.random(50).reshape(2,5,5)
#random.random() => 0~1사이의 float값을 랜덤으로 저장
print(A)
A1 = np.arange(1,13).reshape(3,4)
B1 = np.linspace(1,12,3)
for i in range(len(B1)):
    B1[i]=int(B1[i])
B1=B1.reshape(3,1)
#linspace(start,stop,num,endpoint<true/false>)
#시작 범위,끝 범위, 값의 갯수, 끝범위의 값 포함 여부(true는 끝범위 포함)
C1=A1+B1
print(C1)
print('------------------------------')
C2=B1+A1
print(C2)
print('------------------------------')
print(C1==C2)
print(B1)