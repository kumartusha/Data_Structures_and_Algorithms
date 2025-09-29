# Implementing the linear search.



# def linearSearch(array, element):

#     for i in range(len(array)):
#         if array[i] == element:
#             print("Found Element")
#             break
#     else:
#         print("Not Found")

        

# if __name__ == "__main__":
#     array = [1,3,2,4,5,7,4,78,7,9,23]
#     element = 10
    
#     linearSearch(array, element)



# Merge two sorted Array using the python.   Output:- [1,2,3,4,6,7,8,9,10]

if __name__ == "__main__":
    arr1 = [1,1,1,2,4,6,7]
    arr2 = [1,2,3,6,7,8,9,10]

    # First Approach..
    # print(list(set(arr1 + arr2)))

    # Second Approach using the Two pointer approach.
    i = 0
    j = 0
    k = 0
    temp = [0] * (len(arr1) + len(arr2))

    print(temp)

    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            temp[k] = arr1[i]
            i += 1
        if arr1[i] > arr2[j]:
            temp[k] = arr2[j]
            j += 1
        
        k += 1
    
    while i < len(arr1):
        temp[k] = arr1[i]
        i += 1

    while j < len(arr2):
        temp[k] = arr2[j]
        j += 1