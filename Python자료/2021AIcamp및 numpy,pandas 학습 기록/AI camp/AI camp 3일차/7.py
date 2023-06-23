import time

number = 0
#5초 동안 반복함
target_tick = time.time() + 5
while time.time() < target_tick:
    number+=1
print("5초 동안 {}번 반복했습니다.".format(number))