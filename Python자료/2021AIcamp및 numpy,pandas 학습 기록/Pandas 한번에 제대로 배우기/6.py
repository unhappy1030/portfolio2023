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



#다중 인덱싱(Multi Indexing)
#-1차원의 Series와 2차원의 DataFrame객체를 넘어 3차원, 4차원 이상의 고차원 데이터 처리
#-단일 인덱스 내에 여러 인덱스를 포함하는 다중 인덱싱


#다중 인덱스 Series
print(korea_df)
idx_tuples = [('서울특별시', 2010), ('서울특별시', 2020),
              ('부산광역시', 2010), ('부산광역시', 2020),
              ('인천광역시', 2010), ('인천광역시', 2020),
              ('대구광역시', 2010), ('대구광역시', 2020),
              ('대전광역시', 2010), ('대전광역시', 2020),
              ('광주광역시', 2010), ('광주광역시', 2020)]
print(idx_tuples)
pop_tuples = [10312545, 9720846,
              2567910, 3404423,
              2758296, 2947217,
              2511676, 2427954,
              1503664, 1471040,
              1454636, 1455048]
population = pd.Series(pop_tuples, index=idx_tuples)
print(population)
midx = pd.MultiIndex.from_tuples(idx_tuples)
print(midx)
population = population.reindex(midx)
print(population)
print(population[:, 2010])
print(population['대전광역시', :])
korea_mdf = population.unstack()
print(korea_mdf)
print(korea_mdf.stack())