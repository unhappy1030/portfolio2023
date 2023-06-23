def check_asc(data):
    pass
    for i in range(8):
        if int(data[i]) != i+1:
            return 0
    return 1
def check_dsc(data):
    pass
    for i in range(8):
        if int(data[i]) != 8-i:
            return 0
    return 1
input_data=input()
input_data=input_data.split()
if check_asc(input_data) == 1:
    print('ascending')
elif check_dsc(input_data) == 1:
    print('descending')
else:
    print("mixed")