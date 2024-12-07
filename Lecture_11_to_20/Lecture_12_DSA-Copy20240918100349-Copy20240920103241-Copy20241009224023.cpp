//    Binary Search of DSA in C++..

#include <iostream>
using namespace std;

// int binarySearch(int arr[] , int size, int key){

//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;

//     while(start <= end){

//         if(arr[mid] == key){
//             return mid;
//         }
//         //  Chek into the left or right part into the array..
//         else if(key > arr[mid]){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//         return -1;
// }

// int leftOccurance(int arr[] , int size , int key){

// int start = 0;
// int end = size - 1;
// int mid = start + (end - start) / 2;

// int ans = 0;   //  to store the index of the leftmost part of that element..
// while(start <= end){

// if(arr[mid] == key){
//     ans = mid;
//     end = mid - 1;
// }
// //  Check for the right and left part of an array.
// else if(arr[mid] < key){
//     start = mid + 1;   // for left Occurance 
// //    end = mid - 1;         //  for right Occurance 
// }
// else{
//     end = mid - 1;    //for left occurance 
//     // start = mid + 1;    //for right occurance
// }
//   mid = start + (end - start) / 2;
// }
// return ans;
// }

// int rightOccurance(int arr[] , int size , int key){

// int start = 0;
// int end = size - 1;
// int mid = start + (end - start) / 2;

// int ans = 0;   //  to store the index of the leftmost part of that element..
// while(start <= end){

// if(arr[mid] == key){
//     ans = mid;
//     start = mid + 1;
// }
// //  Check for the right and left part of an array.
// else if(arr[mid] < key){
//     start = mid + 1;    //for left Occurance 
// }
// else{
//     end = mid - 1;    //for left occurance 
// }
//   mid = start + (end - start) / 2;
// }
// return ans;
// }


int pivotElement(int arr[] , int size){
int start = 0;
int end = size - 1;
int mid = start + (end - start) / 2;

while(start <= end){
    if(start == end){
        return mid;
    }else if(arr[mid] < arr[mid + 1]){
        start = mid + 1;
    }else if(arr[mid] > arr[mid + 1]){
       end = mid - 1;
    }
    mid = start + (end - start) / 2;
}
}
int main(){

// int even[7] = {2,4,6,8,10,12,14};
// int size = sizeof(even) / sizeof(even[0]);
// int key = 20;


// cout<<"The element present at index:- "<<binarySearch(even , size , key); 

int even[8] = {0,1,2,9,89,2,1,0};
int size = sizeof(even) / sizeof(even[0]);
int key = 6;

// cout<<binarySearch(even, size , key);
// cout<<"The leftmost occurance of the element are:- "<<leftOccurance(even , size , key)<<endl;
// cout<<"The RightMost occurance of the element are:- "<<rightOccurance(even , size , key)<<endl;
// cout<<"The total no. of occurance of 5 is:- "<<(rightOccurance(even , size , key) - leftOccurance(even , size , key) ) + 1;
cout<<"The index of Pivot element are:- "<<pivotElement(even , size);


}