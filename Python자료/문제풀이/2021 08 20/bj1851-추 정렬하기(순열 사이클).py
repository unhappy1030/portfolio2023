def qsort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    lesser_arr, equal_arr, greater_arr = [], [], []
    l_p, e_p, g_p = [], [], [],
    for n in range(len(arr)):
        if arr[n] > pivot:
            greater_arr.append(arr[n])
            
        elif arr[n] < pivot:
            lesser_arr.append(arr[n])
        else:
            equal_arr.append(arr[n])
    return qsort(lesser_arr) + qsort(equal_arr) + qsort(greater_arr)
def mk_cycle(data, sorted):
    be_changed=[]
    target_table=[]
    i=0
    for i in range(len(data)):
        if data[i] != sorted[i]:
            be_changed.append(data[i])
            target_table.append(sorted[i])
    return be_changed, target_table[0]
n = int(input())
count = 0
input_data = []
for i in range(n):
    data = int(input())
    input_data.append(data)
sorted_data=qsort(input_data)
table, a = mk_cycle(input_data, sorted_data)
count = sum(table) + (len(table) * a) - (a * 2)
print(count)