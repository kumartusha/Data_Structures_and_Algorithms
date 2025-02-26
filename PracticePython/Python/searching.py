#  Linear Search using the Python.


# def linearSearch(list1, size, element):
#     if element in list1:
#         return True
#     return False


# if __name__ == "__main__":
#     list1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
#     size = len(list1)

#     element = 23

#     if linearSearch(list1, size, element):
#         print("Element is Found")
#     else:
#         print("ELement not Found")


def binarySearch(list1, size, element):
    start = 0
    end = size - 1

    while start <= end:
        mid = start + (end - start) // 2

        if list1[mid] == element:
            return True
        elif list1[mid] > element:
            end = mid - 1
        else:
            start = mid + 1

    return False


#  Binary Search..
if __name__ == "__main__":
    list1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    size = len(list1)

    element = 10

    if binarySearch(list1, size, element):
        print("Element is Found")
    else:
        print("ELement not Found")
