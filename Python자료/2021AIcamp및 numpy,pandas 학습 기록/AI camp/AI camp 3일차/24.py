#실습
def mul(*values):
    output=1
    for i in values:
        output*=i
    return output
print(mul(5,7,9,10))