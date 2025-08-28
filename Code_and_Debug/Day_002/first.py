# def factorial(num):
#     if num == 0 or num == 1:
#         return 1
    
#     return num * factorial(num - 1)

# if __name__ == "__main__":
#     num = eval(input("Enter the number"))
#     print("The Factorial are:-", factorial(num))

# # This code calculates the factorial of a given number using recursion.

## Reverse an array using the recursion


# def reverse(array, start, end):
#     if start == end:
#         return
    
#     # else we need to swap the elements of first and last.
#     array[start],array[end] = array[end],array[start]

#     reverse(array, start + 1, end - 1)


# if __name__ == "__main__":
#     array = [5,1,2,4,3]
#     start = 0
#     end = len(array) - 1
#     reverse(array, start, end)

#     print(array)

# def isPalindrome(myStr, start, end):
#     if start >= end:
#         return True
    
#     # check if the last and the first character is same or not.
#     if myStr[start] != myStr[end]:
#         return False
    
#     return isPalindrome(myStr, start + 1, end - 1)
#     #  we need to 


# if __name__ == "__main__":
#     myStr = "madam"

#     #  we need to tell this is a palindrome string or not ??
#     if isPalindrome(myStr, 0, len(myStr) - 1):
#         print("The string is palindrome")
#     else:
#         print("Not the palindrome")



# if __name__ == "__main__":
#     myStr = "nitin"
#     start = 0
#     end = len(myStr) - 1

#     for i in myStr:
#         if myStr[start] != myStr[end]:
#             print("The string is not palindrome")
#             break
#         start += 1
#         end -= 1
#     else:
#         print("The string is palindrome")
# def isFibonacci(user):
#     if user < 1:
#         print("Enter number greater than or equal to 1")
#     if user == 1:
#         return 0 
#     if user <= 3:
#         return 1
    
#     return isFibonacci(user - 1) + isFibonacci(user- 2)


# #  find the fibonacci number using the recursion.
# if __name__ == "__main__":
#     user = int(input("Enter the number of fibonacci"))

#     print(isFibonacci(user))


#.  Sorting starts from Here.

# we will be discussed about the Bubble Sorting.

# def bubbleSort(array):
#     for first in range(len(array)):
#         for second in range(len(array) - first):
#             if array[second] > array[second + 1]:
#                 array[second],array[second+1] = array[second+1],array[second] 
# if __name__ == "__main__":
#     # here we will be implemented the bubble sort.
#     array = [5,4,3,2,1]

#     bubbleSort(array)

#     print(array)

# def selectionSort(array):
#     for i in range(len(array)):
#         minIndex = i
#         for j in range(i+1, len(array)):
#             if array[minIndex] > array[j]:
#                 minIndex = j
#         # swap the elements.
#         array[minIndex], array[i] = array[i],array[minIndex]

# if __name__ == "__main__":
#     array = [5,4,3,2,1]
#     selectionSort(array)

#     print(array)

# will implemented the insertion sort using the Python.
# def insertionSort(array):
    #  Here the code of the insertion sort.


# if __name__ == "__main__":
#     array = [5,4,3,2,1]

#     insertionSort(array)

# def selectionSort(array):
#     for i in range(len(array)):
#         minIndex = i
#         for j in range(i + 1, len(array)):
#             if array[j] > array[minIndex]:
#                 minIndex = j
#         # Swap the elements.
#         array[i], array[minIndex] = array[minIndex], array[i]


# if __name__ == "__main__":
#     array = [7,5,6,8,4,7,5,6,4,3,7,5,6,9]

#     print("Before Sorting:- ", array)

#     selectionSort(array)

#     print("After Sorting:- ", array)

# def bubbleSort(array):
#     for i in range(len(array)):
#         for j in range(len(array) - i):
#             if array[j] > array[j + 1]:
#                 array[j], array[j+1] = array[j+1], array[j]

# def bubbleSort(array):

#     for first in range(len(array)):
#         for second in range((len(array) -1) - first):
#             if array[second] > array[second + 1]:
#                 array[second], array[second + 1] = array[second + 1], array[second]

# if __name__ == "__main__":
#     array = [9,1,4,8,5,6,2,8,10,3,33]

#     print("Before Sorting:- ", array)

#     bubbleSort(array)

#     print("After Sorting:- ", array)

# def insertionSort(array):
#     for i in range(1, len(array)):
#         currentElement = array[i]
#         j = i - 1
#         while(j >= 0 and currentElement < array[j]):
#             array[j + 1] = array[j]
#             j = j - 1

#         array[j + 1] = currentElement

# def merge(array, start, end):
     # Here we need to implement the merge function that will be merge the two sub recursive arrays.


def mergeSort(array, start, end):
     if start >= end:
          return
     
     # find the mid and call the merge sort for the left right nd then merge Function.

     mid = start + (end - start) / 2

     mergeSort(array, start, mid)
     mergeSort(array, mid + 1, end)
    #  merge(array, start, end)

if __name__ == "__main__":
    array = [6,5,4,3,2,1]

    print("Before Sorting:- ", array)

    mergeSort(array, 0, len(array) - 1)

    print("After Sorting:- ", array)