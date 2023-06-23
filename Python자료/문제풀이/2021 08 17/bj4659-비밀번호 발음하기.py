def check_password(data):
    vowel_list=['a','e','i','o','u']
    pos_double=['e','o']
    filtered_data=[]
    check=0
    c_v=-1
    stack_chk=1
    before_letter=''
    for i in data:
        if i in vowel_list:
            check=1
            if c_v == 1:
                if before_letter == i:
                    if not(i in pos_double):
                        return 0
                stack_chk+=1
            else:
                stack_chk=1
            filtered_data.append(1)
            c_v=1
        else:
            if c_v == 0:
                if before_letter == i:
                        return 0
                stack_chk+=1
            else:
                stack_chk=1
            filtered_data.append(0)
            c_v=0
        before_letter=i
        if stack_chk == 3:
            return 0
    if check == 0:
        return 0
    return 1
while True:
    word=input()
    if word == 'end':
        break
    if check_password(word) == 1:
        print('<'+word+'> is acceptable.')
    else:
        print('<'+word+'> is not acceptable.')