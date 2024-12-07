#include <bits/stdc++.h>
using namespace std;

// bool isPowerOfTwo(int n) {
//         int ans = 1;
//         if (n == 1)
//             return true;
//         for (int i = 0; i < 31; i++) {
//             // if (ans < INT_MAX / 2)
//             //     ans = ans * 2;
//             ans = ans * 2;
//             if (ans == n) {
//                return true;
//             }
//         }
//         return false;
//     }

// int main()
// {
//  if(isPowerOfTwo(16)){
//     cout<<"The divisible by 2";
//  }else{
//     cout<<"Not Divisible by 2";
//  }

//     int number1 = 1;
// int number2 = 1;
// switch (number1)
// {
// case 1:
//      cout<<"I am the first Case";
//     switch(number2){
//        case 1:   cout<<"I am nested first case";
//            break;
//            case 2:  cout<<"I am nested second case";
//            break;
//     }
// case 2:
//     cout << "I am second";
//     break;
// case 3:
//     cout << "I am the case three";
//     break;

// default:
//     "I am the default case";
// }

// int a[100] = {0};

// for(auto element: arr){
//     cout<<element<<" ";
// }

// int arr[100]  = {0};

// fill(arr, arr + 109, -1);

// for(auto element: arr){
//     cout<<element<<" ";
// }

// vector<int> nums1 = {85, 25, 1, 32, 54, 6};
// vector<int> arr2 = {85, 2};
//  int i, j;
// set<int> s(arr1.begin(), arr1.end());
// vector<int> out;
// for (int x : arr2){
//     if (set.erase(x))
//     cout<<x<<" ";
//         out.push_back(x);
// }
// vector<int> result;

// set<int> s(arr1.begin(), arr1.end());

// for(int i = 0; i < arr1.size() ; i++){
//           if()
// }
// sort(arr1.begin(), arr1.end());
// sort(arr2.begin(), arr2.end());
//    set<int> s1;
//   for(int i = 0; i < arr1.size() ; i++){
//      s1.insert(arr1[i]);
//   }
//   cout<<endl;
//   for(int i = 0; i < arr2.size() ; i++){
//      s1.insert(arr2[i]);
//   }
//   cout<<s1.size();

//  vector<int> nums = {1,2,3,4};

//  for(int i = 0 ; i < nums.size() ; i++){
//    ans[i] = nums[i];
//    ans[i + nums.size()] = nums[i];
//  }
// //  for(int i = 0 ; i < nums.size() ; i++){
// //    ans[i + nums.size()] = nums[i];
// //  }

// int n = nums.size();
//   for(int i = 0; i < n ; i++){
//    nums.push_back(nums[i]);
//   }

//      int a[5]= {0,1,2,2,0};
//      int zeroPos = 0, current = 0, endPos = 4;

//      while(current <= endPos){
//            if(a[current] == 0){
//             swap(a[current], a[zeroPos]);
//             ++zeroPos,++current;
//            }
//          else if(a[current] == 1){
//             ++current;
//          }
//          else if(a[current] == 2){
//             swap(a[current], a[endPos]);
//             --endPos;
//          }
//      }

// for(auto element: a){
//    cout<<element<<" ";
// }
// cout<<nums.size();

// pair<int, int> p(3,23);

// cout<<p.first<<" "<<p.second;

// int arr[] = {1, 2, 3, 4, 5};
// int sum = 5;
// vector<vector<int>> pair;

// for(int i = 0 ; i < 5; ++i){
//    for(int j = i + 1; j < 5 ; ++j){
//       if(arr[i] + arr[j] == sum){
//          vector<int> temp;
//          temp.push_back(min(arr[i] , arr[j]));
//          temp.push_back(max(arr[i] , arr[j]));
//          pair.push_back(temp);
//       }
//    }
// }

// vector<int> first = {2,1};
// vector<int> second = {4,3};

// vector<vector<int>> main;

// sort(first.begin(), first.end());

// main.push_back(first);
// main.push_back(second);

// sort(main.begin(), main.end());

// for(int i = 0 ; i < 2 ; i++){
//    for(int j = 0 ; j < 2 ; j++){
//       cout<<main[i][j]<<" ";
//    }
//    cout<<endl;
// }

// }

// int binarySearch(int arr[], int size, int key)
// {
//    int start = 0;
//    int end = size - 1;

//    while (start <= end)
//    {
//       int mid = start + (end - start) / 2;
//       if (arr[mid] == key)
//       {
//          return mid;
//       }
//       else if (arr[mid] > key)
//       {
//          end = mid - 1;
//       }
//       else
//       {
//          start = mid + 1;
//       }
//    }
//    return -1;
// }

// int main()
// {
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int key = 112;
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int result = binarySearch(arr, size, key);
//    cout << result;
// }

// int binarySearch(int arr[], int size, int key)
// {
//    int start = 0;
//    int end = size - 1;
//    int ans = -1;

//    while (start <= end)
//    {
//       int mid = start + (end - start) / 2;

//       if(arr[mid] == key){
//          // end = mid - 1;
//          start = mid + 1;
//          ans = mid;
//       }else if(arr[mid] < key){
//          start = mid + 1;
//       }else{
//          end = mid - 1;
//       }
//    }
//    return ans;
// }

// int main()
// {
//    int arr[10] = {1, 2, 3, 3, 3, 3, 7, 8, 9, 10};
//    int key = 3;
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int result = binarySearch(arr, size, key);
//    cout << result;
// }

// int squareRoot(int number)
// {
//    int start = 0;
//    int end = number;
//    int ans = 0;

//    while (start <= end)
//    {
//       int mid = start + (end - start) / 2;

//       if (mid * mid == number)
//       {
//          return mid;
//       }
//       else if (mid * mid > number)
//       {
//          end = mid - 1;
//       }
//       else
//       {
//          ans = mid;
//          start = mid + 1;
//       }
//    }

//    return ans;
// }

// int main()
// {
//    int number = 625;
//    cout<<"The square root of number are:- "<<squareRoot(number);
// }

// int main()
// {

//    int nums1[] = {1,2,3,0,0,0};
//    int nums2[] = {2,5,6};
//    int m = sizeof(nums1) / sizeof(nums1[0]);
//    int n = sizeof(nums2) / sizeof(nums2[0]);

//    vector<int> ans;
//    int i = 0, j = 0;
//    while (i < m && j < n)
//    {
//       if (nums1[i] == nums2[j])
//       {
//          if (nums1[i] != 0 && nums)
//          {
//             ans.push_back(nums1[i]);
//             ans.push_back(nums2[j]);
//          }
//          ++i, ++j;
//       }
//       else if (nums1[i] < nums2[j])
//       {
//          //   ans.push_back(nums1[i]);
//          if (nums1[i] != 0)
//          {
//             ans.push_back(nums1[i]);
//          }
//          ++i;
//       }
//       else
//       {
//          // ans.push_back(nums2[j]);
//          if (nums1[j] != 0)
//          {
//             ans.push_back(nums2[j]);
//          }
//          ++j;
//       }
//       // cout<<"Hello"<<endl;
//    }
//    // cout << i << " " << j << endl;
//    while (i < n)
//    {
//       ans.push_back(nums1[i]);
//       ++i;
//    }
//    while (j < m)
//    {
//       ans.push_back(nums2[j]);
//       ++j;
//    }

//    for (auto element : ans)
//    {
//       cout << element << " ";
//    }
// }

// int rotateArray(int *arr, int size, int k){

//     for(int i = 0 ;i < size ; ++i){
//       swap(arr[(i + k) % size], arr[i]);
//     }

// }

// int main(){
//    // Rotate an array using the C++.
//    int arr[] = {1,7,9,11};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int k = 2;

//    rotateArray(arr, size, k);

//    for(auto element: arr){
//       cout<<element<<" ";
//    }
// }

// int factorial(int number){

// if(number == 0 || number == 1){
//    return 1;
// }
// else{
//    return number * factorial(number - 1);
// }

// }

// int main()
// {
//  Recursion of the day.
// what is recursion:- So basically recursion is a mechanism in the programming language which means any function or method call itself directly or indirectly is called recursion.

//    int number = 6;
//   cout<<"The factorial of 5 are:- "<< factorial(number);

// int arr[] = {1,2,3,4,5};

// int number = max({});
// cout<<"The smallest number is:- "<<number;

// int array[] = {1};
// int array2[] = {2,3,4};

// int n = sizeof(array) / sizeof(array[0]);
// int m = sizeof(array2) / sizeof(array2[0]);

// int i = 0, j = 0;
// set<int> s;
// for(int i = 0 ; i < n; i++){
//    s.insert(array[i]);
// }

// for(int i = 0 ; i < m; i++){
//    s.insert(array2[i]);
// }
// for(auto element: s){
//    cout<<element<<" ";
// }

// int array[] = {4,9,5};
// int array2[] = {9,4,9,8,4};

// int n = sizeof(array) / sizeof(array[0]);
// int m = sizeof(array2) / sizeof(array2[0]);

//  For sorted array..
// int i = 0, j = 0;
// vector<int> ans;
// while (i < n && j < m)
// {
//    if (array[i] < array2[j])
//    {
//       ++i;
//    }
//    else if (array[i] == array2[j])
//    {
//       ans.push_back(array[i]);
//       ++i, ++j;
//    }
//    else
//    {
//       ++j;
//    }
// }

// int arr[] = {1,3,4};
// int arr2[] = {5, 6, 7, 8};
// int n = sizeof(arr) / sizeof(arr[0]);
// int m = sizeof(arr2) / sizeof(arr2[0]);

// // set<int> s;

// // for (int i = 0; i < n; ++i)
// // {
// //    s.insert(arr[i]);
// // }
// // for (int i = 0; i < m; ++i)
// // {
// //    s.insert(arr2[i]);
// // }

// // for(auto element: s){
// //    cout<<element<<" ";
// // }
// set<int> ans;
// int i = 0, j = 0;
// while (i < n && j < m)
// {
//    if (arr[i] < arr2[j])
//    {
//       ans.insert(arr[i++]);
//    }
//    else if (arr[i] == arr2[j])
//    {
//       ans.insert(arr[i]);
//       ++i;
//       ++j;
//    }
//    else
//    {
//       ans.insert(arr2[j++]);
//    }
// }
// while (i < n)
// {
//  ans.insert(arr[i++]);
// }
// while(j < m){
//    ans.insert(arr2[j++]);
// }

// for(auto element: ans){
//    cout<<element<<" ";
// }

// }

//  ************************************************************* RECURSION SERIES FROM HERE ****************************************************************

// int factorial(int number){

// if(number == 1 || number ==0){
//    return 1;
// }
// else{
//    return number * factorial(number- 1);
// }

// }

// int fibonacci(int number){
//    if(number == 0)
//    return 0;
//    if(number == 1)
//    return 1;

//    return fibonacci(number - 2) + fibonacci(number - 1);
// }

// int fibSum(int number){

// if(number == 0){
//    return number;
// }
// int ans = number % 10;

// fibSum(number / 10);
// cout<<ans<<" ";
// }

// int fibSum(int number){
// int ans = 0;

// if(number == 0){
//    return number;
// }

// ans = number % 10;

// return ans + fibSum(number / 10);
// }

// int main(){

//  Factorial program using the recursion
// int number = 2;
// cout<<"The factorial of number are:- "<<factorial(number);

//  Fibonacci program using the recursion.
// int number = 3;
// cout<<"The fibonacci term at 10th index are:- "<<fibonacci(number);

//  Printing the value using the recursion.
// int number = 412;
// fibSum(number);
// cout<<"The sum of number using the recursion are:- "<<fibSum(number);

//  Find the sum and multiply of any number.
// int number = 412;
// cout<<"The sum ofthe number are:- "<<fibSum(number);

// }

// string sayDigit(int number){

// string arr[] = {"zero", "one" ," two", "three", "four", "five", "six" ," seven", "eight", "nine"};

// if(number == 0)
// return arr[number];

// int remainder = number % 10;

// sayDigit(number / 10);

// cout<<arr[remainder]<<" ";

// }

// int main(){

// int number = 412;
// sayDigit(number);

// }

// bool isSorted(int *arr, int size){
//    int i = 0;
//    if(size == 1 || size == 0){
//       return true;
//    }

//    if(arr[i] > arr[i + 1]){
//       return false;
//    }
//    else{
//       return isSorted(arr + 1, size - 1);
//    }

// }

// int main(){

// int arr[] = {2,3,4,1,7,9};
// int size = sizeof(arr) / sizeof(arr[0]);

// if(isSorted(arr, size)){
//    cout<<"The array is sorted";
// }else{
//    cout<<"The array is not sorted";
// }
// }

// int isSum(int *arr, int size){
//   int ans = 0;
//   if(size == 1){
//    return arr[size - 1];
//   }

//   return arr[0] + isSum(arr + 1, size -1);
// }

// int main(){
//    int arr[] = {50,33,223,544,333};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    cout<<"The sum of array are:- "<<isSum(arr, size);
// }

// bool isSearch(int *arr, int size, int key){

// if(size == 0){
//    return false;
// }

// if(arr[0] == key){
//    return true;
// }
// else{
//   return isSearch(arr + 1, size - 1, key);
// }

// }

// int main(){
//    int arr[] = {4,5,7,34,23,4,12,35,67};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int key = 66;
//    if(isSearch(arr, size, key)){
//       cout<<"The element found in the array";
//    }else{
//       cout<<"The element not found in the array";
//    }
// }

// bool isBinarySearch(int *arr, int start, int end, int key)
// {
//    //  a Condition
//    if (start > end)
//    {
//       return false;
//    }
//    int mid = start + (end - start) / 2;

//    if (arr[mid] == key)
//    {
//       return true;
//    }

//    if (arr[mid] < key)
//    {
//      return isBinarySearch(arr, mid + 1, end, key);
//    }
//    else
//    {
//      return isBinarySearch(arr, 0, mid - 1, key);
//    }
// }

// int main()
// {
//    int arr[] = {2, 3, 5, 9, 10, 12, 15};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int key = 7;


//    if (isBinarySearch(arr, 0, size - 1, key))
//    {
//       cout << "The element found in the array";
//    }
//    else
//    {
//       cout << "The element not found in the array";
//    }
// }

// string isReverse(string &str,int start,int end){

// if(start > end){
//    return str;
// }

// swap(str[start++] , str[end--]);

// return isReverse(str, start, end);

// }

// int main(){

// string str = "mummy";
// cout<<"The reverse string are:- "<<isReverse(str,0, str.size() - 1);

// }

int exponentiation(int a, int b){
if(b == 0){
  return 1;
}
if(b == 1){
   return a;
}

int ans = exponentiation(a, b / 2);

cout<<ans<<" "<<b;

if(b % 2 == 0){
   return ans * ans;
}else{
   return a * ans * ans;
}
}

int main(){

int a = 2;
int b = 3;

cout<<"The exponentiation are:- "<<exponentiation(a, b);

}
