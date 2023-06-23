import numpy as np

#비교 연산(Comparison Operators)

a1 = np.arange(1, 10)
print(a1)
print(a1 == 5)
print(a1[a1 == 5])#fancy 인덱싱 사용 연습
print(a1 != 5)
print(a1 < 5)
print(a1 <= 5)
print(a1 > 5)
print(a1 >= 5)

print('-----------------------')
a2 = np.arange(1, 10).reshape(3, 3)
print(a2)
print(np.sum(a2))
print(np.count_nonzero(a2 > 5))
print(np.sum(a2 > 5))
print(np.sum(a2 > 5, axis=0))
print(np.sum(a2 > 5, axis=1))
print(np.any(a2 > 5))
print(np.any(a2 > 5, axis=0))
print(np.any(a2 > 5, axis=1))
print(np.all(a2 > 5))
print(np.all(a2 > 5, axis=0))
print(np.all(a2 > 5, axis=1))


print('-----------------------')
a1 = np.array([1, 2, 3, 4, 5])
b1 = np.array([1, 2, 3, 3 ,4])
print(a1)
print(b1)
print(np.isclose(a1, b1))

print('-----------------------')
a1 = np.array([np.nan, 2, np.Inf, 4, np.NINF])
print(a1)
print(np.isnan(a1))
print(np.isinf(a1))
print(np.isfinite(a1))

print('-----------------------')
#불리언 연산자(Boolean Operators)
a2 = np.arange(1,10).reshape(3,3)
print(a2)

print((a2 > 5) & (a2 < 8))
print(a2[(a2 > 5) & (a2 < 8)])#불리언 인덱싱 사용

print((a2 > 5) | (a2 < 8))
print(a2[(a2 > 5) | (a2 < 8)])

print((a2 > 5) ^ (a2 < 8))
print(a2[(a2 > 5) ^ (a2 < 8)])#XOR

print(~(a2 > 5))
print(a2[~(a2 > 5)])