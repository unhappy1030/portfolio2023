import numpy as np
import pandas as pd


d1 = pd.date_range('20210101', periods = 100)
df3 = pd.DataFrame(np.random.randn(100,4), index=d1, columns=list('ABCD'))

print(df3.A>0)
print('------------------------')
print(df3[df3.A>0])#df3.A>0이 True일 경우에만 출력됨
