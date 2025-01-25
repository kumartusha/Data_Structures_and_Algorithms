#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void colCheck(int rowIndex, int colIndex, int size, int &count, vector<vector<int>> matrix)
// {
//     //  here we need to check the value of the 1 in the rntire row.
//     for (int i = rowIndex; colIndex < size; ++colIndex)
//     {
//         if (matrix[rowIndex][colIndex] == 1)
//         {
//             ++count;
//             cout << rowIndex << " " << colIndex << " " << endl;
//         }
//     }
// }

// void rowCheck(int rowIndex, int colIndex, int size, int &count, vector<vector<int>> matrix)
// {
//     //  here we need to check the value of the 1 in the rntire row.
//     for (int i = colIndex; rowIndex < size; ++rowIndex)
//     {
//         if (matrix[rowIndex][colIndex] == 1)
//         {
//             ++count;
//             cout << rowIndex << " " << colIndex << " " << endl;
//         }
//         // cout << matrix[rowIndex][colIndex] << " ";
//     }
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 0, 1}, {0, 1, 1}, {0, 1, 0}, {1, 0, 0}};
//     int row = matrix.size();
//     int col = matrix[0].size();

//     // we need to find the computers that easily communicate to the other computer if it lies on a same row or column.
//     int count = 0;
//     for (int i = 0; i < row; ++i)
//     {
//         for (int j = 0; j < col; ++j)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 //  check for the entire row and the entire column.
//                 // colCheck(i, j + 1, row, count, matrix);
//                 // rowCheck(i + 1, j, col, count, matrix);
//                 // break;
//                 ++count;
//             }
//         }
//         // break;
//     }

//     cout << count;

//     // for (auto element : matrix)
//     // {
//     //     for (auto element2 : element)
//     //     {
//     //         cout << element2 << " ";
//     //     }
//     //     cout << endl;
//     // }
// }

int main()
{
    // we need to find the computers that easily communicate to the other computer if it lies on a same row or column.
    // int count = 0;
    // for (int i = 0; i < row; ++i)
    // {
    //     for (int j = 0; j < col; ++j)
    //     {
    //         if (matrix[i][j])
    //         {
    //         }
    //     }
    //     // break;
    // }

    // cout << count;

    // for (auto element : matrix)
    // {
    //     for (auto element2 : element)
    //     {
    //         cout << element2 << " ";
    //     }
    //     cout << endl;
    // }

    // vector<vector<int>> matrix = {{1, 0, 1}, {0, 1, 1}, {0, 1, 0}, {1, 0, 0}};
    // int row = matrix.size();
    // int col = matrix[0].size();

    // vector<int> rowStore(row, 0);
    // vector<int> colStore(col, 0);

    // for (int i = 0; i < row; ++i)
    // {
    //     for (int j = 0; j < col; ++j)
    //     {
    //         if (matrix[i][j])
    //         {
    //             rowStore[i]++;
    //             colStore[j]++;
    //         }
    //     }
    // }

    // int count = 0;

    // for (int i = 0; i < row; ++i)
    // {
    //     for (int j = 0; j < col; ++j)
    //     {
    //         if (matrix[i][j])
    //         {
    //             if (rowStore[i] > 1 || colStore[j] > 1)
    //             {
    //                 ++count;
    //             }
    //         }
    //     }
    // }

    // cout << count;
    // unordered_map<Node *, bool> isVisited;

    // //  we need to traverse the linked list and when we got the visited node twice then we simply says that loop is present.
    // Node *temp = head;

    // while (temp != NULL)
    // {
    //     if (isVisited[temp] == true)
    //     {
    //         //  means that if the node is visited twice times.
    //         return true;
    //     }
    //     isVisited[temp] = true;
    //     temp = temp->next;
    // }
    // return false;

    //  we have given the integr into the inout we need to find the Character string.
    int number = 5;

    for (int i = 0; i < number; ++i)
    {
        for (int j = 0; j < number; ++j)
        {
            if (i >= j)
            {
                cout << " * ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
