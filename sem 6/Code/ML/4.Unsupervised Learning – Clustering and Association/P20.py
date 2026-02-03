import pandas as pd
from mlxtend.frequent_patterns import apriori, association_rules

data = pd.read_csv("../Dataset/retail.csv")

freq_items = apriori(data, min_support=0.3, use_colnames=True)

rules = association_rules(freq_items, metric="confidence", min_threshold=0.7)

print(rules)
