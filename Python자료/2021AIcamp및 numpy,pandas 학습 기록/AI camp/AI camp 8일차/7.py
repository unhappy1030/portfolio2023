import numpy as np
#슬라이싱
#1차원 배열 : 리스트와 동일
#N차원 배열 : ','로 구별하여 연결
arrA = np.arange(0,12).reshape(3,4)
print(arrA)
print(arrA[0:, 1:])
print(arrA[1:, 1:])
print(arrA[1:, 2:])