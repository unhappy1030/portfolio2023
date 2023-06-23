import numpy as np

a1 = np.array([1,2,3,4,5])
a1[0] = 4
a1[1] = 5
a1[2] = 6
a2 = np.array([[1,2,3],[4,5,6],[7,8,9]])
a3=np.array([[[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]]])
#슬라이싱
# -슬라이싱 구문 : a[start:stop:step]
# -기본값:start=0,stop=ndim,step=1

#1차원
print(a1)
print(a1[0:2])
print(a1[0:])
print(a1[:1])
print(a1[::2])
print(a1[::-1])

print('-----------------')
#2차원
print(a2)
print(a2[1])
print(a2[1,:])
print(a2[:2, :2])
print(a2[1:, ::-1])
print(a2[::-1, ::-1])