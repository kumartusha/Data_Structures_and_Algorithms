#  Hashmap is the one of the most important data structure in the python that will be used to store the elements in the key value format and it is most popular due to its searching time it find the element in O(1) time.
# list1 = [1, 2, 3, 4, 5]
# import pandas as pd

# dataframe = pd.DataFrame(
#     {"Name": ["Tushar", "Rakshit", "Ankit", "Shivam"], "Age": [20, 21, 22, 23]}
# )
# print(dataframe.Age.mean())


# **1. Counting Elements in a List using a Hash Map:**
# **2. Word Frequency Counter:**
# **3. Creating a Dictionary of Student Grades:**

# list1 = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4]
# hashmap = {}

# for i in list1:
#     if i in hashmap:
#         hashmap[i] += 1
#     else:
#         hashmap[i] = 1

# print(hashmap)


# text = "This is a sample text. This text contains sample words."
# hashmap = {}
# print(text.split())
# print(type(text.split()))


# for i in text.split():
#     if i in hashmap:
#         hashmap[i] += 1
#     else:
#         hashmap[i] = 1

# print(hashmap)

# string = (
#     "                                    Tushar Kumar                                "
# )

# # print(string.strip())
# print(string)


# print(float("-inf") < 0)
# print(float("inf") < 0)

# arr = [1, 2, 8]
# k = 1

# floor_index = -1
# for i, val in enumerate(arr):
#     if arr[i] <= k:
#         floor_index = i
#     else:
#         break

# print(floor_index)

# Input: x = 7 , arr[] = [5, 6, 8, 9, 6, 5, 5, 6]
# Output: 6, 8
# Explanation: Floor of 7 is 6 and ceil of 7 is 8.

# arr = [5, 6, 8, 9, 6, 5, 5, 6]
# floor_index = -1
# for i, val in enumerate(arr):
#     if arr[i] <= x:
#         floor_index = i
#     else:
#         break
# print(floor_index)


# arr = [5, 6, 8, 8, 6, 5, 5, 6]
# k = 10

# floor_floor = -1
# floor_ceil = -1
# for i, val in enumerate(arr):
#     if arr[i] <= k:
#         floor_floor = i
#     else:
#         break

# for i, val in enumerate(arr):
#     if arr[i] >= k:
#         floor_ceil = i
#         break

# print(arr[floor_ceil])
# print(arr[floor_floor])


# list1 = [1, 2, {1: "Value"}, [1, 2, 3], (4, 5, 6)]

# print(list1[4])

# demoList = [1, 2, 3]

# demoList2 = demoList
# print(demoList2)

# demoList2.extend([4, 5, 6])
# print(demoList)
# print(demoList2)

# string = "Tushar kumar is the powerful"

# demo_reverse = string.split()
# print(demo_reverse)
# demo_reverse.reverse()
# print(demo_reverse)

# print(" ".join(demo_reverse))
# print(len(" ".join(demo_reverse)))


# demo = " ".join(["John", "Peter", "Vicky"])
# print(demo)
# print(len(demo))


# string = "Oodles technology is the good place to work."
# demo_string = string.split()


string = "Tushar kumar is the powerful"

# demo_reverse = string.split()
# print(demo_reverse)
# demo_reverse.reverse()
# print(demo_reverse)

# string.split().reverse()
# print(string)

# demo_str = string.split()
# demo_str.reverse()
# print(" ".join(demo_str))


# def double_numbers(iterable):
#     for i in iterable:
#         yield i + i


# double_numbers([1, 2, 3, 4, 5])

first = 10
second = 20

# print(first + second)

# print(max(first, second))

# num = 5
# fact = 1

# while num > 0:
#     fact = fact * num
#     num = num - 1

# print(fact)

# armstrongNum = 153
# final = armstrongNum
# armLen = len(str(armstrongNum))
# ans = 0

# while armstrongNum > 0:
#     remainder = armstrongNum % 10
#     ans = ans + (remainder**armLen)
#     armstrongNum = armstrongNum // 10

# if ans == final:
#     print("The number is armstrong")
# else:
#     print("The number is not armstrong")

# number = 11

# for i in range(2, number):
#     if number % i == 0:
#         print("Number is not prime")
#         break
# else:
#     print("Number is prime")
# def fibonacci(fibo):
#     if fibo

# if __name__ == "__main__":
#     fibo = 10


# def fibonacci(fibo):
#     if fibo <= 0:
#         print("Incorrect Input")
#         return
#     if fibo == 1:
#         return 0
#     if fibo == 2:
#         return 1
#     else:
#         return fibonacci(fibo - 1) + fibonacci(fibo - 2)


# if __name__ == "__main__":
#     fibo = 3
#     print(fibonacci(fibo))

# number = 4
# ans = 0

# while number > 0:
#     ans = ans + (number**2)
#     number = number - 1

# print(ans)

list1 = ["Tushar", "Kumar", "is", "the", "good", "boy"]


# for index, val in enumerate(list1):
#     print(index, val)

# hashmap = {1: "Tushar", 2: "Kumar", 3: "Is"}
# print(hashmap)
# print(hashmap.keys())
# print(hashmap.values())
# print(hashmap.get(2))
# # print(hashmap)
# print(hashmap)
# print(hashmap)


# for key, val in hashmap.items():
#     print(key, val)

# number = 123
# palindrome = number
# ans = 0


# while number > 0:
#     remainder = number % 10
#     ans = ans * 10 + remainder
#     number = number // 10

# print(ans)


# for i in range():
#     print("Tushar")


# lambdaFunc = lambda x: "Positive" if x > 0 else "Negative" if x < 0 else "Zero"
# print(lambdaFunc(0))
# print(lambdaFunc(4))
# print(lambdaFunc(-4))


# lambdaFunc = lambda x: "Positive" if x > 0 else "Negative" if x < 0 else "Zero"

# list1 = [1, 2, 3, 4, 5]
# list1.pop(2)
# list1 = list1[:2] + list1[3:]
# del list1[2]
# print(list1)


# string = "tusharkumar"
# hashmap = {}

# for i in string:
#     if i in hashmap:
#         hashmap[i] += 1
#     else:
#         hashmap[i] = 1

# print(hashmap)


# def decorator(func):
#     def wrapper():
#         print("First")
#         func()
#         print("Last")

#     return wrapper


# @decorator
# def demo():
#     print("Middle")
# demo()

###### We will be implemented the Oops concept in python.
# 1. Inheritence.
# 2. Abstraction
# 3. Ploymorphism
# 4. Encapsulation


# class Bank:
#     def __init__(self, balance):
#         self.__balance = balance

#     def get_Balance(self):
#         return self.__balance


# obj = Bank(1000)
# # print(obj.__balance)
# print(obj.get_Balance())


# Abstraction.
# from abc import ABC, abstractmethod


# class Parent(ABC):
#     def __init__(self):
#         pass

#     @abstractmethod
#     def demo1(self):
#         pass

#     @abstractmethod
#     def demo2(self):
#         pass

#     def demo(self):
#         print("I'm the demo Class")


# class Child(Parent):
#     #  Do the Implementation of the Above Program.
#     def demo1(self):
#         print("I'm the demo1")

#     def demo2(self):
#         print("I'm the demo2")


# obj = Child()
# obj.demo1()

# Polymorphism. (Method Overriding)


# class Animal:
#     def make_sounds(self):
#         print("Some Generic Sound")


# class Dog(Animal):
#     def make_sounds(self):
#         print("Bark")


# class Cat(Animal):
#     # def make_sounds(self):
#     #     print("Meow")
#     pass


# # for i in [Dog(), Cat(), Animal()]:
# #     print(i.make_sounds())

# obj = Cat()
# obj.make_sounds()


# class Overloading:
#     def __init__(self):
#         pass

#     # def add(self, first, second):
#     #     self.first = first
#     #     self.second = second

#     # def add(self, first, second, third):
#     #     self.first = first
#     #     self.second = second
#     #     self.third = third


# obj = Overloading()
# obj.add(1, 2)
# # obj.add(1, 2, 3)


#### Difference between the Iterable, Iterator and Generator.

#  This is the example of the Iterable.
# list1 = [1, 2, 3, 4, 5]
# print(list1)

# This is example of the Iterator.
# list2 = [1, 2, 3, 4, 5]

# my_itr = iter(list2)


# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))


# list1 = [1, 2, 3, 4, 5]

# my_itr = iter(list1)

# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))


# def generator():
#     yield 1
#     yield 2
#     yield 3


# x = generator()

# print(next(x))
# print(next(x))
# print(next(x))


# list1 = [1, 2, 3, 4, 5]
# print(list1)


# list1 = [1, 2, 3, 4, 5]

# my_itr = iter(list1)

# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))
# print(next(my_itr))

# We have the Generator in Python.


# def generator():
#     print("First")
#     yield 1
#     print("Second")
#     yield 2
#     print("Third")
#     yield 3


# gen = generator()

# print(next(gen))
# print(next(gen))
# print(next(gen))
