#include <bits/stdc++.h>
using namespace std;

// bool isSorted(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i + 1]  < arr[i])
//         {
//             cout<<arr[i] <<" "<< arr[i + 1]<<endl;
//             return 0;
//         }
//     }
//     return 1;
// }

// bool linearSearch(int arr[], int size, int key){

// for(int i = 0; i < size ; i++){
//     if(arr[i] == key){
//         return 1;
//     }
// }
// return 0;

// }

// bool binarySearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == key)
//             return 1;

//         if (arr[mid] < key)
//         start = mid + 1;
//         else{
//             end = mid - 1;
//         }
//     }
//     return 0;
// }

// bool isArraySorted(int arr[], int size)
// {

//     if (size == 1 || size == 0)
//         return true;
//     if (arr[0] > arr[1])
//         return false;
//     else
//     {
//         return isArraySorted(arr + 1, size - 1);
//     }
// }

// int getSum(int arr[], int size){
// int sum = 0;

// // Base Case
// if(size == 0){
//     return 0;
// }
// if(size == 1){
//     return arr[size - 1];
// }else{
//     int sum = arr[0] + getSum(arr + 1, size - 1);
//     return sum;
// }
// }

// bool isLinearSearch(int arr[], int size, int key){
//   ITERATIVE APPROACH USING C++
// for(int i = 0 ;i < size ; i++){
//     if(arr[i] == key)
//     return 1;
// }
// return false;

// RECURSIVE APPROACH USING C++
//     if(size == 0)
//     return 0;

//     if(arr[0] == key){
//         return 1;
//     }else{
//         return  isLinearSearch(arr + 1, size - 1, key);
//     }
// }

// bool isBinarySearch(int arr[], int start, int end, int key)
// {
//     int mid = start + (end - start) / 2;

//     if (start > end)
//         return 0;
//     if (arr[mid] == key)
//         return 1;
//     if (arr[mid] > key)
//     {
//         isBinarySearch(arr, start, mid - 1, key);
//     }
//     else
//     {
//         isBinarySearch(arr, mid + 1, end, key);
//     }
// }

int main()
{

    // Question:- 1 Check array is sorted or not..
    // int arr[10] = {3, 4, 1, 9, 10, 7, 6, 5, 8, 2};
    // int arr[5] = {1,2,3,42,3};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // if (isSorted(arr, size))
    // {
    //     cout << "The array is sorted";
    // }
    // else
    // {
    //     cout << "The array is not sorted";
    // }

    // Question:- 2 Linear Search Using C++.
    //  int arr[10] = {1,6,4,8,3,5,2,7,9,10};
    //  int size = sizeof(arr) / sizeof(arr[0]);
    //  int key = 16;

    //  if(linearSearch(arr,size,key)){
    //     cout<<"Found the element";
    //  }else{
    //     cout<<"Not Found the element";
    //  }

    // Question:- 3 Binary Search using the C++.
    // int arr[10] = {2, 4, 5, 6, 7, 8, 9, 12, 13, 45};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int key = 46;
    // if(binarySearch(arr, size, key)){
    //     cout<<"The element are found";
    // }else{
    //     cout<<"The element are not found";
    // }

    // Question:- 4 Calculate the sum of array Recursive Iterative
    // int arr[10] = {34,3,2,33,22,31,54,32,65,76};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // cout<<"The sum of the array element are:- "<<getSum(arr, size);

    //    Using the Recursion.

    // 1.Calculate the array is sorted or not.

    // int arr[5] = {1, 2, 23, 25, 34};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // if (isArraySorted(arr, size))
    // {
    //     cout << "The array is Sorted";
    // }
    // else
    // {
    //     cout << "The array is not sorted";
    // }

    // 2. Implement the Linear Search Using C++.
    //  int arr[10] = {1,2,3,4,5};
    //  int size = sizeof(arr) / sizeof(arr[0]);
    //  int key = 100;

    //  if(isLinearSearch(arr,size,key)){
    //     cout<<"Element are found";
    //  }else{
    //     cout<<"Element are not found";
    //  }

    // 3. Implement the Binary Search using the C++.

    // int arr[10] = {5, 6, 9, 11, 12, 13, 14, 20};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int key = 12;

    // if (isBinarySearch(arr, 0, size - 1, key))
    // {
    //     cout << "Number is found";
    // }
    // else
    // {
    //     cout << "Number not found";
    // }



}