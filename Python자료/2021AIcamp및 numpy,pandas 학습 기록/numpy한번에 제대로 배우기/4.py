import numpy as np
#랜덤값으로 배열 생성

#random.random() : 랜덤한 수의 배열 생성
print(np.random.random((3,3)))
#실수 값으로 랜덤 값이 지정, shape값만 주면 됨

#random.randint() : 일정 구간의 랜덤 정수의 배열 생성
print(np.random.randint(0, 10, (3,3)))
#범위를 먼저 1,2 번째 파리미터에 지정 후 shape값 넣음

#random.noraml() : 정구분포(normal distribution)를 고려한 랜덤한 수의 배열 생성
# - 평균=0, 표준편차=1, 3x3 배열
print(np.random.normal(0,1,(3,3)))
#범위 지정 후 shape 지정

#random.rand() : 균등분포(uniform distribution)를 고려한 랜덤한 수의 배열 생성
print(np.random.rand(3,3))

#random.randn() : 표준 정규 분포(standard normal distribution)를 고려한 랜덤한 수의 배열 생성
print(np.random.randn(3,3))