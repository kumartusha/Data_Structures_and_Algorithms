#  Today in this tutorial we will be learning about the Hashmap in Python.


hm = {}

hm["Tushar"] = "Kumar"
hm["Ankit"] = "Singh"
hm["Komal"] = "Singh"
hm["Parth"] = "Nagoli"
hm["Parul"] = "Sharma"

# print(hm)

# print(hm["Tushar"])
# print(hm["Ankit"])
# print(hm["Komal"])
# print(hm["Parth"])
# print(hm["Parul"])
# print(hm)
# # hm.pop("Ankit")
# del hm["Tushar"]
# print(hm)

# str1 = "TusharTushar"

# hashmap = {}
#  Store the Frequencies.
# for i in str1:
#     if i in hashmap:
#         hashmap[i] += 1
#     else:
#         hashmap[i] = 1
# for i in str1:
#     hashmap[i] = hashmap.get(i, 0) + 1


# #  print the hashmap.
# for i, val in hashmap.items():
#     print(i, val)


# Input: arr[] = [2, 3, 2, 3, 5]
# Output: [0, 2, 2, 0, 1]
# Explanation: We have: 1 occurring 0 times, 2 occurring 2 times, 3 occurring 2 times, 4 occurring 0 times, and 5 occurring 1 time.


list1 = [2, 3, 2, 3, 5]
size = len(list1)

hashmap = {}
#  First store all the occurance of the elements.
for i in list1:
    if i in hashmap:
        hashmap[i] += 1
    else:
        hashmap[i] = 1

list2 = [0] * len()
print(list2)
for j in range(1, len(list1) + 1):
    if j in hashmap:
        list2[j - 1] = hashmap[j]
    else:
        list2[j - 1] = 0

# print(hashmap)
print(list2)
