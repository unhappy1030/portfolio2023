#Pelimdrome
#앞으로 읽어도, 뒤로 읽어도 똑같은 단어
def pelimdrome(string):
    reversed_string=list(reversed(string))
    check = 0
    for i in range(len(string)):
        if not (string[i] == reversed_string[i]):
            check =1
    if check == 1:
        return False
    else:
        return True
print(pelimdrome('test'))
print(pelimdrome('noon'))