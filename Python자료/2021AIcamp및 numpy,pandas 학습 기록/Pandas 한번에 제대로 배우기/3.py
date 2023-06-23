import numpy as np
import pandas as pd

#Index 객체
idx = pd.Index([2, 4, 6, 8, 10])
print(idx)
print(idx[1])
print(idx[1:2:2])
print(idx[-1::])
print(idx[::2])
print('-----------------------')
print(idx)
print(idx.size)
print(idx.shape)
print(idx.ndim)
print(idx.dtype)
print('-----------------------')

#Index 연산
idx1 = pd.Index([1, 2, 4, 6, 8])
idx2 = pd.Index([2, 4, 5, 6, 7])
print(idx1.append(idx2))#추가
print(idx1.difference(idx2))#차집합
print(idx1 - idx2)#실제 값을 뺌
print(idx1.intersection(idx2))#교집합
#print(idx1 & idx2)#교집합
print(idx1.union(idx2))
#print(idx1 | idx2)
print(idx1.delete(0))
print(idx.drop(2))
print(idx1 ^ idx2)