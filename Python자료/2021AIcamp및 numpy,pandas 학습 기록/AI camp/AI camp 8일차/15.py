import numpy as np

a = np.arange(1,101)
np.random.shuffle(a)
a=a.reshape(10,10)
for i in range(1000):
    a=np.sort(a,0)
    a=np.sort(a,1)
print(a)