import pandas as pd

data = {
    'Product':['Pencil','Pen','Eraser','Book','Scale'],
    'Price':[10,20,5,50,15],
    'Quality':[100,250,100,50,60]
}
df = pd.DataFrame(data)
#print(df.columns)
#print(df.shape[0])

print(df[df['Price']<50])

df['Total']=df["Price"]*df['Quality']
print(df)

df.to_csv('Inventory.csv',index=False)