#대문자 소문자 바꾸기
a = "Hello Python Programming...!"
a=a.upper()
print(a)
a=a.lower()
print(a)
#문자열 양옆의 공백 제거하기
input_a="""
    안녕하세요      
문자열의 함수를 알아 봅시다
"""
print(input_a)
print(input_a.strip())
#isalnum() : 문자열이 알파벳 또는 숫자로만 구성되어 있는지 확인합니다.
#isalpha() : 문자열이 알파벳으로만 구성되어 있는지 확인합니다.
#isidentifier() : 문자열이 식별자로 사용할 수 있는 것인지 확인합니다.
#isdecimal() : 문자열이 정수 형태인지 확인합니다.
#isdigit() : 문자열이 숫자로 인식될 수 있는 것인지 확인합니다.
#isspace() : 문자열이 공백으로만 구성되어있는 지 확인합니다.
#islower() : 문자열이 소문자로만 구성되어있는 지 확인합니다.
#isupper() : 문자열이 대문자로만 구성되어있는 지 확인합니다.

#문자열 찾기 : find(), rfind()
output_a = "안녕안녕하세요".find("안녕")
print(output_a)
output_b = "안녕안녕하세요".rfind("안녕")
print(output_b)
#문자열과 in 연산자
print("안녕" in "안녕하세요")
print("잘자" in "안녕하세요")
#문자열 자르기: split()
a="10 20 30 40 50".split()
print(a)