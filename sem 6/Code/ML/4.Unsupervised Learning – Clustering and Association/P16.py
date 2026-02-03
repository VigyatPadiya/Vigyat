import pandas as pd
from sklearn.cluster import KMeans
from sklearn.preprocessing import StandardScaler

# Load dataset
data = pd.read_csv("titanic.csv")

# Remove class label (Survived)
X = data.drop('Survived', axis=1)

# Handle missing values
X.fillna(X.mean(), inplace=True)

# Scaling
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# K-Means
kmeans = KMeans(n_clusters=2, random_state=42)
kmeans.fit(X_scaled)

print("Cluster labels:")
print(kmeans.labels_)
