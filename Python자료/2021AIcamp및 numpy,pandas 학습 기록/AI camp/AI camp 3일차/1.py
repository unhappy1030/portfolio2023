# for 키변수 in 딕셔너리 ------키 변수에는 키 값이 하나씩 들어감
#   코드

numbers=[1,2,6,8,4,3,2,1,9,5,4,9,7,2,1,3,5,4,8,9,7,2,3]
counter={}

for number in numbers:
    if counter.get(number) == None:
        counter[number]=1
    else:
        counter[number]+=1
print(counter)

#딕셔너리 키랑 값 지우기
del counter[1]
print(counter)
#숫자 세는 예제
#딕셔너리 키랑 값 지우기
#예시 : del counter[1]