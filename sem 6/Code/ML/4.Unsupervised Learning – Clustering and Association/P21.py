from mlxtend.preprocessing import TransactionEncoder
from mlxtend.frequent_patterns import apriori, association_rules
import pandas as pd

transactions = [
    ['Red','White','Green'],
    ['White','Orange'],
    ['White','Blue'],
    ['Red','White','Orange'],
    ['Red','Blue'],
    ['White','Blue'],
    ['White','Orange'],
    ['Red','White','Blue','Green'],
    ['Red','White','Blue'],
    ['Yellow']
]

te = TransactionEncoder()
te_array = te.fit(transactions).transform(transactions)

df = pd.DataFrame(te_array, columns=te.columns_)

freq_items = apriori(df, min_support=0.3, use_colnames=True)
rules = association_rules(freq_items, metric='confidence', min_threshold=0.7)

print(rules)
