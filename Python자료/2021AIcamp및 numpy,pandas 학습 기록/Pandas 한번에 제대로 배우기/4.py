import numpy as np
import pandas as pd

#인덱싱
s = pd.Series([0, 0.25, 0.5, 0.75, 1.0],
              index=['a', 'b', 'c', 'd', 'e'])
print(s)
print(s['b'])
print('b' in s)
print(s.keys())
print(list(s.items()))
s['f'] = 1.25
print(s)
print(s['a':'d'])
print(s[0 : 4])
print(s[(s > 0.4) & (s < 0.8)])
print(s[['a', 'c', 'e']])

print('-------------------------------------')
#Series 인덱싱
s = pd.Series(['a', 'b', 'c', 'd', 'e'],
              index=[1, 3, 5, 7, 9])
print(s)
print(s[1])
print(s[2:4])
print(s.loc[2:4])#Index의 value로 인덱싱
print(s.iloc[1])#1이면 0다음의 1번째의 값이 출력됨
print(s.iloc[2:4])#정수의 값으로 인덱싱
print(s.reindex(range(10)))#0~9까지의 값을 새로운 인덱스로 변경
print(s.reindex(range(10), method='bfill'))