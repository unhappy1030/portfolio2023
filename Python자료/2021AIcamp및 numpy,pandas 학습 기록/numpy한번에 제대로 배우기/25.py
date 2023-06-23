import numpy as np

#집계 함수(Aggregate Function)

#NaN 안전 모드
#NaN => Not a Number 숫자가 아닌것

#sum() : 합 계산
a2 = np.random.randint(1, 10, size=(3,3))
print(a2)
print(a2.sum(), np.sum(a2))
print(a2.sum(axis=0), np.sum(a2, axis=0))
print(a2.sum(axis=1), np.sum(a2, axis=1))

print('-----------------------')
#cumsum() : 누적합 계산
print(a2)
print(np.cumsum(a2))
print(np.cumsum(a2, axis=0))
print(np.cumsum(a2, axis=1))

print('-----------------------')
#diff() : 차분 계산
print(a2)
print(np.diff(a2))
print(np.diff(a2, axis=0))
print(np.diff(a2, axis=1))

print('-----------------------')
#cumprod() : 곱 계산
print(a2)
print(np.prod(a2))
print(np.prod(a2, axis=0))
print(np.prod(a2, axis=1))

print('-----------------------')
#cumprod() : 누적 곱 계산
print(a2)
print(np.cumprod(a2))
print(np.cumprod(a2, axis=0))
print(np.cumprod(a2, axis=1))

print('-----------------------')
#dot()/matmul() : 점곱/행렬곱 계산
print(a2)
b2 = np.ones_like(a2)
print(b2)
print(np.dot(a2, b2))
print(np.matmul(a2, b2))

print('-----------------------')
#tensordot() : 텐서곱 계산
print(a2)
print(b2)
print(np.tensordot(a2, b2))
print(np.tensordot(a2, b2, axes=0))
print(np.tensordot(a2, b2, axes=1))

print('-----------------------')
#cross() : 벡터곱
x = [1, 2, 3]
y = [4, 5, 6]
print(np.cross(x ,y))

print('-----------------------')
#inner()/outer() : 내적/외적
print(a2)
print(b2)
print(np.inner(a2, b2))
print(np.outer(a2, b2))

print('-----------------------')
#mean() : 평균 계산
print(a2)
print(np.mean(a2))
print(np.mean(a2, axis=0))
print(np.mean(a2, axis=1))

print('-----------------------')
#std() : 표준 편차 계산
print(a2)
print(np.std(a2))
print(np.std(a2, axis=0))
print(np.std(a2, axis=1))

print('-----------------------')
#var() : 분산 계산
print(a2)
print(np.var(a2))
print(np.var(a2, axis=0))
print(np.var(a2, axis=1))

print('-----------------------')
#min() : 최소값
print(a2)
print(np.min(a2))
print(np.min(a2, axis=0))
print(np.min(a2, axis=1))

print('-----------------------')
#max() : 최대값
print(a2)
print(np.max(a2))
print(np.max(a2, axis=0))
print(np.max(a2, axis=1))

print('-----------------------')
#argmin() : 최소값 인덱스
print(a2)
print(np.argmin(a2))
print(np.argmin(a2, axis=0))
print(np.argmin(a2, axis=1))

print('-----------------------')
#argmax() : 최대값 인덱스
print(a2)
print(np.argmax(a2))
print(np.argmax(a2, axis=0))
print(np.argmax(a2, axis=1))

print('-----------------------')
#median() : 중앙값
print(a2)
print(np.median(a2))
print(np.median(a2, axis=0))
print(np.median(a2, axis=1))

print('-----------------------')
#percentile() : 백분위 수
a1 = np.array([0,1,2,3])
print(a1)
print(np.percentile(a1, [0, 20, 40, 60 ,80, 100], interpolation='linear'))
print(np.percentile(a1, [0, 20, 40, 60 ,80, 100], interpolation='higher'))
print(np.percentile(a1, [0, 20, 40, 60 ,80, 100], interpolation='lower'))
print(np.percentile(a1, [0, 20, 40, 60 ,80, 100], interpolation='nearest'))
print(np.percentile(a1, [0, 20, 40, 60 ,80, 100], interpolation='midpoint'))

print('-----------------------')
#any()
a2 = np.array([[False, False, False],
               [False, True, True],
               [False, True, True]])
print(a2)
print(np.any(a2))
print(np.any(a2, axis = 0))
print(np.any(a2, axis = 1))

print('-----------------------')
#all()
a2 = np.array([[False, False, True],
               [True, True, True],
               [False, True, True]])
print(a2)
print(np.all(a2))
print(np.all(a2, axis = 0))
print(np.all(a2, axis = 1))