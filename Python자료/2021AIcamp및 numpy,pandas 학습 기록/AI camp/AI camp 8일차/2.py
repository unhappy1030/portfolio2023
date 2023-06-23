import numpy as np
c = np.array([[1,2],
             [3,4],
             [5,6],
             [7,8]])
print(len(c))
print(len(c))
print()
d = np.array([[[1,2],[3,4]],
             [[5,6],[7,8]]])
print(d.ndim)#몇 차원 배열인지 출력
print(d.shape)#배열 구조 출력