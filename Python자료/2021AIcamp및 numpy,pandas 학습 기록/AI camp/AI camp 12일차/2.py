#cost function
def costfunction(x, y, W, b, iters):
    total = 0.0
    for i in range(len(x)):
        total += pow(W[iters]*x[i]+b[i]-y[i], 2)
    return total/2