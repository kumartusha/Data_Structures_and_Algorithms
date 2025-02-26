# Assignment 1 in Python on Array And List.

#  we have and array
# arr1 = [3, 45, 3, 4, 22, 3, 67, 6, 57, 8]
# # arr1.sort()
# # print(arr1)

# arr2 = sorted(arr1)
# print(arr1)
# print(arr2)

# a = [1, "Tushar", "Kumar", 5.67, 34, True, False]
# list2 = []

# for i in list1:
#     if type(i) == int:
#         list2.append(i)


# print(list2)
# def average(list1):
#     sum = 0
#     len1 = len(list1)

#     for i in list1:
#         sum += i
#     return sum / len1


# if __name__ == "__main__":
#     print(average([12, 13, 1, 212, 4, 45, 66, 7]))

# number = 2
# #  we need to create the list of the first N Prime numbers.

# #  we need too check the given number is prime or not.
# for i in range(2, number):
#     if number % i == 0:
#         print("Number is not Prime")
#         break
# else:
#     print(number)
#     print("Number is Prime")

# n = 5
# count = 0
# list1 = []

# for i in range(2, 1000):
#     if count == n:
#         break
#     else:
#         #  check for the Prime number.
#         for j in range(2, i):
#             if i % j == 0:
#                 print("Number is not Prime")
#                 break
#         else:
#             list1.append(i)
#         count += 1

# print(list1)


# def is_prime(number):
#     #  here we need to check the number.
#     if number < 2:
#         return False

#     for i in range(2, number):
#         if number % i == 0:
#             # print("Number is not Prime")
#             return False
#     return True


# def first_n_primes(N):
#     list1 = []
#     check = 2

#     while len(list1) < N:
#         if is_prime(check):
#             list1.append(check)
#         check += 1
#     return list1


# if __name__ == "__main__":
#     N = int(input("Enter the n value "))
#     print(first_n_primes(N))


# def check_fib(element):
#     if element <= 1:
#         return element
#     else:
#         return check_fib(element - 1) + check_fib(element - 2)


# if __name__ == "__main__":
#     fib_size = 10
#     demo_list = []

#     for i in range(fib_size):
#         demo_list.append(check_fib(i))

#     print(demo_list)

# list1 = [1, 1, 2, 2, 3, 4, 5, 5, 6, 7]
# myset = set(list1)
# print(myset)
# print(len(myset))

# if __name__ == "__main__":
#     pass


# list1 = [0, 1, 0, 3, 12]

# zero = 0

# for i in range(0, len(list1)):
#     if list1[i]:
#         #  we need to swap the elements.
#         list1[i], list1[zero] = list1[zero], list1[i]
#         zero += 1

# print(list1)


# a = [5, 10, 3, 4, 5]
# b = [1, 6, 3, 6, 7]

# ans = a + b
# new_ans = sorted(list(set(ans)))

# return new_ans

# print(type(new_ans))
# print(new_ans)


# list1 = [10, 5, 2, 7, 1, -10]

# maxSum = float("-inf")
# for i in range(len(list1)):
#     sum = 0
#     for j in range(i, len(list1)):
#         sum += list1[j]
#         #  check if the maximum value occur store into the another variable.
#         if sum > maxSum:
#             maxSum = sum

# print(maxSum)

# print(float("-inf"))


# list1 = [1, 1, 0, 1, 1, 1]
# count = 0
# maxSum = float("-inf")

# for i in range(len(list1)):
#     if list1[i]:
#         count += 1
#     else:
#         maxSum = max(count, maxSum)
#         count = 0

# print(count)

# list1 = [2, 0, 2, 1, 1, 0]

# #  we need to sort that array into the 0,1,2 formation.
# one = 0
# zero = 0
# last = len(list1) - 1


# while one < last:
#     if list1[one] == 0:
#         list1[one], list1[zero] = list1[zero], list1[one]
#         one += 1
#         zero += 1

#     elif list1[one] == 1:
#         one += 1
#     else:
#         list1[one], list1[last] = list1[last], list1[one]
#         last -= 1
# print(list1)

import numpy as np

matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

#  Mention the Size for the row and the column.
# row = len(matrix)
# col = len(matrix[0])

# #  Find the transpose for the list.
# for i in range(row):
#     for j in range(i, col):
#         matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

# for i in range(len(matrix)):
#     matrix[i].reverse()

# print(matrix)

# for i in range(len(list1)):
#     list(list[i]) = list(list1[i]).reverse()

# for i in range(row):
#     for j in range(col):
