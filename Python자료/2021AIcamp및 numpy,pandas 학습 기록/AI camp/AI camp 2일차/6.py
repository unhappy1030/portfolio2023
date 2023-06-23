list_of_list=[[1,2,3],[4,5,6,7],[8,9],132,'asdg']
for i in list_of_list:
    if type(i) == list:
        for j in i:
            print(j)
    else:
        print(i)