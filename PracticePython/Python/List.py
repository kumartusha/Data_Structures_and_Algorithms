# # Creating a List with
# # the use of multiple values
# List = ["Tushar Kumar", "I", "M"]
# print("\nList containing multiple values: ")
# print(List)

# # Creating a Multi-Dimensional List
# # (By Nesting a list inside a List)
# List2 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
# print("\nMulti-Dimensional List: ")
# print(List2)

# # accessing a element from the
# # list using index number
# print("Accessing element from the list")
# print(List[0])
# print(List2[2][1])

# # accessing a element using
# # negative indexing
# print("Accessing element using negative indexing")

# # print the last element of list
# # print(List[-1:])

# # print the third last element of list
# print(List[-3])


list1 = [9, 8, 7, 6, 5, 4, 3, 2, 1]

# print(list1)
# print(list1.count(1))
# print(list1.pop())
# print(list1.remove(4))
# print(list1)
# print(list1[1:])
# print(list1[3:5])
# print(list1[3:])
# print(list1[:4])
# print(list1[:9])
# print(list1[:-1])
# print(list1[:-3])
# print(list1[:1])

# list1.reverse()
# print(list1)

# list1.sort()
# # list1.sort(reverse=True)

# print(list1)


# Creating a Tuple with
# the use of Strings
# Tuple = ("Geeks", "For")
# print("\nTuple with the use of String: ")
# print(Tuple)

# # Creating a Tuple with
# # the use of list
# list1 = [1, 2, 4, 5, 6]
# print("\nTuple using List: ")
# Tuple = tuple(list1)

# # Accessing element using indexing
# print("First element of tuple")
# print(Tuple[0])

# # Accessing element from last
# # negative indexing
# print("\nLast element of tuple")
# print(Tuple[-1])

# print("\nThird last element of tuple")
# print(Tuple[-3])


# Tuple = (8,)

# print(tuple)
# print(type(Tuple))


# Creating a Set with
# a mixed type of values
# (Having numbers and strings)
# Set = set([1, 2, "Geeks", 4, "For", 6, "Geeks"])
# print("\nSet with the use of Mixed Values")
# print(Set)

# # Accessing element using
# # for loop
# print("\nElements of set: ")
# for i in Set:
#     print(i, end=" ")
# print()

# # Checking the element
# # using in keyword
# print("Geeks" in Set)

# Creating a Set with
# a mixed type of values
# (Having numbers and strings)
# Set = set([1, 2, "Geeks", 4, "For", 6, "Geeks"])
# print("\nSet with the use of Mixed Values")
# print(Set)

# # Accessing element using
# # for loop
# print("\nElements of set: ")
# for i in Set:
#     print(i, end=" ")
# print()

# # Checking the element
# # using in keyword
# print("Geeks" in Set)


# Same as {"a", "b","c"}
# normal_set = set(["a", "b", "c"])

# print("Normal Set")

# normal_set.add(2)
# print(normal_set)
# # A frozen set
# frozen_set = frozenset(["e", "f", "g"])

# print("\nFrozen Set")
# print(frozen_set)

# Uncommenting below line would cause error as
# we are trying to add element to a frozen set
# frozen_set.add("h")


# String = "Welcome to GeeksForGeeks"
# print("Creating String: ")
# print(String)

# # Printing First character
# print("\nFirst character of String is: ")
# print(String[0])

# # Printing Last character
# print("\nLast character of String is: ")
# print(String[-1])


# str = "Tushar Kumar"
# # print(str[::-1])

# print("".join(reversed(str)))

# str1 = "             Tushar Kumar"
# print(str1.strip())

# str2 = "Tushar Kumar"

# print(str1.lower())
# print(str1.upper())

# print(str2.replace("Kumar", "Malhotra"))

# list1 = ["a", "4", "y", "u", "e"]
# list1 =
# print(",".join(list1))
#  ["q", "4", "y", "u", "e"]


# print(str2.find("K"))
# print(str2.index("K"))

# print(str2.startswith("Na"))
# print(str2.endswith("ar"))

# print(str2.count("a"))

# print(str2.capitalize())
# print(str2.title())

# print(str2.isalpha())
# print(str2.isdigit())
# print(str2.isalnum())


# dict1 = {"name": ["Tushar", "Shivam", "Rakshit", "Parul"], "age": [21, 20, 32, 23]}

# print(dict1)
# print(dict1["name"])
# print(dict1["age"])
# dict1.update({"Course": ["BCA", "MCA", "MTech", "BTech"]})


# print(dict1)
# print(dict1["Course"])
# array = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]
# print(array)


# print(array[0][3])
# print(array[::-1])
# print(array[::-1])
# print(array[0])

# import numpy as np

# np_array = np.array([[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]])

# print(np.resha|pe(np_array, (4, 4)))
# print(np_array)


#  Creating the Linked List.


#  Class for creating the Linked List.
# class LinkedList:
#     #  Here we create the constructor for creatin the node.
#     def __init__(self, data):
#         self.data = data
#         self.next = None
#         # print("Hello Constructor Calling")
#         # print(self.data)


# def insertAtTail(head, tail, data):
#     newNode = LinkedList(data)
#     # print(newNode)
#     if head == None:
#         head = newNode
#         tail = newNode
#         # print("Head and tail assign Successful")
#     else:
#         #  if we dont have the null value so we need to put the Node into the end of the Linked List.
#         tail.next = newNode
#         tail = newNode
#     return head, tail


# def printVal(head):
#     temp = head

#     while temp:
#         print(temp.data, end=" -> ")
#         temp = temp.next

#     print("Null")


# if __name__ == "__main__":
#     #  creting the Object
#     #  Declare the head and the tail pointer variable.
#     head = None
#     tail = None

#     head, tail = insertAtTail(head, tail, 10)
#     printVal(head)
#     head, tail = insertAtTail(head, tail, 20)
#     printVal(head)
#     head, tail = insertAtTail(head, tail, 30)
#     printVal(head)
#     head, tail = insertAtTail(head, tail, 40)
#     printVal(head)
#     head, tail = insertAtTail(head, tail, 50)
#     printVal(head)
#     head, tail = insertAtTail(head, tail, 60)
#     printVal(head)


# from array import *

# k = array("i", [1, 2, 3, 4, 5])
# print(k[1])

# def modify(num):
#     num = [6,7,8,9]
#     print(num)


# n = [1,2,3,4,5]
# modify(n)
# print(n)


# if __name__ == "__main__":
#     list1 = [1,2,3,4,5,6,7]
#     k = 3
#     new_list = [0] * len(list1)

#     for i,val in enumerate(list1):
#         new_list[(i + k) % len(list1)] = list1[i]

#     print(new_list)

# def rotate(nums , k):
#     new_list = [0] * len(nums)

#     for i,val in enumerate(nums):
#             new_list[(i + k) % len(nums)] = nums[i]

#     return new_list


# if __name__ == "__main__":
#     list1 = [1,2,3,4,5]
#     print(rotate(list1, 3))

# list1 = [0,1,0,3,12]

# zero = 0
# one = 1

# for i,val in enumerate(list1):


# list1 = [1,2,3,4,5]
# list2 = [1,2,3,6,7]

# mySet = set(list1)

# for i in list2:
#     mySet.add(i)

# list1.clear()
# list1 = list(mySet)

# return list1.sort()
