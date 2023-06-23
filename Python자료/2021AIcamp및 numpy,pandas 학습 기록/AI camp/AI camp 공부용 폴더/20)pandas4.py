import numpy as np
import pandas as pd
#DataFrame의 맨 윗줄과 마지막 줄을 확인할 때 head()와 tail()을 사용

d1 = pd.date_range('20210101', periods = 100)
df3 = pd.DataFrame(np.random.randn(100,4), index=d1, columns=list('ABCD'))
print(df3.head())
print(df3.tail())
print(df3.index)#인덱스 확인
print(df3.columns)#열 확인
print(df3.values)#데이터 확인
print(df3.describe())#DataFrame의 통계정보 확인
print(df3.T)#DataFrame을 전치(Transpose)하는 건 .T
print(df3.sort_index(axis=1, ascending=False))#열로 정렬
print(df3.sort_index(axis=0, ascending=False))#행으로 정렬
#ascending = True 오름차순, False 내림차순

