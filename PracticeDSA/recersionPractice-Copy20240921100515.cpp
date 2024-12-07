#include <bits/stdc++.h>
using namespace std;

// // void printFunc(int number)
// // {

// //     if (number == 0)
// //     {
// //         return;
// //     }
// //     //   Else print the value;
// //     cout << number << " ";
// //     printFunc(number - 1);
// // }

// // int recursion(int number)
// // {

// //     //   There are the three thing while implementing the recursion that is first is the base case where the recursion tree want to be stop.
// //     if (number == 0)
// //     {
// //         return 1;
// //     }
// //     //    Processing Part of the recursion is::
// //     cout << number << " ";

// //     //      Recursive Call for the problem..
// //     return number * recursion(number - 1);
// // }

// // int fibonacci(int number){

// // //       Base Case for the recursion to solve the problem..
// //      if(number == 0 || number == 1){
// //            return 1;
// //      }
// //     //    Processing Part of the recursion..
   
// //      return  fibonacci(number - 1) + fibonacci(number - 2); 
// // }

// // int fibonacci(int number){

// // //      Base case for the number..
// //   if(number == 0){
// //      return 1;
// //   }

// //   int firstDigit = number % 10;

// //   return firstDigit * fibonacci(number / 10);

// // }

// // int fibonacci(int *arr, int key, int size){
// // //   For implementing the linear Search.. we need the base case where our program will be stop..
// //     if(size == 0){
// //         return false;
// //     }

// //     if(arr[0] == key){
// //          return true;
// //     }

// //     return fibonacci(arr + 1, key, size - 1);

// // }


// // void fibonacci(int number, string *arr, int size){

// // //   Base Case for the recursion.
// //   if(number == 0){
// //      return;
// //   }

// // //     Processing Part of the recursion..
// //     int digit = number % 10;

// //    fibonacci(number / 10, arr, size);
// //     cout<<arr[digit]<<" ";
// // }

// bool fibonacci(int *arr, int key, int start, int end){

// //   Base Case for the Binary Search implementation..
//    if(start > end){
//       return false;
//    }

// //  Calculate the mid of the array..
//   int mid = start + (end - start) / 2;

// //   if the mid Element are the element that we want to be found..
//   if(arr[mid] == key){
//      return true;
//   }
  
//   if(arr[mid] < key){
//      return fibonacci(arr, key, mid + 1, end);
//   }else{
//     return fibonacci(arr, key, start, mid - 1);
//   }
 

// }

// int main()
// {

//     // int number = 10;
//     // //  We want to print the number from 10 to 1 using the recursion.
//     // printFunc(number);
//     //  int i =0;
//     //  double j = 0.000;
//     //  if(i == j){
//     //     cout<<"Equal";
//     //  }
//     //   First Of all the discussion about the recursion..

//     //    what is the recursion:-  Recursion is the programming mechansim that will be used to solve the big or the complex problem in the simplest way. So the actual meaning of the recursion is that a function calling itself directly or the indirectly it is called the recursion. But according to the real world scenario the actual definition of the recursion is that a solution of the big and complex problem are depened on the same type of the smaller problem is called the receursion.

//     // Example:-  if we want to calculate the factorial of the number or the fibonacci sequence for any digit is called the fibinacci and the factorial program.
//     // int number = 6;
//     // int result = recursion(number);
//     //  cout<<endl;
//     // cout <<"The Factorial of the number are:- "<< result;
//     //  Fibonacci Series using the recursion.

//     //  int digit = 10;
//     //  int result = fibonacci(digit);   
//     // //    cout<<"The result are:- "<<result; 

//     //    for(int i = 0; i < digit; ++i){
//     //       cout<<  fibonacci(i)<<" ";
//     //    }

//     // int number = 87654321;
//     // int result = fibonacci(number);
//     // cout<<"The sum of the number are:- "<<result;
    
//     //   int arr[10] = {2,3,4,56,76,3,35,67,66};
//     //   int key = 34;
//     //   int size = sizeof(arr) / sizeof(arr[0]);

//     //    if(fibonacci(arr, key, size)){
//     //        cout<<"The number is Found"<<endl;
//     //    }else{
//     //       cout<<"The number is not found"<<endl;
//     //    }

// //     Creating the numbers into the string words..
//         // int number = 2147483647;
//         // string arr[10] = {"Zero", "One","Two", "Three","Four","Five","Six","Seven","Eight","Nine"};
//         // int size = sizeof(arr) / sizeof(arr[0]);
        
//         // fibonacci(number, arr, size);


// //    Binary Search Using the recursion..
//       // int arr[14] = {1,3,4,7,8,18,19,40,45,67,89,99,990};
//       // int size = sizeof(arr) / sizeof(arr[0]);
//       // int key = 5;
//       // int start = 0;
//       // int end = size - 1;

//       // if(fibonacci(arr, key, start, end)){
//       //     cout<<"The Value are Present"<<endl;
//       // }else{
//       //      cout<<"The Value are not Present"<<endl;
//       // }

// // }

// // void solve(vector<int> nums, vector<vector<int>> &ans, vector<int> output, int index){     
// // }

// // void solve(vector<int> nums, vector<vector<int>> &ans, vector<int> output, int index){
// // // /   Base Case for the recursion..
// //     if(index >= nums.size()){
// //          ans.push_back(output);
// //          return;
// //     }

// // //    Exclude Call for the nums array..
// //     solve(nums, ans, output, index + 1);

// //    //    Include call for the recursion array..
// //      output.push_back(nums[index]);
// //      solve(nums, ans, output, index + 1);
// // }
// void solve(vector<int> nums, vector<vector<int>> &ans, vector<int> output, int index)
// {

// //   /   Base Case for the recursion..
//     if(index >= nums.size()){
//          ans.push_back(output);
//          return;
//     }

// //    Exclude Call for the nums array..
//     solve(nums, ans, output, index + 1);

//    //    Include call for the recursion array..
//      output.push_back(nums[index]);
//      solve(nums, ans, output, index + 1);
   
// }


// int main(){
// vector<int> nums = {1,2,3};
// vector<vector<int>> ans;
// vector<int> output;
// int index = 0;

// solve(nums, ans, output, index);

// cout<<"The all subsets are:- ";
// for(auto element: ans){
//     for(auto ele: element){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
// }

// }

int partitionFun(int *arr, int start, int end){
// Here we need to find the pivot Element and return the index of the pivot Element after array contaiin the 
// less than the pivot element into the left Side and in the right side contain the greater element 

// for(int i = 0; i <= end; ++i){
//          cout<<arr[i] <<" ";
//     }
// cout<<endl;

// { 5,4,8,9,2,6,1,7,3,10}
int pivotElement = arr[start];

int pivotIndex = 0;
// Traverse the Entire Arrray to find the correct position of the pivotElement.
for(int i = 0; i <= end; ++i){
     if(arr[i] < pivotElement){
      ++pivotIndex;
     }
}

// Swap the right Position index Element..
swap(arr[start], arr[pivotIndex]);

// for(int i = 0; i <= end; ++i){
//          cout<<arr[i] <<" ";
//     }
//     cout<<endl;

// Sort the left and the right part of the entire array using the two pointer approach.
   
   int i = 0;
   int j = end;

   while(i < pivotIndex && j > pivotIndex){

      // First Handling the left Part of the array.
      while (arr[i] <= pivotElement)
      {
        ++i;
      }
      while (arr[j] > pivotElement)
      {
        --j;
      }
      // If both pointers are point to the opposite element..

         if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
         }
   }
  //  cout<<"Fine"<<endl;
   return pivotIndex;

}

void quickSort(int *arr, int start, int end){

//  Use the Base Case for the Recursion..
   if(start >= end){
    return;
   }

// Here we need to find the partion element index with the help of this Function.
  int partition = partitionFun(arr, start, end);
  // cout<<partition<<endl;
  quickSort(arr, start, partition - 1);
  quickSort(arr, partition + 1, end);

}

int main(){

    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    //  We Implement the Insertion Sort for Sorting the Elements..

    // for(int i = 1; i < size; ++i){
    //   int element = arr[i];
    //   int j = i - 1;
    //    for(; j >= 0; --j){
    //        if(element < arr[j]){
    //           arr[j + 1] = arr[j];
    //        }else{
    //         break;
    //        }
    //    }
    //    arr[++j] = element;
    // }
   
    //   for(int i = 0; i < size; ++i){
    //       cout<<arr[i]<<" ";
    //   }

    // Implement the Quick Sort for the long Array..


    cout<<"Before the Sorting:- ";
    for(int i = 0; i < size; ++i){
         cout<<arr[i] <<" ";
    }
    cout<<endl;
    
    quickSort(arr, 0, size - 1);

    cout<<"After the sorting:- ";
    for(int i = 0; i < size; ++i){
         cout<<arr[i]<<" ";
    }

}
