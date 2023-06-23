import numpy as np

#배열 입출력
a2 = np.random.randint(1, 10, size=(5, 5))
print(a2)
np.save("a", a2)

b2 = np.random.randint(1, 10, size=(5, 5))
print(b2)
np.savez("ab", a2, b2)

npy = np.load("a.npy")
print('npy-------------------')
print(npy)

npz = np.load("ab.npz")
print('npz-------------------')
print(npz.files)
print('npz(a2)-------------------')
print(npz['arr_0'])
print('npz(b2)-------------------')
print(npz['arr_1'])

print('-------------------')
#텍스트 저장
print(a2)
np.savetxt("a.csv", a2, delimiter=',')
print('csv-------------------')
csv = np.loadtxt("a.csv", delimiter=',')
print(csv)

print('-------------------')
print(b2)
np.savetxt("b.csv", b2, delimiter=',', fmt='%.2e', header='c1, c2, c3, c4, c5')
#fmt = '%.2e'소수점 두자리까지만 저장해라
#header = 'c1, c2, c3, c4, c5'맨 위에 헤더 표기
print('csv-------------------')
csv = np.loadtxt("b.csv", delimiter=',')
print(csv)
