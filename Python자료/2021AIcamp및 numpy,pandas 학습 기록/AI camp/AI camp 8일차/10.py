import numpy as np
#브로드 캐스팅
#행렬끼리 연산할 때 크기가 다른 경우 이를 알아서 확대해주는 기능
a = np.random.randint(1,20,48).reshape(3,4,4)
print(np.min(a))
print(np.max(a))
print(np.argmin(a))
print(np.argmax(a))
print(np.sum(a))
print(np.mean(a))
print(np.median(a))
print(np.sort(a))
print(np.var(a))
print(np.std(a))
print(np.exp(a))
print(np.sqrt(a))
print(np.sin(a))
print(np.cos(a))