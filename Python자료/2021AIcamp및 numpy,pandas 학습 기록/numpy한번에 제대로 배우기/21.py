import numpy as np

#절대값 함수(Absolute Function)
#-absolute(), abs() : 내장된 절대값 함수

a1 = np.random.randint(-10, 10, size=5)
print(a1)
print(np.absolute(a1))
print(np.abs(a1))