#리스트에 값 추가하기 : append(), insert(), extend()
list_a = [1,2,3]

#리스트 뒤에 요소 추가하기
list_a.append(4)
list_a.append(5)
print(list_a)
#리스트 중간에 요소 추가하기
list_a.insert(0,10)
print(list_a)
#리스트 이어 붙이기
list_a = [1,2,3]
list_a.extend([4, 5, 6])
print(list_a)

#리스트 요소 제거하기
list_a=[0,1,2,3,4,5]

#제거 방법[1] - del
del list_a[1]
print("del list_a[1] =", list_a)

#제거 방법[2] - pop()
list_a.pop(2)
print("pop(2) :", list_a)

list_b = [0,1,2,3,4,5,6]
del list_b[3:6]
print(list_b)

#리스트 요소를 값으로 제거하기
list_c = [1,2,1,2]
list_c.remove(2)
print(list_c)

#리스트 모두 제거하기 : clear
list_d = [0,1,2,3,4,5]
list_d.clear()
print(list_d)