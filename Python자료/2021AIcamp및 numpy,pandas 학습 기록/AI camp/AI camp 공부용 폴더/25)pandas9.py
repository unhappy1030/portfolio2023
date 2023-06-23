import numpy as np
import pandas as pd
from pandas._libs.tslibs.timestamps import Timestamp

d1 = pd.date_range('20210101', periods = 100)
df3 = pd.DataFrame(np.random.randn(100,4), index=d1, columns=list('ABCD'))

d1=[0]
d1[0]=pd.Timestamp(2021,1,1,0,0,0)
l = list(range(1001,1101))
s1 = pd.Series(l, index=pd.date_range('20210101',periods=100))
print(s1)
#새로운 열을 날짜와 인덱스에 따라 자동적으로 줄이 맞춰지도록 설정
df3['F'] = s1
print('-------------------------------')
print(df3)
#라벨에 따라 값을 설정
df3.at[d1[0],'A'] = 0
#위치에 따라 값을 설정
df3.iat[0,1] = 0
#numpy배열로 할당
df3.loc[:,'D'] = np.array([5] * len(df3))
print('-------------------------------')
print(df3)