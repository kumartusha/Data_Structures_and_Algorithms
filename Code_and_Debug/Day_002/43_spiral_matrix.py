

def spiralmatrix(array, rows, cols):
    # Initialized the boundaries for all the pointers
    count = 0
    startingRow = 0
    startingCol = 0
    endingRow = rows - 1
    endingCol = cols - 1

    # will iterate the loop over the matrix to get the expected output.
    while(count < rows * cols):
        # First we need to print the top row.
        for i in range(startingCol, endingCol + 1):
            print(array[startingRow][i], end=" ")
            # increase the count for the every iteration.
            count += 1
        startingRow += 1

        # Print the elements of the right columns.
        for j in range(startingRow, endingRow + 1):
            print(array[j][endingCol], end=" ")
            # increase the count for the every iteration.
            count += 1
        endingCol -= 1

        # Print the elements of the bottom rows.
        for k in range(endingCol, startingCol - 1, -1):
            print(array[endingRow][k], end=" ")
            # increase the count for the every iteration.
            count += 1
        endingRow -= 1
        
        # Print the elements of the left column.
        for l in range(endingRow, startingRow - 1, -1):
            print(array[l][startingCol], end=" ")
            # increase the count for the every iteration.
            count += 1
        startingCol += 1

    
    return array

if __name__ == "__main__":
    array = [[1,2,3,4,5], [6,7,8,9,10], [11,12,13,14,15], [16,17,18,19,20], [21,22,23,24,25]]
    rows = len(array)
    cols = len(array[0])
    
    
    print("Before Spiral", array)
    finalAnswer = spiralmatrix(array, rows, cols)
    # print("After Spiral",finalAnswer)