import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns
sns.set();
rng = np.random.RandomState(42)
x = 10 * rng.rand(50)
y = 2 * x - 1 + rng.randn(50)
plt.scatter(x,y)