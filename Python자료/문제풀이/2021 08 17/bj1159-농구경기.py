def qsort(list):
    if len(list) <= 1:
        return list
    pivot = list[len(list) // 2]
    lesser_list, equal_list, greater_list = [], [], []
    for num in range(len(list)):
        if list[num] > pivot:
            greater_list.append(list[num])
        elif list[num] < pivot:
            lesser_list.append(list[num])
        else:
            equal_list.append(list[num])
    return qsort(lesser_list) + qsort(equal_list) + qsort(greater_list)
n=int(input())
namelist=[]
count=dict()
type=[]
for i in range(n):
    name=input()
    namelist.append(name[0])
    if name[0] in type:
        count[name[0]]+=1
    else:
        type.append(name[0])
        count[name[0]]=1
type = qsort(type)
check=0
for i in type:
    if count[i] >= 5:
        check=1
        print(i,end='')
if check == 0:
    print("PREDAJA")