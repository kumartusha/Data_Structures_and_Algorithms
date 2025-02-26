#  Selection Sort Using the Python.


# # list1 = [5, 4, 3, 2, 1]
# list1 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

# for i in range(len(list1)):
#     minIndex = i
#     for j in range(i + 1, len(list1)):
#         if list1[j] < list1[minIndex]:
#             minIndex = j
#     list1[minIndex], list1[i] = list1[i], list1[minIndex]

# print(list1)

# Bubble Sort Using the Python.
# list1 = [5, 4, 3, 2, 1]
# list1 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

# for i in range(len(list1)):
#     for j in range(i + 1, len(list1)):
#         if list1[i] > list1[j]:
#             list1[i], list1[j] = list1[j], list1[i]

# print(list1)


# Insertion Sort Using the Python.
# list1 = [5, 4, 3, 2, 1]
# list1 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

# for i in range(1, len(list1)):
#     element = list1[i]
#     j = i - 1
#     while j >= 0 and element < list1[j]:
#         list1[j + 1] = list1[j]
#         j = j - 1
#     list1[j + 1] = element

# print(list1)

#  we need to implement the merge Sort Using the Python.


# def merge(list1, start, end):
#     #  Calculate the mid Value.
#     mid = start + (end - start) // 2

#     #  length of the two arrays.
#     length1 = mid - start + 1
#     length2 = end - mid

#     #  create the 2 array for the same length.
#     arr1 = [0] * length1
#     arr2 = [0] * length2

#     #  copy the values of the arrays into the new Created array.
#     insert = start

#     for i in range(length1):
#         arr1[i] = list1[insert]
#         insert += 1

#     for j in range(length2):
#         arr2[j] = list1[insert]
#         insert += 1

#     #  Here we have the two sorted array now we need to write the logic for merge two arrays.
#     insert = start
#     i = 0
#     j = 0

#     while i < length1 and j < length2:
#         if arr1[i] <= arr2[j]:
#             list1[insert] = arr1[i]
#             i += 1
#         else:
#             list1[insert] = arr2[j]
#             j += 1

#         insert += 1

#     while i < length1:
#         list1[insert] = arr1[i]
#         i += 1
#         insert += 1

#     while j < length2:
#         list1[insert] = arr2[j]
#         j += 1
#         insert += 1


# def mergeSort(list1, start, end):
#     if start >= end:
#         return

#     #  we need to calculate the mid value for the entire list.
#     mid = start + (end - start) // 2

#     mergeSort(list1, start, mid)
#     mergeSort(list1, mid + 1, end)
#     merge(list1, start, end)


# if __name__ == "__main__":
#     list1 = [5, 4, 3, 21]
#     size = len(list1) - 1

#     print(list1)

#     mergeSort(list1, 0, size)

#     print(list1)
#  we need to implement the Quick Sort Using the Python Language.


def partition_met(list1, start, end):
    #  find the pivot element;
    pivotElement = list1[start]

    #  find the right place of the pivot element
    count = 0
    for i in range(len(list1)):
        if list1[i] < pivotElement:
            count += 1

    # Swap the pivot element to the correct position element.
    pivotIndex = count + start
    list1[pivotIndex], list1[start] = list1[start], list1[pivotIndex]

    #  Apply the 2 pointer approach.


def quickSort(list1, start, end):
    if start >= end:
        return

    #  call the partition method.
    partition = partition_met(list1, start, end)


if __name__ == "__main__":
    list1 = [4, 3, 5, 1, 2, 7, 9, 10, 8, 6]
    size = len(list1)

    # call the Quick sort function.
    quickSort(list1, 0, size - 1)

    # print(list1)

# The approach for solving the Question using the Quick Sort in python.
# 1. Find the pivot elemment.
# 2. find the best place for the pivot element.
