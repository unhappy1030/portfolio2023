#enumerate() 함수
example_list = [0,'요소A', '요소B', '요소C']
#함수 적용 출력
print(enumerate(example_list))
#리스트로 변환 후 출력
print(list(enumerate(example_list)))
print()
for i, value in enumerate(example_list):
    print("{}번째 요소는 {}이다.".format(i,value))