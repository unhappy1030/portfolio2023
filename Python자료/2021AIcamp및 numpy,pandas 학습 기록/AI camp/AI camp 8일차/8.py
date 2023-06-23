import numpy as np

arrA = np.arange(0,24).reshape(3,2,4)
print(arrA)
print('------------------------------')
print(arrA[1:, 1:, 1:])
print('------------------------------')
print(arrA[1:, 0:, 3:])
print('------------------------------')
print(arrA[1:3, 1:4, 1:5])