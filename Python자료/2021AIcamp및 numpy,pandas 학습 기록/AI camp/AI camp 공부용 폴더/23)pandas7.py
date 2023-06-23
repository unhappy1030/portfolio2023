import numpy as np
import pandas as pd

d1 = pd.date_range('20210101', periods = 100)
df3 = pd.DataFrame(np.random.randn(100,4), index=d1, columns=list('ABCD'))
df4 = df3.copy()
r = np.random.randint(1000, size=100)

df4['E'] = r
print(df4)
print('---------------------------')
print(df3)