import pandas as pd
from sklearn.linear_model import LinearRegression

data = pd.read_csv("../Dataset/houseprice.csv")

X = data[['Area', 'Bedrooms']]
y = data['Price']

model = LinearRegression()
model.fit(X, y)

prediction = model.predict([[2000, 3]])
print("Predicted House Price:", prediction[0])
