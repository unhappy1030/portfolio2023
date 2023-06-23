import numpy as np
arrA = np.arange(10,25).reshape(3,5)
arrB = np.arange(11,61).reshape(2,5,5)
arrC = np.arange(74,250,5).reshape(3,3,4)
#reshape를 통해서 파라미터를 하나 늘려서 3차원 배열로 나누기도 가능
print('A')
print(arrA)
print('B')
print(arrB)
print('C')
print(arrC)