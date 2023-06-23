import numpy as np

a1 = np.array([1,2,3,4,5])
a1[0] = 4
a1[1] = 5
a1[2] = 6
a2 = np.array([[1,2,3],[4,5,6],[7,8,9]])
a3=np.array([[[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]]])

#불리언 인덱싱(Boolean Indexing)
#-배열 각 요소의 선택 여부를 불리언(True or False)로 지정
#-True 값인 인덱스의 값만 조회

#1차원
print(a1)
bi = [False, True, True, False, True]
print(a1[bi])
bi = [True, False, True, True, False]
print(a1[bi])

print('-----------------------------')
#2차원
print(a2)
bi = np.random.randint(0, 2, (3,3), dtype=bool)
print(bi)
print(a2[bi])