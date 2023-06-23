#format()함수로 숫자를 문자열로 변환
print("{} {}".format(10, 20))
print("count = {}".format(10))
#C언어에서의 printf("%d", 10); 출력형식 지정자 사용과 비슷한 형태

count = 10
print("count = {}".format(count))#변수값을 사용가능
#IndexError 예외
#"{} {}".format(1, 2, 3, 4, 5) 이거는 에러가 나지 않음
# <파라미터가 더 많은 경우 자동적으로 뒷부분의 값들은 사라짐>
#"{} {} {}".format(1, 2)



#정수
output_a = "{:d}".format(52)
output_b = "{:5d}".format(52)
output_c = "{:010d}".format(52)
print("\n\n"+ output_a)
print(output_b)
print(output_c)
#칸수 조절 가능

#기호와 함께 출력하기
output_d="{:+d}".format(52)
output_e="{:+d}".format(-52)#음수 양수에 따라서 수에 맞는 +/-기호가 붙음
print("\n\n"+ output_d)
print(output_e)

output_f="{: d}".format(52)
output_g="{: d}".format(-52)#음수 양수에 따라서 수에 맞는 -기호가 붙고 양수의 경우는 공백을 출력
print("\n\n"+ output_f)
print(output_g)

output_h="{:+05d}".format(52)
output_i="{:+05d}".format(-52)#음수 양수에 따라서 수에 맞는 +/-기호가 붙음
#그리고 공백을 0으로 채우고 맨앞에 기호를 표시
print("\n\n"+ output_h)
print(output_i)
output_j="{:=+5d}".format(52)
output_k="{:=+5d}".format(-52)#음수 양수에 따라서 수에 맞는 +/-기호가 붙음
#기호를 앞으로 밀기
print("\n\n"+ output_j)
print(output_k)