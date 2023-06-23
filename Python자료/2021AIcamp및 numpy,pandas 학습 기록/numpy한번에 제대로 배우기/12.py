import numpy as np

a1 = np.array([1,2,3,4,5])
a1[0] = 4
a1[1] = 5
a1[2] = 6
a2 = np.array([[1,2,3],[4,5,6],[7,8,9]])
a3=np.array([[[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]],
             [[1,2,3],[4,5,6],[7,8,9]]])

#배열 값 삽입/수정/삭제/복사

#배열 값 삽입
#-insert() : 배열의 특정 위치에 값을 삽입
#-axis를 지정하지 않으면 1차원 배열로 변환
#-추가할 방향을 axis로 지정
#-원본 배열 변경없이 새로운 배열 반환

#1차원
print(a1)
b1 = np.insert(a1, 0, 10)
print(b1)
print(a1)#원본의 값은 변경되지 않음
c1 = np.insert(a1, 2, 10)
print(c1)

#2차원
print(a2)
b2 = np.insert(a2, 1, 10, axis=0)
print(b2)
c2 = np.insert(a2, 1, 10, axis=1)
print(c2)

#배열 값 수정
#-배열의 인덱싱으로 접근하여 값 수정

#1차원
print(a1)
a1[0]=1
a1[1]=2
a1[2]=3
print(a1)
a1[:2] = 9
print(a1)
i = np.array([1, 3, 4])
a1[i] = 0 #fancy인덱싱 사용으로 값 수정
print(a1)
a1[i]+=4
print(a1)

#2차원
print(a2)
a2[0, 0] = 1
a2[1, 1] = 2
a2[2, 2] = 3
a2[0] = 1
print(a2)
a2[1:, 2] = 9
print(a2)
row = np.array([0, 1])
col = np.array([0, 2])
a2[row, col] = 0
print(a2)

#배열 값 삭제
#-delete() : 배열의 특정 위치에 값 삭제
#-axis를 지정하지 않으면 1차원 배열로 변환
#-삭제할 방향을 axis로 지정
#-원본 배열의 변경없이 새로운 배열 반환

#1차원
print(a1)
b1 = np.delete(a1, 1)
print(b1)
print(a1)

#2차원
print(a2)
b2 = np.delete(a2, 1, axis=0)
print(b2)
c2 = np.delete(a2, 1, axis=1)
print(c2)

#배열 복사
#-리스트 자료형과 달리 배열의 슬라이스는 복사본이 아님
print(a2)
print(a2[:2,:2])
a2_sub = a2[:2, :2]
print(a2_sub)
a2_sub[:, 1] = 0#메모리 위치가 원본과 같은 부분을 사용함
print(a2_sub)
print(a2)

#-copy() : 배열이나 하위 배열 내의 값을 명시적으로 복사
print(a2)
a2_sub_copy = a2[:2, :2].copy()#a2와는 다른 매모리 위치를 사용
print(a2_sub_copy)
a2_sub_copy[:, 1] = 1
print(a2_sub_copy)
print(a2)

#배열 변환

#배열 전치 및 축변경
print(a2)
print(a2.T)

print(a3)
print(a3.T)

#선택 변경

#2차원
print(a2)
print(a2.swapaxes(1,0))

#3차원
print(a3)
print(a3.swapaxes(0,1))
print(a3.swapaxes(1,2))
