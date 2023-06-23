import numpy as np

#생성한 값으로 배열 생성

#arrage() : 정수 범위로 배열 생성
print(np.arange(0,30,2))

#linspace() : 범위 내에서 균등한 간격의 배열 생성
print(np.linspace(0, 1, 5))

#logspace() : 범위 내에서 균등간격으로 로그 스케일로 배열 생성
print(np.logspace(0.1, 1, 20))