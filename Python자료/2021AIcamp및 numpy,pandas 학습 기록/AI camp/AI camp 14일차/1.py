from sklearn.datasets import load_iris
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import math

iris = load_iris()
iris_data = iris.data
iris_data_pd = pd.DataFrame(iris_data, columns = iris.feature_names)
print (iris_data_pd)
petals = pd.DataFrame(iris_data_pd.values[:,2:4], columns = ['petal length (cm)','petal width (cm)'])
plt.scatter(petals.values[:,0],petals.values[:,1])
plt.show()

from sklearn.cluster import KMeans
plt.figure(figsize=(7, 5))
km = KMeans(n_clusters= 2, random_state=20)
km.fit(iris_data_pd.iloc[:,2:4])
y_pred = km.predict(iris_data_pd.iloc[:,2:4])
plt.scatter(iris_data_pd.iloc[:,2],iris_data_pd.iloc[:,3], c=y_pred)
plt.title("Clustering")
plt.xlabel('petal length')
plt.ylabel('petal width')
plt.show()

print (km.predict(iris_data_pd.iloc[:,2:4]))

print(iris_data_pd.iloc[98,2:4])

km12 = KMeans(n_clusters= 8, random_state=20)
km12.fit(iris_data_pd.iloc[:,2:4])
y_pred12 = km12.predict(iris_data_pd.iloc[:,2:4])
plt.title("Clustering")
plt.xlabel('petal length')
plt.ylabel('petal width')
graph1 = plt.scatter(iris_data_pd.iloc[:,2],iris_data_pd.iloc[:,3], c=y_pred12)
plt.show()
h = .02 # point in the mesh [x_min, x_max]x[y_min, y_max].
km12 = KMeans(n_clusters= 8, random_state=20)
km12.fit(iris_data_pd.iloc[:,2:4])
y_pred12 = km12.predict(iris_data_pd.iloc[:,2:4])
# Plot the decision boundary. For that, we will assign a color to each
x_min, x_max = iris_data_pd.iloc[:, 2].min() - 1, iris_data_pd.iloc[:, 2].max() + 1
y_min, y_max = iris_data_pd.iloc[:, 3].min() - 1, iris_data_pd.iloc[:, 3].max() + 1
xx, yy = np.meshgrid(np.arange(x_min, x_max, h), np.arange(y_min, y_max, h))

# Obtain labels for each point in mesh. Use last trained model.
Z = km12.predict(np.c_[xx.ravel(), yy.ravel()])
# Put the result into a color plot
Z = Z.reshape(xx.shape)
plt.figure(1)
plt.clf()
plt.imshow(Z, interpolation='nearest', extent=(xx.min(), xx.max(), yy.min(), yy.max()), cmap=plt.cm.Paired, aspect='auto',
origin='lower')
plt.plot(iris_data_pd.iloc[:, 2], iris_data_pd.iloc[:, 3], 'bo', markersize=2)
# Plot the centroids as a white X
centroids = km12.cluster_centers_
plt.scatter(centroids[:, 0], centroids[:, 1], marker='^', s=16, linewidths=3, color='r', zorder=10)
plt.xlim(x_min, x_max)
plt.ylim(y_min, y_max)
plt.xticks(())
plt.yticks(())
plt.show()