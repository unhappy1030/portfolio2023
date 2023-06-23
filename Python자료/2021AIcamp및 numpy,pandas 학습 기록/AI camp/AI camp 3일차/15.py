#그냥
array=[]
for i in range(0,20,2):
    array.append(i*i)
print(array)
print()
#리스트 내포
#리스트 이름 = [표현식 for 반복자 in 반복할 수 있는 것]
array=[i*i for i in range(0,20,2)]
print(array)
print()
#리스트 내포-2
#리스트 이름 = [표현식 for 반복자 in 반복할 수 있는 것 if 조건문]
array = [i*i for i in range(0,20,1) if i % 2 == 1]
print(array)
print()
#예시 2
array = ["사과", "자두", "초콜릿", "바나나", "체리"]
output = [fruit for fruit in array if fruit != "초콜릿"]
print(output)