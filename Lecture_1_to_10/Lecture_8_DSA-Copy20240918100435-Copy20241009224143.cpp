// #include <iostream>
// #include <math.h>
// #include <cmath>
// #include <climits>
// using namespace std;

// int printArray(int arr[] , int size){
//     arr[5] = 34;
//       for(int element = 0 ; element < size ; ++element){
//         cout<<arr[element]<<" ";
//       }
//     cout<<"Printing the array";
// }

// int update(int arr[], int size){
//     arr[0] = 345;

//     for(int i = 0;i < size ; i++){
//         cout<<arr[i]<<" ";
//     };
//     cout<<endl;
// }

// int reverse(int arr[], int s, int e){
// int start = s;
// int end = e - 1;

// while(start != end){
//   swap(start,end);
//   start++;end--;
// }
//     cout<<"Hello ";
// for(int i = 0 ;i < end ; i++){
//     cout<<"Hello ";
//     cout<<arr[i]<<" ";
// }cout<<endl;

// }

// int main(){

// // int arr[12] = {1,3,2,4,3,4,5,9,3,2,9,7};

// // for(int element : arr){
// //     cout<<element <<" ";
// // }

// // int arr[10];

// // for(int i = 0; i < 10 ; ++i){
// //     cin>>arr[i];
// // }

// // for(int i = 0 ; i < 10 ; ++i){
// //     cout<<arr[i]<<" ";
// // }

// //  Arrays with function in C++..
// // int arr[10] = {9,8,7,6,5,4,3,2,1};
// // int size = 9;

// // printArray(arr , size);

// //  Find the minimum and the maximum element from an array..

// // int arr[5] = {1,2,3,4,10};

// // int max_Number = arr[0];
// // for(int i = 1;i < 5 ; i++){
// //     if(arr[i] > max_Number){
// //         max_Number = arr[i];
// //     }
// // }

// // cout<<"The maximum number are:- "<<max_Number<<endl;

// // int arr2[5] = {1,2,3,4,10};

// // int min_Number = INT_MAX;
// // for(int i = 0;i < 5 ; i++){
// //     if(arr[i] < min_Number){
// //         min_Number = arr[i];
// //     }
// // }

// // cout<<"The minimum number are:- "<<min_Number;

// //    Pass by reference concept for the array
// //   int arr[3] = {1,2,3};
// //      update(arr , 3);

// //      for(int i = 0 ; i < 3  ; i++){
// //         cout<<arr[i]<<" ";
// //      }

// //  Linear Search in the array..

// // int linearSearch[10] = {1,3,2,4,6,4,3,8,4,5};

// // int found = 3;
// // bool isTrue = false;
// // for(int i = 0 ; i < 10 ; i++){
// //     if(linearSearch[i] == found){
// //         isTrue = true;
// //         cout<<"Number is Found in the array";
// //         break;
// //     }
// // }
// // if(isTrue == 0){
// //     cout<<"Number is not Found in the array";

// // }

// //  Reverse the array..
// int arr[9] ={1,2,3,4,5,6,7,8,9};
// int size = 9;
// int start = 0;
// reverse(arr,start,size);

// for(int i = 0 ;i < size ; i++){
//     cout<<arr[i];
// }

// }

#include <iostream>
using namespace std;

void reverse(int arr[], int e){

    int start = 0;
    int end = e - 1;

    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
    }
    
}

int main()
{

    int arr[9] = {1,3,5,6,4,3,6,3,7};
    int size = 9;
    reverse(arr, size);

    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}