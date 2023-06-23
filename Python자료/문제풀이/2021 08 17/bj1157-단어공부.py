word=input()
upper_word=word.upper()
type=[]
count=dict()
for i in upper_word:
    if i in type:
        count[i]+=1
    else:
        type.append(i)
        count[i]=1
check=0
max=0
m_w=''
for i in type:
    if count[i] > max:
        max=count[i]
        m_w=i
for i in type:
    if m_w == i:
        continue
    if max == count[i]:
        print('?')
        check=1
        break
if check == 0:
    print(m_w)