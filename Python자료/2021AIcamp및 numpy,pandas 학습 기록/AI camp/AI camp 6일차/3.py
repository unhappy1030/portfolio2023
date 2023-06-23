#Edit Distance
def edit_distance(string1, string2):
    count=0
    string =''
    if string1 > string2:
        string=string1
    else:
        string=string2
    for i in range(len(string)):
        if len(string1) < i+1 or len(string2) < i+1:
            count+=1;
            continue
        if not(string1[i] == string2[i]):
            count+=1;
    return count
print(edit_distance("kitten","sitting"))
print(edit_distance("medium","median"))