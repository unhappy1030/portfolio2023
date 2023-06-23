import numpy as np

#배열 추가
#-append() : 배열의 끝에 값 추가
a2 = np.arange(1,10).reshape(3,3)
print(a2)
b2 = np.arange(10, 19).reshape(3,3)
print(b2)
#-axis지정이 없으면 1차원 배열 형태로 변형되어 결합
c2 = np.append(a2, b2)
print(c2)

#-axis를 0으로 지정
#-shape[0]을 제외한 나머지 shape은 같아야함
c2 = np.append(a2, b2, axis=0)
print(c2)

#-axis를 1로 지정
#-shape[1]을 제외한 나머지 shape은 같아야함
c2 = np.append(a2, b2, axis=1)
print(c2)