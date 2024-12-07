# def can_form_main_string(N, substrings, main_string, K):
#     len_main = len(main_string)
#     dp = [[False] * (K + 1) for _ in range(len_main + 1)]
#     dp[0][0] = True  # Base case: empty string with 0 deletions is possible

#     # Step 1: Fill DP table
#     for i in range(len_main):
#         for j in range(K + 1):
#             if dp[i][j]:  # If we can form up to i with j deletions
#                 for sub in substrings:
#                     sub_len = len(sub)
#                     # Check if sub can match main_string[i:i+sub_len]
#                     if i + sub_len <= len_main:
#                         # Count mismatches (deletions needed)
#                         mismatches = sum(1 for k in range(sub_len) if main_string[i + k] != sub[k])
#                         if j + mismatches <= K:
#                             dp[i + sub_len][j + mismatches] = True

#     # Step 2: Check results
#     possible_full = False
#     longest_prefix = ""
    
#     for j in range(K + 1):
#         if dp[len_main][j]:
#             possible_full = True
#             break

#     if possible_full:
#         return "Possible"

#     # Find the longest prefix that can be formed within K deletions
#     for i in range(len_main + 1):
#         for j in range(K + 1):
#             if dp[i][j]:
#                 longest_prefix = main_string[:i]

#     if longest_prefix:
#         return longest_prefix
#     else:
#         return "Nothing"

# # Input handling
# if name == "main":
#     N = int(input().strip())
#     substrings = [input().strip() for _ in range(N)]
#     main_string = input().strip()
#     K = int(input().strip())

#     result = can_form_main_string(N, substrings, main_string, K)
#     print(result)


def maximize_free_items(n, ids, costs, budget):
    items = list(zip(ids, costs))
    max_free_count = 0
    max_free_worth = 0

    for i in range(n):
        item_id, item_cost = items[i]
        if item_cost > budget:
            continue  # Skip items Veda can't afford

        # Find all free items for the current purchased item
        free_items = []
        for j in range(n):
            if i != j and item_id % ids[j] == 0:  # ID[j] is a factor of ID[i]
                free_items.append(costs[j])

        # Calculate total free items and worth
        free_count = len(free_items)
        free_worth = sum(free_items)

        # Check for better result
        if (free_count > max_free_count) or (free_count == max_free_count and free_worth > max_free_worth):
            max_free_count = free_count
            max_free_worth = free_worth

    return max_free_count, max_free_worth
