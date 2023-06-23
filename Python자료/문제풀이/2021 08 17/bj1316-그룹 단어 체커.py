def check_group(data):
    type=[]
    check=dict()
    filtered_data=''
    before_letter=''
    for i in data:
        if not(before_letter == i):
            filtered_data+=i
        if not(i in type):
            type.append(i)
            check[i]=0
        before_letter=i
    for i in filtered_data:
        check[i]+=1
        if check[i]>1:
            return 0
    return 1
n=int(input())
count=0
for i in range(n):
    word=input()
    count+=check_group(word)
print(count)