case_num=int(input())
for i in range(case_num):
    count=0
    grade_num=input()
    grade_num=grade_num.split()
    copy=[]
    for i in range(1, len(grade_num)):
        copy.append(int(grade_num[i]))
    avg = sum(copy) / int(grade_num[0])
    for i in copy:
        if i > avg:
            count +=1
    print('{:.3f}%'.format((count/int(grade_num[0])) * 100))