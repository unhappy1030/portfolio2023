#min() 리스트 내부에서 최솟값을 찾습니다.
#max() 리스트 내부에서 최댓값을 찾습니다.
#sum() 리스트 내부에서 값을 모두 더합니다.
#reversed() 함수 -> 리스트에서 요소 순서 뒤집기

list_a = [1,2,3,4,5]
list_reversed = reversed(list_a)
print("reversed([1,2,3,4,5]) :", list_reversed)
#리스트로 바꿔야함 중요
print("list(reversed([1,2,3,4,5])) :", list(list_reversed))

#반복문 적용
for i in reversed(list_a):
    print("-",i)