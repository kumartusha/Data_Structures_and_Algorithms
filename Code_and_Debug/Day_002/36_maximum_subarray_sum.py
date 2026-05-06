def findSubarraySum(array):
    total = 0
    maxElement = float("-inf")

    for i in range(0,len(array),1):
        for j in range(i, len(array), 1):
            total = total + array[j]

            if total > maxElement:
                maxElement = total
        total = 0
    
    return maxElement

if __name__ == "__main__":
    array = [-2,1,-3,4,-1,2,1,-5,4]

    finalOutput = findSubarraySum(array)
    print(finalOutput)

    # print(array)