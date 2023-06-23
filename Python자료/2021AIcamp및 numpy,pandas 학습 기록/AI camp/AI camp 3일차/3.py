#range(A) A는 숫자
#->0부터 A-1까지의 정수로 범위를 만듦
#range(A,B) A,B는 숫자
#->A부터 B=1까지의 정수로 범위를 만듦
#range(A,B,C) A,B,C는 숫자
#-> A부터 A+C,A+C+C, ~ B-1보다 같거나 작을 때 까지
a = range(0,10+1)
print(list(a))
n=10
#a=range(0,n/2)     오류 발생 -> n/2는 5.0으로 float값이 나옴
a=range(0,n//2) #몫은 항상 정수 이므로 사용 가능
print(list(a))
n=10
a=range(0,int(n/2))#이렇게도 사용 가능
print(list(a))