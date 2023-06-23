val_str=input("enter number> ")
v=float(val_str)
print(int(v))
v//=1
print(round(v))#round() 함수 반올림을 함 
#round() 만 사용하여 소수점 아래 잘라내는 법
#round(변수 - 0.5)를 하면 반올림이 안되므로 소수점 아래가 잘려나간다.