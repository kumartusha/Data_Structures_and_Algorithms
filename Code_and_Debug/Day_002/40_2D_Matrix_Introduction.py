# Here we learn about the 2D matrix in the Data Structures and algorithms.

# matrix = [[1,2,3], [4,5,6], [7,8,9]]

# print(matrix[0][1])



# rows, cols = (5, 5)
# print([[0 for i in range(cols)] for j in range(rows)])

# rows, cols = 5,5

# array = [[0 for j in range(cols)] for i in range(rows)]

# print(array)

## Set matrix zero.

def setRowZero(row,rows_count, array):
    # we need to iterate into the row level.
    for i in range(rows_count):
        array[row][i] = -1

def setColZero(col,columns_count, array):
    # we need to iterate of the column length and then update the column.
    for j in range(columns_count):
        array[j][col] = -1

def setMatrixZero(rows_count, columns_count, array):
    for row in range(rows_count):
        for col in range(columns_count):
            if array[row][col] == 0:
                # we need to replace the same row and same column with the zero.
                # First we replace the zero in the row.
                setRowZero(row, rows_count, array)
                setColZero(col, columns_count, array)

if __name__ == "__main__":
    array = [[1,1,1],[1,1,1],[1,1,0]]

    rows = len(array)
    cols = len(array[0])

    print("Array before the zero:- ", array)
    setMatrixZero(rows, cols, array)
    
    for i in range(rows):
        for j in range(cols):
            if array[i][j] == -1:
                array[i][j] = 0

    print("Array after the zero:- ", array)


