#실수
output_a = "{:f}".format(52.273)
output_b = "{:15f}".format(52.273)
output_c = "{:015f}".format(52.273)
print("\n\n"+ output_a)
print(output_b)
print(output_c)
#칸수 조절 가능
#의미없는 소수점 제거
output_d="{:g}".format(52.0)
output_e="{:g}".format(52.01245)#소수점아래에 0이외에 수가 있으면 제거하지 않음
print("\n\n"+ output_d)
print(output_e)