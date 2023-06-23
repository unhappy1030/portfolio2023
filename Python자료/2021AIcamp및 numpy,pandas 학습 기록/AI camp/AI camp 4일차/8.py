#람다 : 함수를 쉽게 선언하는 방법
#lambda 매개변수 : 리턴값
power = lambda x : x * x
under_3 = lambda x : x < 3

list_input_a=[1,2,3,4,5]

#map() 함수 사용
output_a = map(power,list_input_a)
print("#map()함수의 실행결과")
print("map(power,list_input_a) :", output_a)
print("map(power,list_input_a) :", list(output_a))
print()

#filter() 함수 사용
output_b = filter(under_3,list_input_a)
print("#filter()함수의 실행결과")
print("filter(under_3,list_input_a) :", output_b)
print("filter(under_3,list_input_a) :", list(output_b))