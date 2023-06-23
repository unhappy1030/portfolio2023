import numpy as np
#배열 생성
#리스트로 배열만들기
print("1차원")
a1 = np.array([1,2,3,4,5])
print(a1)
print(type(a1))
print(a1.shape)#(5,) 1차원 배열로 5가지 요소를 가짐
print(a1[0], a1[1], a1[2], a1[3], a1[4])
a1[0] = 4
a1[1] = 5
a1[2] = 6
print(a1)

#2차원
print("2차원")
a2 = np.array([[1,2,3],[4,5,6],[7,8,9]])
print(a2)
print(a2.shape)#(3,3)
print(a2[0, 0], a2[1,1], a2[2,2])

#3차원
print("3차원")
a3=np.array([[[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]]])
print(a3)
print(a3.shape)
