import numpy as np

#배열 연산
#-NumPy의 배열 연산은 벡터화(vectorized) 연산을 사용
#-일반적으로 NumPy의 범용 함수(universal functions)를 통해 구현
#-배열 요소에 대한 반복적인 계산을 효율적으로 수행

#브로드캐스팅(Broadcasting)

# [1, 2, 3] + 5 => [1, 2, 3] + [5, 5, 5] => [6, 7, 8]

a1 = np.array([1, 2, 3])
print(a1)
print(a1 + 5)

a2 = np.arange(1, 10).reshape(3,3)
print(a2)
print(a1 + a2)

b2 = np.array([1, 2, 3]).reshape(3, 1)
print(b2)
print(a1 + b2)