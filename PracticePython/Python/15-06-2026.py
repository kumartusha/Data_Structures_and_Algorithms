# Find the duplicate from the list.

# def find_duplicate(list1):
#     freq = {}
    
#     for i in range(len(list1)):
#         if list1[i] in freq:
#             freq[list1[i]] += 1
#         else:
#             freq[list1[i]] = 1
            
#     # Now traverse the dictionary.
#     for key, value in freq.items():
#         if value > 1:
#             print(key)

# if __name__ == "__main__":
#     list1 = [1, 2, 2, 3, 3, 3, 4, 4, 5]
#     result = find_duplicate(list1)

# Counting Vowels in a Given Word

# name_string = "programming"

# for i in range(len(name_string)):
#     if name_string[i] in ['a','e','i','o','u']:
#         print("Belonngs to the vowels")
#     else:
#         print("Belongs to the Consonent")


# vowel = ['a','e','i','o','u']
# name_string = "programming"
# vowel_count = conson_count = 0

# for i in range(len(name_string)):
#     if name_string[i] in vowel:
#         vowel_count += 1
#     else:
#         conson_count += 1

# print("The vowel counts are:- ", vowel_count)
# print("The consonent counts are:- ", conson_count)

# Counting the Number of Occurances of a Character in a String
# name_string = "programming"
# char_name = 'z'
# char_count = 0


# for i in range(len(name_string)):
#     if name_string[i] is char_name:
#         char_count += 1

# print(char_count)


# Writing Fibonacci Series
# 0 1 1 2 3 5 8 13 21 

# zero_c = 0
# one_c = 1

# 0 1 

# 0 + 1 = 1
# 1 + 1 = 2
# 2 + 1 = 3
# 3 + 2 = 5

# fib = [0,1]
# # Range starts from 0 by default
# for i in range(7): 
#     # print(fib[-1] + fib[-2], end=" ")
#     fib.append(fib[-1] + fib[-2])

# We need to print the fibonacci series
# 0 1 1 2 3 5 8 13 21

# fib = [0,1]

# for i in range(7):
#     fib.append(fib[-1] + fib[-2])

# print(fib)

# print the fibonacci series without the list.

# zero_c = 0
# one_c = 1

# n = 7

# while(n > 2):


# Define how many terms you want to generate
# n_terms = 10  

# # Initialize the first two terms and a loop counter
# a, b = 0, 1
# count = 0

# print("Fibonacci sequence:")
# while count < n_terms:
#     print(a, end=" ")
#     # Simultaneously update a to the current b, and b to the next term
#     a, b = b, a + b
#     count += 1

# n_terms = 10

# a,b = 0,1
# count = 0

# print("Fibonacci Number")
# while count < n_terms:
#     print(a, end = " ")
#     # a , b = b , a + b
#     a,b = b,a + b
    
#     count += 1

#  Finding the Maximum Number in a List

# all_list = [3,2,43,23,54,6,56,7,98]

# print(max(all_list))
# print(sorted(all_list)[-1])

# max_element = float("-inf")

# for i in range(len(all_list)):
#     if all_list[i] > max_element:
#         max_element = all_list[i]

# print(max_element)

# Finding the Middle Element in a List

# list_all = [1,2,3,4,5,6,7,8,9,10]

# print(list_all[len(list_all)//2])


# Converting a List into a String
# lst = ["P", "Y", "T", "H", "O", "N"]

# print("".join(lst))

# 12. Adding Two List Elements Together
# lst1 = [1, 2, 3]
# lst2 = [4, 5, 6] 

# Want to reverse the each words in the list.

# my_list = ["my", "name", "is", "tushar"]

# print()


# my_name = "my name is tushar"

# print(" ".join(my_name.split(" ")[::-1]))

# 12. Adding Two List Elements Together
# import numpy as np

# lst1 = [1, 2, 3]
# lst2 = [4, 5, 6] 

# print(np.array(lst1 + lst2))

# import numpy as np

# arr1 = np.array([1, 2, 3])
# arr2 = np.array([4, 5, 6])

# # Both methods yield the exact same result:
# result_operator = arr1 + arr2
# print(result_operator)

# result_function = np.add(arr1, arr2)

# print(result_operator)  # Output: [5 7 9]

# 13. Comparing Two Strings for Anagrams
# str1 = "tushar"
# str2 = "nitakshi"

# print(sorted(str1.lower()) == sorted(str2.lower()))


# write the program that a nnumber is palindrome or not ?

