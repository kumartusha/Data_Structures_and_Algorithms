#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;

int main()
{

    //     If we have A =  [3, 5, 7, 9, 2, 6]  and m = 5.
    // Difference of array elements with m : [2, 0, 2, 4, 3, 1].
    //                             [0 , 1 , 2 , 2 , 3 ,4]
    // Array after rearrangement : [5, 6, 3, 7, 2, 9].

    // vector<int> A = {3, 5, 7, 9, 2, 6};
    // int m = 5;
    // vector<int> store;
    // int size = A.size();

    // Given an integer array arr[].Find the number of triangles that can be formed with three different array elements as lengths of three sides of the triangle.

    //     A triangle with three given sides is only possible if sum of any two sides is always greater than the third side.

    //     Examples :

    //     Input : arr[] = [ 4, 6, 3, 7 ] Output : 3 Explanation : There are three triangles possible[3, 4, 6],
    //             [ 4, 6, 7 ] and [ 3, 6, 7 ].Note that[3, 4, 7] is not a possible triangle.

    //  This is not the optimal Solution for this Question so we need to optimize it..
    // vector<int> arr = {10, 21, 22, 100, 101, 200, 300};
    // vector<int> arr = {7, 9,  10, 15, 22, 33, 34, 42, 47};

    // sort(arr.begin(), arr.end());
    // int count = 0;

    // int size = arr.size();

    // for (int i = 0; i < size; ++i)
    // {
    //     int element = arr[i];
    //     for (int j = i + 1; j < size; ++j)
    //     {
    //         int sum = element + arr[j];
    //         for (int k = j + 1; k < size; ++k)
    //         {
    //             if (sum > arr[k])
    //             {
    //                 ++count;
    //             }
    //         }
    //     }
    // }

    // cout << count;

    vector<int> arr = {9, 22, 15, 33, 34, 47, 7, 42, 10};
    // // vector<int> arr = {7, 9, 10, 15, 22, 33, 34, 42, 47};

    // sort(arr.begin(), arr.end());
    // int count = 0;

    // int size = arr.size();

    // for (int i = 0; i < size; ++i)
    // {
    //     int element = arr[i];
    //     for (int j = i + 1, k = j + 1; k < size;)
    //     {
    //         if (element + arr[j] > arr[k++])
    //         {
    //             ++count;
    //         }
    //     }
    // }

    // cout << count;
    sort(arr.begin(), arr.end());
    int size = arr.size();
    int count = 0;

    for (int c = size - 1; c >= 0; c--)
    {
        int b = c - 1;
        int a = 0;

        while (a < b)
        {
            if (arr[a] + arr[b] > arr[c])
            {
                count += (b - a);
                b--;
            }
            else
            {
                ++a;
            }
        }
    }
    cout << count;
}