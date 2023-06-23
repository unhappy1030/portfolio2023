#단순 선형 회귀 예제
X = [157,160,160,168,172,175,175,177,182,184,188,190]
Y = [42,48,54,58,63,69,71,73,70,80,79,81]

Xmean = sum(X) / len(X)
Ymean = sum(Y) / len(Y)
M1_W=[0.0]
M1_b=[0.0]
total1 = 0
total2 = 0
for i in range(len(X)):
    total1+=(X[i]-Xmean)*(Y[i]-Ymean)
    total2+=(X[i]-Xmean)**2
M1_W[0] = total1 / total2
M1_b[0] = Ymean - M1_W[0] * Xmean
print("Linear Regression y =",M1_W[0], "* x +", M1_b[0])
