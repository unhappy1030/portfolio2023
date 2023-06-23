import numpy as np
import pandas as pd
#date_range는 인자값을 6으로 하여 6개의 날짜를 생성
dates = pd.date_range('20130101', periods=6)
print(dates)
df = pd.DataFrame(np.random.randn(6,4), index = dates, columns = list('ABCD'))
print(df)