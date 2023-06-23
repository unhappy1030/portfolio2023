import numpy as np

#배열 정렬

#1차원
a1 = np.random.randint(1, 10, size=10)
print(a1)
print(np.sort(a1))
print(a1)
print(np.argsort(a1))
print(a1)
print(a1.sort())#실제 배열 내부의 값을 바꿔주는 부분
print(a1)

print('---------------------------')
#2차원
a2 = np.random.randint(1, 10, size=(3, 3))
print(a2)
print(np.sort(a2))
print(np.sort(a2, axis=0))
print(np.sort(a2, axis=1))
a2.sort()
print(a2)


print('---------------------------')
#부분 정렬
#-partition() : 배열에서 k개의 작은 값을 반환

#1차원
a1 = np.random.randint(1, 10, size=10)
print(a1)
print(np.partition(a1, 3))

print('---------------------------')
#2차원
a2 = np.random.randint(1, 10, size=(5, 5))
print(a2)
print(np.partition(a2, 3))
print(np.partition(a2, 3, axis=0))
print(np.partition(a2, 3, axis=1))