n = int(input())
for i in range(n):
    stack=0
    o_x=-1
    point=0
    ox=input()
    for j in ox:
        if j == 'O':
            if o_x == 1:
                stack+=1
            else:
                stack=1
            point+=stack
            o_x=1
        else:
            o_x=0
    print(point)