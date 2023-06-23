# not -> 단항 연산자
#날짜/시간 출력하기

#날짜/시간과 관련된 기능을 가져옵니다.
import datetime

now = datetime.datetime.now()

print(now.year, "년")
print(now.month, "월")
print(now.day, "일")
print(now.hour, "시")
print(now.minute, "분")
print(now.second, "초")



if 3<= now.month <= 5:
    print("이번 달은 {}월로 봄입니다".format(now.month))
if 6<= now.month <= 8:
    print("이번 달은 {}월로 여름입니다".format(now.month))
if 9<= now.month <= 11:
    print("이번 달은 {}월로 가을입니다".format(now.month))
if 12 == now.month or 1<= now.month <=2:
    print("이번 달은 {}월로 겨울입니다".format(now.month))