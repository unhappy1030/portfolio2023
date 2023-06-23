i = 0

#무한 반복
while True:
    print("{}번쨰 반복문입니다.".format(i))
    i+=1
    input_text = input(">종료하시겠습니까?(y): ")
    if input_text in ["y","Y"]:
        print("반복을 종료합니다.")
        break