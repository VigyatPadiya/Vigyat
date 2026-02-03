import pandas as pd
from sklearn.cluster import KMeans
from sklearn.preprocessing import StandardScaler

# Load Titanic dataset
df = pd.read_csv("../Dataset/titanic.csv")

# Encode categorical column
df['Sex'] = df['Sex'].map({'male': 0, 'female': 1})

# Remove class label
X = df.drop('Survived', axis=1)

# Handle missing values
X.fillna(X.mean(), inplace=True)

# Feature scaling
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

# Apply K-Means clustering
kmeans = KMeans(n_clusters=2, random_state=42)
kmeans.fit(X_scaled)

# Output cluster labels
print("Cluster Labels:")
print(kmeans.labels_)
