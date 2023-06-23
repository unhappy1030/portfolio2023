import numpy as np


a1 = np.array([1,2,3,4,5])
a1[0] = 4
a1[1] = 5
a1[2] = 6
a2 = np.array([[1,2,3],[4,5,6],[7,8,9]])
a3=np.array([[[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]]])
#배열 생성 및 초기화

#zeros() : 모든 요소를 0으로 초기화
print(np.zeros(10)) 
#10개의 요소를 0으로 초기화 된 배열을 생성

#ones() : 모든 요소를 1로 초기화
print(np.ones(10))
print(np.ones((3,3)))#shape의 값을 ones()괄호 안에 넣어야 함

#full() : 모든 요소를 지정한 값으로 초기화
print(np.full((3,3), 1.23))

#eye() : 단위행렬(identity matrix) 생성
# - 주대각선의 원소가 모두 1이고 나머지 원소는 모두 0인 정사각 행렬
print(np.eye(3))

#tri() : 삼각행렬 생성
print(np.tri(3))

#empty() : 초기화되지 않은 배열 생성
# - 초기화가 없어서 배열 생성비용이 저렴하고 빠름
# - 초기화되지 않아서 기존의 메모리 위치에 존재하는 값이 있음
print(np.empty(10))

#_like() : 지정된 배열과 shape가 같은 행렬 생성
# - np.zeros_like()
# - np.ones_like()
# - np.full_like()
# - np.empty_like()
print(a1)
print(np.zeros_like(a1))
print(a2)
print(np.ones_like(a2))
print(a3)
print(np.full_like(a3,10))