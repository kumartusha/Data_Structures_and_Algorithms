

def spiralmatrix(array, rows, cols):

    # Initialized the boundaries for all the pointers.
    topPointer = 0
    bottomPointer = rows - 1
    leftPointer = 0
    rightPointer = cols - 1
    maxCount = rows * cols

    finalAnswer = []
    count = 0

    while(count < rows * cols):
        for i in range(topPointer, rightPointer + 1):
            finalAnswer.append(array[topPointer][i])
            count += 1
        topPointer += 1
        
        for j in range(topPointer, bottomPointer + 1):
            finalAnswer.append(array[j][bottomPointer])
            count += 1
        rightPointer -= 1

        for k in range():
            finalAnswer.append(array[][])
            count += 1

        for l in range():
            finalAnswer.append(array[][])
            count += 1
        
        return finalAnswer

if __name__ == "__main__":
    array = [[1,2,3], [4,5,6], [7,8,9]]
    rows = len(array)
    cols = len(array[0])
    
    
    print("Before Spiral", array)
    finalAnswer = spiralmatrix(array, rows, cols)
    print("After Spiral",finalAnswer)