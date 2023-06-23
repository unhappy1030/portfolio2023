import numpy as np
arrA = np.zeros((3,6))#값을 넘길때 튜플 형식으로 넘겨야함
#입력된 크기의 배열을 만들고 배열 내부를 0으로 채움
arrB = np.ones((3,6))#값을 넘길때 튜플 형식으로 넘겨야함
#입력된 크기의 배열을 만들고 배열 내부를 1로 채움
arrC = np.arange(100,110)#범위 만큼의 값이 채워진 배열을 만듦
#arange(a,b) == a~b-1까지, 배열은 1차원 배열로만 생성됨
print('A')
print(arrA)
print('B')
print(arrB)
print('C')
print(arrC)
arrC = np.arange(100,110).reshape(2,5)
#reshape(2,5) 2줄 5칸으로 배열을 나눔
print(arrC)
arrD = np.arange(10,22,2).reshape(3,2)
#arange에서 3번째 파라미터는 차이값을 나타냄
#reshape의 크기가 갯수가 맞지않으면 실행이 되지않음
print('D')
print(arrD)
arrE = np.random.random((2,5,3))
print('E')
print(arrE)