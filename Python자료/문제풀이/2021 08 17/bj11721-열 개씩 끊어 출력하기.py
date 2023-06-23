input_data=input()
before=0
for i in range(10,len(input_data),10):
    print(input_data[before:i])
    before=i
print(input_data[before:])