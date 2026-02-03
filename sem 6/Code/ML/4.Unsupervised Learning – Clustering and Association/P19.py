from sklearn.datasets import load_breast_cancer
from scipy.cluster.hierarchy import dendrogram, linkage
import matplotlib.pyplot as plt

data = load_breast_cancer()
X = data.data

linked = linkage(X, method='ward')

dendrogram(linked)
plt.show()
