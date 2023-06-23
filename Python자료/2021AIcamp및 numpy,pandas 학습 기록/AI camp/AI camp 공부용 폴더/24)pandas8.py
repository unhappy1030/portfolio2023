import numpy as np
import pandas as pd

d1 = pd.date_range('20210101', periods = 100)
df3 = pd.DataFrame(np.random.randn(100,4), index=d1, columns=list('ABCD'))

df4 = df3.copy()
r = np.random.randint(1000, size=100)
df4['E'] = r
r1 = list(range(300,401))
print(df4['E'].isin(r1))
#column 'E'에 300~400사이의 값이 있을 때 True 아니면 False\
print('-------------------------------------')
print(df4[df4['E'].isin(r1)])
#column 'E'에 300~400사이의 값이 있을 때 True인 것만 출력