import pandas as pd

file_path = '/mnt/data/Guardiões da Saúde - Forms (respostas filtradas).xlsx'
data = pd.read_excel(file_path)

data.head()


from itertools import combinations
from collections import defaultdict

transactions = []
for _, row in data.iterrows():
    transaction = [f"Pergunta {i+1}_{response}" for i, response in enumerate(row)]
    transactions.append(set(transaction))

def apriori_manual(transactions, min_support):
    item_counts = defaultdict(int)
    for transaction in transactions:
        for item in transaction:
            item_counts[frozenset([item])] += 1

    num_transactions = len(transactions)
    current_itemsets = {item for item in item_counts if item_counts[item] / num_transactions >= min_support}

    frequent_itemsets = {item: count / num_transactions for item, count in item_counts.items() if item in current_itemsets}
    k = 2

    while current_itemsets:
        candidate_itemsets = set([i.union(j) for i in current_itemsets for j in current_itemsets if len(i.union(j)) == k])
        candidate_counts = defaultdict(int)
        for transaction in transactions:
            for candidate in candidate_itemsets:
                if candidate.issubset(transaction):
                    candidate_counts[candidate] += 1
        current_itemsets = {item for item in candidate_counts if candidate_counts[item] / num_transactions >= min_support}
        frequent_itemsets.update({item: count / num_transactions for item, count in candidate_counts.items() if item in current_itemsets})
        k += 1

    return frequent_itemsets

min_support = 0.2
frequent_itemsets = apriori_manual(transactions, min_support)
frequent_itemsets_sorted = sorted(frequent_itemsets.items(), key=lambda x: -x[1])


frequent_itemsets_sorted[:10] 

def generate_rules(frequent_itemsets, transactions, min_confidence=0.5):
    rules = []
    for itemset in frequent_itemsets:
        if len(itemset) > 1:
            subsets = list(combinations(itemset, len(itemset) - 1))
            for antecedent in subsets:
                antecedent = frozenset(antecedent)
                consequent = itemset - antecedent
                
                support_itemset = frequent_itemsets[itemset]
                support_antecedent = frequent_itemsets[antecedent]
                confidence = support_itemset / support_antecedent
                if confidence >= min_confidence:
                    lift = confidence / (frequent_itemsets[consequent] / len(transactions))
                    rules.append((antecedent, consequent, support_itemset, confidence, lift))
    return rules

min_confidence = 0.5
rules = generate_rules(frequent_itemsets, transactions, min_confidence)
rules_sorted = sorted(rules, key=lambda x: -x[3])  # Ordenar por confiança

rules_sorted[:10]


