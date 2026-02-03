import pandas as pd
import numpy as ny
from sklearn.linear_model import LinearRegression
df=pd.read_csv("../Dataset/SimpleLinearRegression.csv")
df=pd.DataFrame(df)

x=ny.array(df['YearsExperience']).reshape(-1,1)
y=ny.array(df['Salary'])

model=LinearRegression()
model.fit(x,y)

print("Slope:", model.coef_)
print("Intercept:", model.intercept_)