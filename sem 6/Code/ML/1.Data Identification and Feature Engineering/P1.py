import pandas as pd
from sklearn.preprocessing import StandardScaler
from sklearn.decomposition import PCA

df= pd.read_csv("Dataset/auto-mpg.csv")
print(df.head())


df=df.dropna()
print(df.isnull().sum())
print(df.dtypes)

df_num=['mpg','cylinders','displacement','horsepower','weight','acceleration','model year']

scaler=StandardScaler()
df[df_num]=scaler.fit_transform(df[df_num])

X=df[df_num]
pca=PCA(n_components=2)
df=pca.fit_transform(X)

print(pca.explained_variance_ratio_)