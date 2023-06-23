import numpy as np
import pandas as pd

pop_tuple = {'서울특별시': 9720846,
             '부산광역시': 3403323,
             '인천광역시': 2947217,
             '대구광역시': 2427954,
             '대전광역시': 1471040,
             '광주광역시': 1455048}
population = pd.Series(pop_tuple)
male_tuple = {'서울특별시': 473275,
             '부산광역시': 1668618,
             '인천광역시': 1476813,
             '대구광역시': 1198815,
             '대전광역시': 734441,
             '광주광역시': 720060}
male = pd.Series(male_tuple)
female_tuple = {'서울특별시': 4988571,
             '부산광역시': 1735805,
             '인천광역시': 1470404,
             '대구광역시': 1229139,
             '대전광역시': 736599,
             '광주광역시': 734988}
female = pd.Series(female_tuple)
korea_df = pd.DataFrame({'인구수': population,
                         '남자인구수': male,
                         '여자인구수': female})

#DataFrame 인덱싱
print(korea_df['남자인구수'])
print(korea_df.남자인구수)
print(korea_df.여자인구수)
korea_df['남여비율'] = (korea_df['남자인구수'] * 100 / korea_df['여자인구수'])
print(korea_df.남여비율)
print(korea_df.values)
print(korea_df.T)
print(korea_df.values[0])
print(korea_df['인구수'])
print(korea_df.loc[:'인천광역시', :'남자인구수'])
print(korea_df.loc[(korea_df.여자인구수 > 1000000)])
print(korea_df.loc[(korea_df.인구수 < 2000000)])
print(korea_df.loc[(korea_df.인구수 > 2500000)])
print(korea_df.loc[korea_df.남여비율 > 100])
print(korea_df.loc[(korea_df.인구수 > 2500000) & (korea_df.남여비율 > 100)])
print(korea_df.iloc[:3, :2])