import pandas as pd
from sklearn.preprocessing import StandardScaler
from sklearn.decomposition import PCA

df=pd.read_csv("Dataset/airlines.csv")
print(df.head())
print(df.dtypes)
df=df.dropna()
print(df.isnull().sum())

scaler=StandardScaler()

df_num=['Airline ID']

df[df_num]=scaler.fit_transform(df[df_num])
df_encoded=pd.get_dummies(df,columns=['Active'],drop_first=True)
X=df[df_num]
pca=PCA(n_components=1)
df=pca.fit_transform(X)

print(pca.explained_variance_ratio_)