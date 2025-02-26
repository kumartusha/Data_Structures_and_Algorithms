#  Stack Data Structure Implementation Using the List.

# class Stack:
#     def __init__(self):
#         self.items = []

#     def is_empty(self):
#         return len(self.items) == 0

#     def push(self, data):
#         self.items.append(data)

#     def pop(self):
#         if not self.is_empty():
#             return self.items.pop()
#         else:
#             raise IndexError("Stack is Empty")

#     def peek(self):
#         if not self.is_empty():
#             return self.items[-1]
#         else:
#             raise IndexError("Stack id Empty")

#     def size(self):
#         return len(self.items)


# #  Main Function.
# if __name__ == "__main__":
#     s1 = Stack()
#     s1.push(10)
#     s1.push(20)
#     s1.push(30)

#     print(s1.peek())


#  Stack Data Structure Implementation Using list Inheritence
# class Stack(list):
#     def is_empty(self):
#         return len(self) == 0

#     def push(self, data):
#         self.append(data)

#     def pop(self):
#         if not self.is_empty():
#             # self.pop()  # THis is the infinite
#             super().pop()
#         else:
#             raise IndexError("Stack is Empty")

#     def peek(self):
#         if not self.is_empty():
#             return self[-1]
#         else:
#             raise IndexError("Stack is Empty")

#     def size(self):
#         return len(self)

#     def insert(self, index, data):
#         raise AttributeError("Insert is not Valid Function")


# # Building the main Function.
# if __name__ == "__main__":
#     s1 = Stack()

#     s1.push(10)
#     s1.push(20)
#     s1.push(30)

#     print(s1.peek())
