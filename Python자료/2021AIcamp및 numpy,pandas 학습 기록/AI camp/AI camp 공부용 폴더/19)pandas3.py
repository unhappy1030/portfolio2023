import numpy as np
import pandas as pd
from pandas.core.arrays.categorical import Categorical
#시리즈와 같은 것으로 바뀔 수 있는 객체와 dict로 구성된 dataframe

#pd에 Timestamp = 날짜 형식으로 넣어 주라는 뜻
#하나하나의 raw들이 다 시리즈 데이터
#C열 같은 경우, 데이터타입이 float으로 지정되어 있다. 만약 int로 했으면 소수점 안붙었을 것
#다음 줄은 int로 지정
#E는 카테고리컬 데이터
#foo. 데이터 타입까지 다 지정. A는 1하고 .을 찍었으니 float으로 자동 적용이 되어있음
#데이터 프레임 생성. 각각의 컬럼 A~F는 시리즈 데이터이다

df2 = pd.DataFrame({
    'A' : 1.,
    'B' : pd.Timestamp('20130102'),
    'C' : pd.Series(1,index=list(range(4)),dtype='float32'),
    'D' : np.array([3] * 4, dtype='int32'),
    'E' : pd.Categorical(["test", "train", "test", "train"]),
    'F' : 'foo'
})
print(df2)
print(df2.dtypes)
