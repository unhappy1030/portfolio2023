#경사 하강법
import random
def costfunction(x, y, W, b, iters):
    total = 0.0
    for i in range(len(x)):
        total += pow(W[iters]*x[i]+b[iters]-y[i], 2)
    return total/2
def g_W(x, y, iters):
    total = 0.0
    global W, b
    for i in range(len(x)):
        total+=W[iters] * (x[i]**2) + b[iters] * x[i] - x[i] * y[i]
    return total
def g_b(x, y, iters):
    total=0.0
    global W, b
    for i in range(len(x)):
        total+=W[iters] * x[i] + b[iters] - y[i]
    return total

X = [157,160,160,168,172,175,175,177,182,184,188,190]
y = [42,48,54,58,63,69,71,73,70,80,79,81]
W=[0.0]
b=[0.0]
W[0]=float(random.randint(-100,100))
b[0]=float(random.randint(-100,100))

iters = 0
cost = costfunction(X,y,W,b,iters)

print("Iteration",iters,"\tW[0]:",W[0],"\tb[0]:",b[0],"\tcost:",cost)
rate = 10/cost
MaxItrs = cost
precision = 0.0001
while cost > precision:
    iters = iters+1
    gradientW = g_W(X,y,iters-1)
    gradientb = g_b(X,y,iters-1)
    newW = W[iters-1] - rate * gradientW
    newb = b[iters-1] - rate * gradientb
    W.append(newW)
    b.append(newb)
    cost = costfunction(X,y,W,b,iters)
    if iters % 100 == 0:
        print("iteration: ", iters, end=',')
        print("gradient W: %.lf, gradient b: %.lf"%(gradientW,gradientb),end=' ')
        print("W[%d]:%.lf, b[%d]:%.lf, cost: %.lf"%(iters,W[iters],iters,b[iters],cost))
        ans = input()
        if ans == 'q':
            break