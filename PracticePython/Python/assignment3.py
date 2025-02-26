# Linked List Implement.


# list1 = [0] * 5
# print(list1)
# 1.
# class Node:
#     def __init__(self, data):
#         self.data = data
#         self.next = None
# 2.
# class Node:
#     def __init__(self, data):
#         self.data = data
#         self.next = None


# def is_empty(head):
#     if head is None:
#         return "Linked List is Empty"
#     else:
#         return "Linked List have some value"


# if __name__ == "__main__":
#     head = None
#     tail = None
#     obj = Node(10)

#     print(is_empty(head))


# class Node:
#     def __init__(self, data):
#         self.data = data
#         self.next = None


# class LinkedList:
#     def __init__(self):
#         self.head = None

#     def insert_at_start(self, data):
#         new_node = Node(data)
#         if self.head is None:
#             self.head = new_node
#             return
#         else:
#             new_node.next = self.head
#             self.head = new_node


# if __name__ == "__main__":
#     # head = None
#     # tail = None

#     # obj = Node(10)
#     obj = LinkedList()
#     obj.insert_at_start(20)
#     # obj.insert_at_end(20)


#  creating the new Singly Linked List.
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    #  Initialize the head Value into the class.
    def __init__(self):
        self.head = None
        self.tail = None

    #  Inserting on the head of the Linked List
    def insert_at_start(self, data):
        #  we need to insert at start of the list.
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            #  Here we have atleast one linked list node.
            new_node.next = self.head
            self.head = new_node

    def print_val(self):
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")

    #  Inserting of data into the end of the linked list.
    def insert_at_end(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            #  Here we have atleast one linked list node.
            self.tail.next = new_node
            self.tail = new_node

    def search(self, search):
        temp = self.head

        while temp:
            if temp.data == search:
                print("The element is found in list")
                break
            temp = temp.next

    def delete_first(self):
        if self.head is None:
            print("The Linked list is empty")
        else:
            #  delete the first node of the linked list.
            temp = self.head
            self.head = self.head.next
            temp.next = None

    def delete_last(self):
        if self.tail is None:
            print("The Linked list is empty")
        else:
            #  delete the first node of the linked list.
            temp = self.head
            self.head = self.head.next
            temp.next = None


if __name__ == "__main__":
    obj = LinkedList()

    obj.insert_at_start(10)
    obj.insert_at_start(20)
    # obj.insert_at_start(30)
    # obj.insert_at_start(40)
    # obj.insert_at_start(50)

    # obj.print_val()

    obj.insert_at_end(30)
    obj.insert_at_end(40)
    obj.insert_at_end(50)

    #  we need to search the element into the obj.
    # obj.search(20)
    obj.delete_first()
    obj.print_val()
