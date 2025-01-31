#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void merge(vector<int> &arr, int start, int end)
// {
//     // we need to break the array into the two parts and then we need to concaternate the array.
//     int mid = start + (end - start) / 2;

//     int length1 = mid - start + 1;
//     int length2 = end - mid;

//     //  we need to create the array.
//     int *arr1 = new int[length1];
//     int *arr2 = new int[length2];

//     //  now we need to copy the array into the splitted array.
//     int support = start;
//     for (int i = 0; i < length1; ++i)
//     {
//         arr1[i] = arr[support++];
//     }
//     for (int j = 0; j < length2; ++j)
//     {
//         arr2[j] = arr[support++];
//     }
//     //  here we have the two merged array now we need to merged into the single array.

//     int i = 0;
//     int j = 0;
//     support = start;

//     while (i < length1 && j < length2)
//     {
//         if (arr1[i] <= arr2[j])
//         {
//             arr[support++] = arr1[i++];
//         }
//         else
//         {
//             arr[support++] = arr2[j++];
//         }
//     }
//     while (i < length1)
//     {
//         arr[support++] = arr1[i++];
//     }
//     while (j < length2)
//     {
//         arr[support++] = arr2[j++];
//     }
// }

// void mergeSort(vector<int> &arr, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     //  we need to break the array into the two part for which we need to calculate the middle value.
//     int mid = start + (end - start) / 2;

//     mergeSort(arr, start, mid);
//     mergeSort(arr, mid + 1, end);
//     merge(arr, start, end);
// }

int main()
{
    //  Sorting algorithms.
    // vector<int> arr = {1, 100, 34, 67, 3, 2, 34, 454, 345, 67, 8, 87, 66, 54, 3, 456};
    // // int size = sizeof(arr) / sizeof(arr[0]);
    // int size = arr.size();

    // cout << "Before the sorting.";

    // for (int i = 0; i < size; ++i)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // // cout << size;
    // //  here we need to perform the merge Sort algorithms.
    // mergeSort(arr, 0, size - 1);

    // cout << "After the sorting.";

    // for (int i = 0; i < size; ++i)
    // {
    //     cout << arr[i] << " ";
    // }

    //  Print the pattern.
    // int row = 4;
    // int col = 7;

    // for (int i = 0; i < row; ++i)
    // {
    //     for (int j = 0; j < col; ++j)
    //     {
    //         if (i >= j)
    //         {
    //             cout << " * ";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //  we need to implement the bubble sort algorithms.

    // int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int size = sizeof(array) / sizeof(array[0]);

    // for (int i = 0; i < size; ++i)
    // {
    //     for (int j = i + 1; j < size; ++j)
    //     {
    //         if (array[i] > array[j])
    //         {
    //             swap(array[i], array[j]);
    //         }
    //     }
    // }

    // for (auto element : array)
    // {
    //     cout << element << " ";
    // }

    //  selection sort in the DSA.

    // int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int size = sizeof(array) / sizeof(array[0]);

    // for (int i = 0; i < size; ++i)
    // {
    //     int minIndex = i;
    //     for (int j = i + 1; j < size; ++j)
    //     {
    //         if (array[j] < array[minIndex])
    //         {
    //             minIndex = j;
    //         }
    //     }
    //     swap(array[i], array[minIndex]);
    // }

    // for (auto element : array)
    // {
    //     cout << element << " ";
    // }

    //  Insertion sort in the DSA..
    // int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int size = sizeof(array) / sizeof(array[0]);

    // for (int i = 1; i < size; ++i)
    // {
    //     int temp = array[i];
    //     int j = i - 1;

    //     while (j >= 0 && array[j] > temp)
    //     {
    //         array[j + 1] = array[j];
    //         j = j - 1;
    //     }
    //     array[j + 1] = temp;
    // }

    // for (auto element : array)
    // {
    //     cout << element << " ";
    // }
}