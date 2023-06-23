total=input()
total=total.split()
N=int(total[0])
M=int(total[1])
window=[]
type=[0, 0, 0, 0, 0]
for i in range((5*N+1)):
    line=input()
    window.append(line)
for i in range(M):
    m=(5 * i) + 1
    for j in range(N, 0, -1):
        check = 0
        n=(5 * j) - 1
        for k in range(3,-1,-1):
            K=3-k
            if window[n-K][m]=='*':
                type[k+1]+=1
                check=1
                break
        if check == 0:
            type[0]+=1
print('{} {} {} {} {}'.format(type[0], type[1], type[2], type[3], type[4])) 