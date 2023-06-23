import numpy as np

a1 = np.array([1,2,3,4,5])
a1[0] = 4
a1[1] = 5
a1[2] = 6
a2 = np.array([[1,2,3],[4,5,6],[7,8,9]])
a3=np.array([[[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]]])

#팬시 인덱싱(Fancy Indexing)

#1차원
print(a1)
print([a1[0], a1[2]])
ind = [0, 2]
print(a1[ind])
ind = np.array([[0, 1],
                [2, 0]])
#인덱스가 2차원이면 인덱스에 따라서 값을 줌
print(a1[ind])

print('--------------------------')
#2차원
print(a2)
row = np.array([0, 2])
col = np.array([1, 2])
print(a2[row, col])
print(a2[row, :])
print(a2[:, col])
print(a2[row, 1])
print(a2[2, col])
print(a2[row, 1:])
print(a2[1:, col])