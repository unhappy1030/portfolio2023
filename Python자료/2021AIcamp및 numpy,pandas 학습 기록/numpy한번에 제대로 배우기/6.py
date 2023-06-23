import numpy as np

#날짜/시간 배열 생성
date = np.array('2021-01-01', dtype=np.datetime64)
print(date)

date = date + np.arange(12)
#날짜를 계산가능한 형태로 사용 가능
print(date)

datetime = np.datetime64('2021-07-15 00:31')
print(datetime)
datetime = np.datetime64('2021-07-15 00:31:12.34', 'ns')
print(datetime)