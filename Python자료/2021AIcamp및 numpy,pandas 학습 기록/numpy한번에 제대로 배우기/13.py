import numpy as np

a1 = np.array([1,2,3,4,5])
a1[0] = 4
a1[1] = 5
a1[2] = 6
a2 = np.array([[1,2,3],[4,5,6],[7,8,9]])
a3=np.array([[[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]]])

#배열의 재구조화

#reshape() : 배열의 형상을 변경
n1 = np.arange(1, 10)
print(n1)
print(n1.reshape(3,3))#1차원 이였던 n1의 배열이 2차원 3,3배열로 변경됨

#newaxis() : 새로운 축 추가
print(n1)
print(n1[np.newaxis, :5])
print(n1[:5, np.newaxis])

#배열의 크기 변경

#-배열 모양만 변경
n2 = np.random.randint(0, 10, (2, 5))
print(n2)
n2.resize((5,2))
print(n2)

#-배열 크기 증가
#-남은 공간은 0으로 채워짐
n2.resize((5, 5))
print(n2)

#-배열 크기 감소
#-포함되지 않은 값은 삭제됨
n2.resize((3, 3))
print(n2)