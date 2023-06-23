import numpy as np

#배열 연결

#-concatenate() : 튜플이나 배열의 리스트를 인수로 사용해 배열 연결

#1차원
a1 = np.array([1, 3, 5])
b1 = np.array([2, 4, 6])
print(np.concatenate([a1, b1]))
c1 = np.array([7, 8, 9])
print(np.concatenate([a1, b1, c1]))

#2차원
a2 = np.array([[1, 2, 3],
               [4, 5, 6]])
print(np.concatenate([a2, a2]))
print(np.concatenate([a2, a2], axis=1))

#-vstack() : 수직 스택(vertical stack), 1차원으로 연결
print(np.vstack([a2, a2]))
#-hstack() : 수평 스택(horizontal stack), 2차원으로 연결
print(np.hstack([a2, a2]))
#-dstack() : 깊이 스택(depth stack), 3차원으로 연결
print(np.dstack([a2, a2]))
#-stack() : 새로운 차원으로 연결
print(np.stack([a2, a2]))