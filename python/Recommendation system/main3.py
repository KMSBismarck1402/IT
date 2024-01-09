import pandas as pd
import numpy as np
from scipy.sparse import csr_matrix
from sklearn.neighbors import NearestNeighbors
import matplotlib.pyplot as plt
import seaborn as sns
ratings = pd.read_csv("data/movies/ratings.csv")


# print(ratings.head())
final_dataset = ratings.pivot(
    index='movieId', columns='userId', values='rating')
final_dataset.fillna(0, inplace=True)
final_dataset.head()

no_user_voted = ratings.groupby('movieId')['rating'].agg('count')
no_movies_voted = ratings.groupby('userId')['rating'].agg('count')
f, ax = plt.subplots(1, 1, figsize=(16, 4))

final_dataset = final_dataset.loc[no_user_voted[no_user_voted > 10].index, :]
final_dataset = final_dataset.loc[:,
                                  no_movies_voted[no_movies_voted > 50].index]

print(final_dataset.head())
