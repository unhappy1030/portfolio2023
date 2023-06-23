import numpy as np
import pandas as pd


d1 = pd.date_range('20210101', periods = 100)
df3 = pd.DataFrame(np.random.randn(100,4), index=d1, columns=list('ABCD'))

#selection
print(df3.A)
print('-------------------------')
print(df3['A'])
print('-------------------------')
print(df3[['A','B']])
print('-------------------------')
print(df3[0:3])
print('-------------------------')
print(df3['20210101':'20210103'])
print('-------------------------')
print(df3[['A','B']][0:3])