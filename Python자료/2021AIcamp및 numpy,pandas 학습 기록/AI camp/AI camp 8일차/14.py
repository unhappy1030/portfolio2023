import numpy as np
a = np.arange(1,21,2).reshape(2,5)
b = np.arange(3,13,1).reshape(5,2)
print(np.dot(a,b))
print(a@b)