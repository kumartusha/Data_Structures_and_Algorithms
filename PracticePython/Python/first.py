#  From Today we are starting out DSA Journey in Python.

# a = 10
# b = 20

# print(a + b)


# name = "Tushar"
# # name[0] = "i"

# print(name)

# for i in range(1, 11):
#     print(i, end=" ")

# for i in range(1, 101, 2):
#     print(i)

# number = 1
# for i in range(1, 11):
#     # print(f'{number} * {i} = {number * i})
#     print(f"{number} * {i} = {number * i}")

# for i in range(1, 11):
#     for j in range(1, 11):
#         # print(f'{number} * {i} = {number * i})
#         print(f"{number} * {j} = {number * j}")

#     number += 1


# sum = 0

# for i in range(1, 11):
#     sum += i

# print(sum)

# sum = 0
# for i in range(10, 30, 2):
#     sum += i

# celcious = 32

# print((celcious * 9 / 5) + 32)


# farenheit = 86

# print((farenheit - 32) * 5 / 9)


# list1 = [True, True, True, True]

# print(list1.all())


# print(eval("3+4-5"))


# list1 = []
# list2 = ["Tushar", "SQL", "Hello", "Bhai", "Kaise", 2, 34, True, False]

# list2 = [10, 2, 34, 344, 23, 56, 7, 6, 90]

# print(list2[2:5])
# print(list2.count(2))

# print(list2.index(2))
# print(list2.index(True))
# list2.insert(9, "Lalit")
# print(list2)

# list2.pop(2)
# print(list2)

# list2.extend(["Bhai", "Komal"])
# print(list2)
# list2.sort(reverse=True)
# list2.sort()
# print(list2)

# list2.reverse()
# print(list2)

# list3 = list2[::-1]
# print(list3)

# demo = ["Tushar", "Kumar", "Komal"]
# a, b, c = demo
# print(a, b, c)

# demo = [1, 2, 3, 4, 5, 6, 7, 8, 9]
# temp_sum = 0
# demo_sum = [max(num for num in demo if num > 4)]
# demo_sum = [sum(num for num in demo if num > 4)]
# demo_sum = [min(num for num in demo if num > 4)]

# print(demo_sum)

# var = (1,)

# tuple1 = (1, 2, 3, 4, 5, 6)
# print(type(tuple1))

# print(sum(tuple1))
# print(min(tuple1))
# print(max(tuple1))

# tuple2 = (1, 2, 3, 4, 5)
# tuple1 = tuple((1, 2, 3, 4, 5))
# print(tuple1.__sizeof__)

# print(sum(tuple1))
# print(sum(tuple2))
# print(min(tuple1))
# print(min(tuple2))
# print(max(tuple1))
# print(max(tuple2))


# tuple1 = ("Tushar", "Komal", "Lalit", "Deepu")
# tuple1.remove("Tushar")
# print(tuple1)


# set1 = {"Tushar", "Komal", "Lalit", 2, 34, 56}
# set1 = {5, 4, 3, 2, 1}
# # print(set1)


# # set1.remove(1)
# # print(set1)

# set1.pop()
# print(set1)

# number = -45

# print(abs(number))

# demo_list = [1, 2, 3, 4, 5]

# print(3 in demo_list)
# print(3 not in demo_list)

# print(type(demo_list) is list)
# print(type(demo_list) is not list)


# dict1 = {1}
# print(type(dict1))

# dict1 = {}


# we need to create the sum programs that we will hep for the further programs.

n = 12
# count = 0
# while n > 0:
#     lastDigit = n % 10
#     print(lastDigit)
#     if n % lastDigit == 0:
#         count += 1

#     n = n // 10

# print(count)


# number = 123

# while number > 0:
#     lastDigit = number % 10
#     ans = ans +


# def reverse_num(x):
#     is_negative = False

#     if x < 0:
#         is_negative = True
#         x *= -1

#     reverse = 0

#     while x > 0:
#         reverse = (10 * reverse) + (x % 10)
#         x //= 10

#     if reverse > 2**31 - 1:
#         return 0

#     if is_negative:
#         return reverse * -1
#     return reverse


# def isPalindrome(x):
#     palin = x
#     reversed_number = reverse_num(x)

#     if palin == reversed_number:
#         print("Palindrome")
#     else:
#         print("Not Palindrome")


# isPalindrome(10)

# Python DSA
# from collections import defaultdict

# val = defaultdict(int)
# print(val)


# import sys

# L = []
# print(sys.getsizeof(L))

# number = 10
# print(abs(number))
# import sys


# L = []
# for i in range(100):
#     print(sys.getsizeof(L))
#     L.append(i)
# class MyList:
#     def __init__(self):
#         self.size = 1
#         self.n = 0
#         # we have to create the ctype array with the sie is equal to sel.siz
#         self.A = self.make_array(self.size)

#     def make_array(self.capacity):
#         #  Create a C type array(static.referential) with size capacity
#         return (capacity*ctypes.py_object)()
# ref = MyList()
