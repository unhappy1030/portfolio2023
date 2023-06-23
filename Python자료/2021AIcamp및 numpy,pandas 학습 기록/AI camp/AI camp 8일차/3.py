import numpy as np
arr=np.array([[[100,90,80],
               [70,60,50]],
              [[15,25,35],
               [45,55,65]],
              [[11,22,33,],
               [44,55,66]]])
print(type(arr))#배열 타입
print(len(arr))#배열 길이
print(arr.ndim)#차원 수
print(arr.shape)#배열 구조