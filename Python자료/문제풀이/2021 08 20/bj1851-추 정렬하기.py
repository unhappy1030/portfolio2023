def qsort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    lesser_arr, equal_arr, greater_arr = [], [], []
    for n in range(len(arr)):
        if arr[n] > pivot:
            greater_arr.append(arr[n])
        elif arr[n] < pivot:
            lesser_arr.append(arr[n])
        else:
            equal_arr.append(arr[n])
    return qsort(lesser_arr) + qsort(equal_arr) + qsort(greater_arr)
def check_pos(data, sorted):
    be_changed=[]
    target_table=[]
    max=[0,0]
    count_el=0
    for i in range(len(data)):
        if data[i] != sorted[i]:
            if count_el == 0:
                max[0]=data[i]
                max[1]=count_el
            elif max[0] < data[i]:
                max[0]=data[i]
                max[1]=count_el
            be_changed.append(data[i])
            target_table.append(sorted[i])
            count_el+=1
    return be_changed, target_table, max[1]
def bubble(biggest_pos, data):
    global count
    temp=0
    temp=data[biggest_pos]
    data[biggest_pos]=data[-1]
    data[-1]=temp
    count+= data[-1]+data[biggest_pos]
    return data
n = int(input())
count = 0
input_data = []
for i in range(n):
    data = int(input())
    input_data.append(data)
sorted_data=qsort(input_data)
while True:
    input_data, sorted_data, max_pos= check_pos(input_data, sorted_data)
    if len(input_data) == 0:
        break
    input_data=bubble(max_pos, input_data)
print(count)