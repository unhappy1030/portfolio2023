output=[]
num=int(input())
for i in range(num):
    string=input()
    p=''
    for j in range(len(string)):
        n=ord(string[j])+1
        if n==91:
            n=65
        if n==123:
            n=97
        p+=chr(n)
    output.append(p)
for i in range(len(output)):
    print("String #{}".format(i+1))
    print(output[i])
    print()