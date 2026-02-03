import pandas as pd
from mlxtend.preprocessing import TransactionEncoder
from mlxtend.frequent_patterns import apriori, association_rules

df = pd.read_csv("../Dataset/Job.csv", delim_whitespace=True)
df=pd.DataFrame(df)

transactions = df.astype(str).values.tolist()

te = TransactionEncoder()
te_array = te.fit(transactions).transform(transactions)

df = pd.DataFrame(te_array, columns=te.columns_)

freq = apriori(df, min_support=0.4, use_colnames=True)
rules = association_rules(freq, metric="confidence", min_threshold=0.7)

print(rules)
