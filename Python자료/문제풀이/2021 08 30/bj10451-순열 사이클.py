case_num=int(input())
result=[]
input_data=[]
num_data=[]
for i in range(case_num):
    num_data=[]
    n = int(input())
    for j in range(n):
        data=int(input())
        input_data.append(data)
        num_data.append(j+1)
    