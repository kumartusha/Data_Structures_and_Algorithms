# class Person:
#     def __init__(self, name, age):
#         self.age = age
#         self.name = name

#     def show(self):
#         print(self.name)
#         print(self.age)


# obj = Person("Tushar", 20)
# obj.show()

# import math


# class Circle:
#     def __init__(self, radius):
#         self.__radius = radius

#     def getRadius(self):
#         return self.__radius

#     def setRadius(self, new_radius):
#         self.__radius = new_radius

#     def getArea(self):
#         return math.pi * self.__radius * self.__radius

#     def getCircumference(self):
#         return 2 * math.pi * self.__radius


# obj = Circle(5)
# # print(obj._Circle__radius)
# print(obj.getArea())
# print(obj.getCircumference())
# print(obj.getRadius())


# class Rectangle:
#     def __init__(self, length, breadth):
#         self.length = length
#         self.breadth = breadth

#     def setDimension(self, dimention):
#         pass

#     def showDimension(self, dimention):
#         pass

#     def getArea(self):
#         return self.length * self.breadth


# obj = Rectangle(24, 72)


# class Book:
#     def __init__(self, bookid, title, price):
#         self.bookid = bookid
#         self.title = title
#         self.price = price

#     def show(self):
#         print(self.bookid)
#         print(self.price)
#         print(self.title)


# obj = Book(24, "The Grandfather", 345)
# obj.show()


# class Team:
#     def __init__(self, names):
#         self.names = names

#     def input_name(self):
#         name = input("Enter your name:- ")
#         print(name)

#     def print(self):
#         print(self.names)


# obj = Team(["Tushar", "Komal", "Parul", "Ankit"])
# obj.input_name()
