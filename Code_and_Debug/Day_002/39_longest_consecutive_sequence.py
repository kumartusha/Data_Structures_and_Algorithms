## This is the Brute force approach for this question.

# def linear_search(array, element):
#     for i in range(len(array)):
#         if element in array:
#             return True
        
#     return False

# def consecutiveSequence(array):
#     maxCount = 0
#     # we will traverse on all the elements and find the next greater number by adding 1 and then increment the count.

#     for i in range(len(array)):
#         element = array[i] + 1
#         count = 1

#         while(linear_search(array, element)):
#             element += 1
#             count += 1
        
#         maxCount = max(count, maxCount)
    
#     return maxCount


## This is the most optimal approach for this question. *******************************************************************************************************
def consecutiveSequence(array):
    maxCount = 0
    my_set = list(set(array))

    for num in my_set:
        if num - 1 not in my_set:
            element = num
            count = 1

            while element + 1 in my_set:
                element += 1
                count += 1
            
            maxCount = max(maxCount, count)   

    return maxCount 

if __name__ == "__main__":
    array = [3,5,6,8,12,3,4,2,1,10]

    print("The maximum length of the consecutive sequence are:- ", consecutiveSequence(array))

