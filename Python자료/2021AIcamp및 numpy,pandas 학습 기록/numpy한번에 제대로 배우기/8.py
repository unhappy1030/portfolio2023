import numpy as np

a1 = np.array([1,2,3,4,5])
a1[0] = 4
a1[1] = 5
a1[2] = 6
a2 = np.array([[1,2,3],[4,5,6],[7,8,9]])
a3=np.array([[[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]]])

#인덱싱(Indexing)

#1차원
print(a1)
print(a1[0])
print(a1[2])
print(a1[-1])
print(a1[-2])
#2차원
print(a2)
print(a2[0, 0])
print(a2[0, 2])
print(a2[1, 1])
print(a2[2, -1])
#3차원
print(a3)
print(a3[0, 0, 0])
print(a3[1, 1, 1])
print(a3[2, 2, 2])
print(a3[2, -1, -1])