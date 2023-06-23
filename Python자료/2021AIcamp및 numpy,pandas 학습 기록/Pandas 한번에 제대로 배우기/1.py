import numpy as np
import pandas as pd

#Pandas 객체

#Series 객체
s = pd.Series([0, 0.25, 0.5, 0.75, 1.0])
print(s)
print('-----------------')
print(s.values)
print('-----------------')
print(s.index)
print('-----------------')
print(s[1])
print('-----------------')
print(s[1:4])
print('-----------------')
s = pd.Series([0, 0.25, 0.5, 0.75, 1.0],
              index=['a', 'b', 'c', 'd', 'e'])
print(s)
print('-----------------')
print(s['c'])
print('-----------------')
print(s[['c', 'd', 'e']])
print('-----------------')
print('b' in s)
print('-----------------')
s = pd.Series([0, 0.25, 0.5, 0.75, 1.0],
              index=[2, 4, 6, 8, 10])
print(s)
print('-----------------')
print(s[4])
print('-----------------')
print(s[2:])
print('-----------------')
print(s.unique())
print('-----------------')
print(s.value_counts())
print('-----------------')
print(s.isin([0.25, 0.75]))
print('-----------------')
pop_tuple = {'서울특별시': 9720846,
             '부산광역시': 3403323,
             '인천광역시': 2947217,
             '대구광역시': 2427954,
             '대전광역시': 1471040,
             '광주광역시': 1455048}
population = pd.Series(pop_tuple)
print(population)
print('-----------------')
print(population['서울특별시'])
print('-----------------')
print(population['서울특별시':'인천광역시'])