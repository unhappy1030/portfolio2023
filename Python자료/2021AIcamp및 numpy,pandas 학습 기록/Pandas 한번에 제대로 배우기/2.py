import numpy as np
import pandas as pd

#DataFrame 객체
print(pd.DataFrame([{'A':2, 'B':4, 'D':3}, {'A':4, 'B':5, 'C':7}]))
#누락값, 비어있는 곳에 NaN을 넣어서 표기해줌
print('-------------------')
print(pd.DataFrame(np.random.rand(5, 5),
                   columns=['A', 'B', 'C', 'D', 'E'],
                   index=[1, 2, 3, 4, 5]))
print('population-------------------')
pop_tuple = {'서울특별시': 9720846,
             '부산광역시': 3403323,
             '인천광역시': 2947217,
             '대구광역시': 2427954,
             '대전광역시': 1471040,
             '광주광역시': 1455048}
population = pd.Series(pop_tuple)
print(population)
print('male-------------------')
male_tuple = {'서울특별시': 473275,
             '부산광역시': 1668618,
             '인천광역시': 1476813,
             '대구광역시': 1198815,
             '대전광역시': 734441,
             '광주광역시': 720060}
male = pd.Series(male_tuple)
print(male)
print('female-------------------')
female_tuple = {'서울특별시': 4988571,
             '부산광역시': 1735805,
             '인천광역시': 1470404,
             '대구광역시': 1229139,
             '대전광역시': 736599,
             '광주광역시': 734988}
female = pd.Series(female_tuple)
print(female)
print('-------------------')
korea_df = pd.DataFrame({'인구수': population,
                         '남자인구수': male,
                         '여자인구수': female})
print(korea_df)
print(korea_df.index)
print(korea_df.columns)
print(korea_df['여자인구수'])
print(korea_df['서울특별시':'인천광역시'])