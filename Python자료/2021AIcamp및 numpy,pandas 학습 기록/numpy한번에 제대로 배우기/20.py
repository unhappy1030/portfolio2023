import numpy as np

a2 = np.arange(1, 10).reshape(3, 3)
print(a2)
b2 = np.random.randint(1, 10 ,size=(3,3))
print(b2)
print(a2 + b2)
print(a2 - b2)
print(a2 * b2)
print(a2 / b2)
print(a2 // b2)
print(a2 ** b2)
print(a2 % b2)