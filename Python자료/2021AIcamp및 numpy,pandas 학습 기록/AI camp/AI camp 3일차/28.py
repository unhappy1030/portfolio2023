list_result=[]
def flatten(data):
    if type(data[0]) == list:
        return flatten(data[0])
    elif len(data)!=0:
        global list_result
        list_result.append(data[0])
        del data[0]
        print(data)
        return data
    else:
        return list_result
example = [[1,2,3],[4,[5,6]],7,[8,9]]
print("원본 :",example)
print("변환 :",flatten(example))