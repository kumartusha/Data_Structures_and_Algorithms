# [[1,2,3],[4,5,6],[7,8,9]]



def rotateMatrix(rows, cols, array, array2):
    for i in range(rows):
        for j in range(cols):
            array2[j][i] = array[i][j]
    
    return array2


if __name__ == "__main__":
    array = [[1,2,3],[4,5,6],[7,8,9]]
    rows = len(array)
    cols = len(array[0])
    # array2 = [[0] * rows] * cols
    array2 = [[0 for _ in range(rows)] for _ in range(cols)]
    
    print("Before the rotate:- ", array)
    array2 = rotateMatrix(rows, cols, array, array2)
    print("After the Rotation:- ", array2)

# def transpose(mat):
#     rows = len(mat)             
#     cols = len(mat[0])         

#     # Create a result matrix of size
#     # cols x rows for the transpose
#     tMat = [[0 for _ in range(rows)] for _ in range(cols)]

#     # Fill the transposed matrix by
#     # swapping rows with columns
#     for i in range(rows):
#         for j in range(cols):
            
#             # Assign transposed value
#             tMat[j][i] = mat[i][j]

#     return tMat

# if __name__ == "__main__":
#     mat = [[1, 1, 1, 1],[2, 2, 2, 2],[3, 3, 3, 3], [4, 4, 4, 4]]

#     res = transpose(mat)

#     for row in res:
#         for elem in row:
#             print(elem, end=' ')
#         print()