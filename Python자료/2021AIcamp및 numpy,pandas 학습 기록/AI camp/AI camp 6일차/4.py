#Itinerary
count=0
table=[]
def check_none(l):
    if 'None' in l:
        return 'None'
    else:
        return l
def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2][1]
    lesser_arr, equal_arr, greater_arr = [], [], []
    for num in range(len(arr)):
        if arr[num][1] < pivot:
            lesser_arr.append(arr[num])
        elif arr[num][1] > pivot:
            greater_arr.append(arr[num])
        else:
            equal_arr.append(arr[num])
    return quick_sort(lesser_arr) + equal_arr + quick_sort(greater_arr)
def itinerary(iter, start):
    global count,table
    if len(table) == len(iter):
        count=0
        table=[]
        return []
    record=[]
    co=[]
    for i in iter:
        if i[0] == start:
            co.append(i)
    if len(co) == 0:
        return ['None']
    co=quick_sort(co)
    table.append(co)
    if count == 0:
        record.append(start)
        count+=1
    record.append(co[0][1])
    return check_none(record + itinerary(iter,co[0][1]))
iter = [('SFO', 'HKO'), ('YYZ','SFO'), ('YUL','YYZ'), ('HKO','ORD')]
start = 'YUL'
print("Start : {}, Itinerary : {}".format('YUL',itinerary(iter,'YUL')))
iter = [('A','B'),('A','C'),('B','C'),('C','A')]
start = 'A'
print("Start : {}, Itinerary : {}".format('YUL',itinerary(iter,start)))
iter = [('SFO','COM'),('COM','YYZ')]
start = 'COM'
print("Start : {}, Itinerary : {}".format('YUL',itinerary(iter,start)))