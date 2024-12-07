#include <bits/stdc++.h>
using namespace std;

// void printFunc(int number)
// {

//     if (number == 0)
//     {
//         return;
//     }
//     //   Else print the value;
//     cout << number << " ";
//     printFunc(number - 1);
// }

// int recursion(int number)
// {

//     //   There are the three thing while implementing the recursion that is first is the base case where the recursion tree want to be stop.
//     if (number == 0)
//     {
//         return 1;
//     }
//     //    Processing Part of the recursion is::
//     cout << number << " ";

//     //      Recursive Call for the problem..
//     return number * recursion(number - 1);
// }

// int fibonacci(int number){

// //       Base Case for the recursion to solve the problem..
//      if(number == 0 || number == 1){
//            return 1;
//      }
//     //    Processing Part of the recursion..

//      return  fibonacci(number - 1) + fibonacci(number - 2);
// }

// int fibonacci(int number){

// //      Base case for the number..
//   if(number == 0){
//      return 1;
//   }

//   int firstDigit = number % 10;

//   return firstDigit * fibonacci(number / 10);

// }

// int fibonacci(int *arr, int key, int size){
// //   For implementing the linear Search.. we need the base case where our program will be stop..
//     if(size == 0){
//         return false;
//     }

//     if(arr[0] == key){
//          return true;
//     }

//     return fibonacci(arr + 1, key, size - 1);

// }

// void fibonacci(int number, string *arr, int size){

// //   Base Case for the recursion.
//   if(number == 0){
//      return;
//   }

// //     Processing Part of the recursion..
//     int digit = number % 10;

//    fibonacci(number / 10, arr, size);
//     cout<<arr[digit]<<" ";
// }

// bool fibonacci(int *arr, int key, int start, int end)
// {

//    //   Base Case for the Binary Search implementation..
//    if (start > end)
//    {
//       return false;
//    }

//    //  Calculate the mid of the array..
//    int mid = start + (end - start) / 2;

//    //   if the mid Element are the element that we want to be found..
//    if (arr[mid] == key)
//    {
//       return true;
//    }

//    if (arr[mid] < key)
//    {
//       return fibonacci(arr, key, mid + 1, end);
//    }
//    else
//    {
//       return fibonacci(arr, key, start, mid - 1);
//    }
// }

// int main()
// {

// int number = 10;
// //  We want to print the number from 10 to 1 using the recursion.
// printFunc(number);
//  int i =0;
//  double j = 0.000;
//  if(i == j){
//     cout<<"Equal";
//  }
//   First Of all the discussion about the recursion..

//    what is the recursion:-  Recursion is the programming mechansim that will be used to solve the big or the complex problem in the simplest way. So the actual meaning of the recursion is that a function calling itself directly or the indirectly it is called the recursion. But according to the real world scenario the actual definition of the recursion is that a solution of the big and complex problem are depened on the same type of the smaller problem is called the receursion.

// Example:-  if we want to calculate the factorial of the number or the fibonacci sequence for any digit is called the fibinacci and the factorial program.
// int number = 6;
// int result = recursion(number);
//  cout<<endl;
// cout <<"The Factorial of the number are:- "<< result;
//  Fibonacci Series using the recursion.

//  int digit = 10;
//  int result = fibonacci(digit);
// //    cout<<"The result are:- "<<result;

//    for(int i = 0; i < digit; ++i){
//       cout<<  fibonacci(i)<<" ";
//    }

// int number = 87654321;
// int result = fibonacci(number);
// cout<<"The sum of the number are:- "<<result;

//   int arr[10] = {2,3,4,56,76,3,35,67,66};
//   int key = 34;
//   int size = sizeof(arr) / sizeof(arr[0]);

//    if(fibonacci(arr, key, size)){
//        cout<<"The number is Found"<<endl;
//    }else{
//       cout<<"The number is not found"<<endl;
//    }

//     Creating the numbers into the string words..
// int number = 2147483647;
// string arr[10] = {"Zero", "One","Two", "Three","Four","Five","Six","Seven","Eight","Nine"};
// int size = sizeof(arr) / sizeof(arr[0]);

// fibonacci(number, arr, size);

//    Binary Search Using the recursion..
// int arr[14] = {1,3,4,7,8,18,19,40,45,67,89,99,990};
// int size = sizeof(arr) / sizeof(arr[0]);
// int key = 5;
// int start = 0;
// int end = size - 1;

// if(fibonacci(arr, key, start, end)){
//     cout<<"The Value are Present"<<endl;
// }else{
//      cout<<"The Value are not Present"<<endl;
// }
// }
// int countDistinctWays(int nStairs) {

//   if (nStairs == 0 || nStairs == 1)
//     return 1;
//   return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);

// }

// void reverse(int *arr, int start, int end, int size)
// {

//    if (size == 0)
//    {
//       return;
//    }

//    //   swap the first and the last element.
//    swap(arr[start], arr[end]);

//    //  recursive Call.
//    return reverse(arr, start + 1, end - 1, size - 2);
// }
// bool isPalindrome(int *arr, int start, int end, int size)
// {

//    //    Base Condition for the Question..
//    if (start >= end)
//    {
//       return true;
//    }
//    //  check if the two element not equal then no the palindrome.
//    if (arr[start] != arr[end])
//    {
//       return false;
//    }
//    return isPalindrome(arr, start + 1, end - 1, size - 2);
// }

// int solveFunction(int number, int power)
// {
//    //   Implement the to the power function using the recursion..
//    //   There are the three Cases for this problem if the n is the 0, if n is the negative, If, n is even and lastthe n is odd number..
//    if (power == 0)
//    {
//       return 1;
//    }
//    //    Second Case if the n is the negative number..
//    if (power < 0)
//    {
//       return solveFunction(1 / number, -(power));
//    }
//    //  if the n is the odd number..
//    if (power & 1)
//    {
//       //   Odd Condition..
//       return number * solveFunction(number * number, (power - 1 )/ 2);
//    }
//    //     Even Condition..
//    return solveFunction((number * number), power / 2);
// }

// void bubbleSort(int *arr, int size){
//    Here are the implementation of the bubble sort using the recursion..
//   for(int i = 0; i < size; ++i){
//        for(int j = i + 1; j < size; ++j){
//             if(arr[i] > arr[j]){
//                   swap(arr[i], arr[j]);
//             }
//        }
//   }
//   Solution using the recursion..
//     Base case for the solution..
//    if(size == 1){
//         return;
//    }
//    for(int j = 0; j < size - 1; ++j){
//          if(arr[j] > arr[j + 1]){
//                swap(arr[j], arr[j+1]);
//          }
//    }

//  bubbleSort(arr, size - 1);
// }

//  void addSubvector(vector<int> nums, vector<vector<int>> &subset, vector<int> output, int index, vector<int> &sumStore){

// //    First of all the base condition for the recursive Function..
//      if(index >= nums.size()){
//         //  Before returning from the recursive function we need to store the data present on the current conditio..
//          subset.push_back(output);
//          sumStore.push_back(accumulate(output.begin(), output.end(), 0));
//          return;
//      }

//     //    Exclude Call for the problem..
//           addSubset(nums, subset, output, index + 1, sumStore);

// //      Include Call for this problem..
//          int element = nums[index];
//          output.push_back(element);
//          addSubset(nums, subset, output, index + 1, sumStore);
//     }

// int main()
// {
//   take the 2D vector for storing the combination of the output Array..
// vector<int> nums = {1,2,3};
// vector<int> sumStore;
//   vector<vector<int>> subset;
//   vector<int> output;
//   int index = 0;
//     if(nums.size() == 0){
//         cout<<"No OPeration Required";
//     }

//   Other wise call the recursive function for storing the output array..
//   addSubset(nums, subset, output, index, sumStore);

// for(auto elements: subset){
//      for(auto element: elements){
//          cout<<element<<" ";
//      }
//      cout<<endl;
// }

//  for(auto element: sumStore){
//      cout<<element<<" ";
//  }

// cout<<countDistinctWays(40);
//  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int start = 0;
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int end = size - 1;

//    reverse(arr, start, end, size);
//    for(int i = 0; i < size; ++i){
//            cout<<arr[i]<<" ";
//    }
//   Check Palinndrome Using the recursion..
// int arr[8] = {1,2,3,4,4,3,2,1};
// int size = sizeof(arr) / sizeof(arr[0]);
// int start = 0;
//  int end = size - 1;

//  if(isPalindrome(arr, start, end, size)){
//      cout<<"The array is Palindrome"<<endl;
//  }else{
//      cout<<"The array is not the palindrome";
//  }

// int number = 2;
// int power = -20;

// cout << "The power of 9 from 2 is:- " << solveFunction(number, power);

// int arr[10] = {10,4,5,2,9,6,5,8,7};
// int size = sizeof(arr) / sizeof(arr[0]);
// int k = 0;

// //   Bubble Sort using the recursion..
//     for(int i = 0; i < size; ++i){
//         bubbleSort(arr, size);
//     }
//       for(int i = 0; i < size; ++i){
//              cout<<arr[i]<<" ";
//       }

//   vector<int> vect = {1,2,3,4,5,6,7,8};
//    if(10 == accumulate(vect.begin(), vect.end(), 0)){
//       cout<<"Done";
//    }else{
//       cout<<"Not Done";
//    }
// }

// int main(){
//     string s = "20000000000000000000";
//      long long returnStr = 0;
//         try {
//              returnStr = stoll(s);
//              if(returnStr > INT_MAX){
//             cout<<INT_MAX<<endl;
//            }else if(returnStr < INT_MIN){
//             cout<<INT_MIN<<endl;
//            }
//             cout<<"ReturnStr:- "<<returnStr<<endl;
//         }catch (const std::invalid_argument& e) {
//             cout<<"Invalid Argument"<<endl;
//         }catch(const std::out_of_range& e){
//          cout<<returnStr;

//         }
//         cout<<"ReturnStr End:- "<<returnStr;
//    //   string str = "-91283472332";
//    //   cout<<stoi(str);

// }

// int main()
// {
//     int num = 5;
//    //  Store the values0 values according to the number given..
//    // vector<int> nums(num, 0);
//     string output = "";
//     for(int i = 0;  i  < num; ++i){
//         output += '0';
//     }

//    vector<string> myVect;
//    int index = 0;
//    // //     recursion call for this Question.
//    // // cout<<"Hello Bhai";
//    solve(output, myVect, index);

//    for (auto elements : myVect)
//    {
//       cout << elements << " "<<endl;
//    }
// }

// void solve(vector<int> nums, set<vector<int>> &ans, vector<int> output, int index, int target)
// {

// //   First Sort the vector..
//    sort(nums.begin(), nums.end());

//    //   /   Base Case for the recursion..
//    if (index >= nums.size())
//    {
//       if(target == accumulate(output.begin(), output.end(), 0)){
//          ans.insert(output);
//       }
//       return;
//    }

//    //    Exclude Call for the nums array..
//    solve(nums, ans, output, index + 1, target);

//    //    Include call for the recursion array..
//    output.push_back(nums[index]);
//    solve(nums, ans, output, index + 1, target);
// }

// int main()
// {
//    vector<int> nums = {2,3,5};

//    set<vector<int>> ans;
//    vector<int> output;
//    int index = 0;
//    int target = 8;

//    solve(nums, ans, output, index, target);

//    // cout << "The all subsets are:- ";
//    for (auto element : ans)
//    {
//       for (auto ele : element)
//       {
//          cout << ele <<" ";
//       }
//       cout << endl;
//    }
// }

// void merge(int *arr, int start, int end){

// //  Here we need to find the mid Value of the array because we copy the main array content into two different arrays..
//   int mid = start + (end - start) / 2;

//   int length1 = mid - start + 1;
//   int length2 = end - mid;

// //    Create the two empty array to find the solution.
//    int *arr1 = new int[length1];
//    int *arr2 = new int[length2];

//    //   Copy the elements of the main array into the two different array..
//       // for(int i = start, j = 0; i < length1; ++i){
//       //    arr1[j++] = arr[i];
//       // }

//       // for(int i = mid + 1, j = 0; i < length2; ++i){
//       //   arr2[j++] = arr[i];
//       // }
//       int prevIndex = start;
//       for(int i = 0; i < length1; ++i){
//            arr1[i] = arr[prevIndex++];
//       }
//       // prevIndex = mid + 1;
//       for(int j = 0;j < length2; ++j){
//            arr2[j] = arr[prevIndex++];
//       }

// //   Merge the two sorted array in the merge Sort Function..

//       prevIndex = start;
//       int i = 0;
//       int j = 0;

//     while(i < length1 && j < length2){
//          if(arr1[i] <= arr2[j]){
//             arr[prevIndex++] = arr1[i++];
//          }else{
//             arr[prevIndex++] = arr2[j++];
//          }
//     }
//     while(i < length1){
//       arr[prevIndex++] = arr1[i++];
//     }
//     while(j < length2){
//       arr[prevIndex++] = arr2[j++];
//     }
// }

// void mergerSortFunc(int *arr, int start, int end)
// {

//    //   Base Case for the recursion..
//    if (start >= end)
//    {
//       return;
//    }

//    //   Calculate the mid to dive the array from Mid.
//    int mid = start + (end - start) / 2;

//    //  Call the recursive Function..
//       mergerSortFunc(arr, start, mid);
//       mergerSortFunc(arr, mid + 1, end);
//       merge(arr, start, end);

// }

// //   Implementation of the merge Sort..
// int main()
// {

//    int arr[15] = {113,2,3,34,556,76, 23, 4, 1, 87, 56, 88, 556, 88, 10};
//    //  Because we want the minimum time to execute of the algorithm..
//    int size = sizeof(arr) / sizeof(arr[0]);

//    cout<<"Before the sorting:- ";
//    for(int i = 0; i < size; ++i){
//         cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    mergerSortFunc(arr, 0, size - 1);

//    cout<<"After the sorting:- ";
//    for(int i = 0; i < size; ++i){
//         cout<<arr[i]<<" ";
//    }
//    cout<<endl;
// }

// int partition(int *arr, int start, int end)
// {

//    //  Store the pivot element..
//    int pivotElement = arr[start]; //  Doubt..

//    int count = 0;
//    //   Find the right position of the pivot element..
//    for (int i = 0; i <= end; ++i)
//    {
//       if (arr[i] < pivotElement)
//       {
//          ++count;
//       }
//    }
//    //   Here the count is pointing to the rigth position of the pivot element..
//    int pivotIndex = count;
//    swap(arr[start], arr[count]);

//    //   Put the element that less than to the pivotElement into left rest the greater element put in the right direction..

//    int first = start;
//    int last = end;

//    while (first < pivotIndex && last > pivotIndex)
//    {

//       while (arr[first] <= pivotElement)
//       {
//          ++first;
//       }

//       while (arr[last] > pivotElement)
//       {
//          --last;
//       }
//       if (first < pivotIndex && last > pivotIndex)
//       {
//          swap(arr[first], arr[last]);
//       }
//    }
//    return pivotIndex;
// }

// void quickSort(int *arr, int start, int end)
// {
//    //  Write the base case for the recursion..
//    if (start >= end)
//    {
//       return;
//    }

//    //   Find the partition element index;
//    int pivotIndex = partition(arr, start, end);

//    //   Sort the rest of the array using the recursion.
//    quickSort(arr, start, pivotIndex - 1);
//    quickSort(arr, pivotIndex + 1, end);
// }

// // Quick Sort Algorithm...
// int main()
// {

//    int arr[10] = {12,1,223,4,344,3,444,8,777,20};
//    //    //  Because we want the minimum time to execute of the algorithm..
//    int size = sizeof(arr) / sizeof(arr[0]);

//    cout << "Before the sorting:- ";
//    for (int i = 0; i < size; ++i)
//    {
//       cout << arr[i] << " ";
//    }
//    cout << endl;
//    quickSort(arr, 0, size - 1);

//    cout << "After the sorting:- ";
//    for (int i = 0; i < size; ++i)
//    {
//       cout << arr[i] << " ";
//    }
//    cout << endl;
// }

// void subsets(vector<int> nums, vector<vector<int>> &ans, vector<int> output, int index)
// {
//    //   Base case for the recursion step..
//    if (index >= nums.size())
//    {
//       ans.push_back(output);
//       return;
//    }

//    //  recursive Call for the subsets function..
//    //    For Exclude Call.
//    subsets(nums, ans, output, index + 1);

//    //     Fot the include Call..
//    output.push_back(nums[index]);
//    subsets(nums, ans, output, index + 1);
// }

// int main()
// {

//    vector<int> nums = {1, 2, 3};
//    //  We need to find the all subsets combinations using the recursion and the backtracing..

//    vector<vector<int>> ans;
//    vector<int> output;
//    int index = 0;

//    subsets(nums, ans, output, index);

//   cout<<"[";
//    for(auto elements : ans){
//       cout<<"[";
//         for(auto element: elements){
//             cout<<element<<",";
//         }
//         cout<<"]"<<endl;
//    }
//    cout<<"]";
// }

// void permutations(vector<int> nums, vector<vector<int>> &ans, int index){

//    // Base Case for the recursion..
//       if(index >= nums.size()){
//          ans.push_back(nums);
//          return;
//       }

//       //  Rest of the process for this problem..
//       for(int i = index; i < nums.size(); ++i){
//          //   First Swap the elements..
//             swap(nums[i], nums[index]);

//          //  Recursive Call..
//             permutations(nums, ans, index + 1);

//         //   Backtrack the elements..
//             swap(nums[i], nums[index]);
//       }

// }

// int main(){

// vector<int> nums = {1,2,3};

// vector<vector<int>> ans;
// int index = 0;

// permutations(nums, ans, index);

//  for(auto elements: ans){
//      for(auto element: elements){
//         cout<<element<<" ";
//      }
//      cout<<endl;
//  }
// }

// int main(){

//   string str = "23";
// //   vector<string> ans;
// //   string store = "";
// //   string mapping[10] = {"zero", "one", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};

//   string str = 'a';
// }

// #include <iostream>
// #include <vector>

// void findSubsets(string &arr, std::vector<int> &output, int index) {
//     if (index == arr.size()) {
//         // Base case: If we have reached the end, print the current subset
//         std::cout << "{ ";
//         for (char num : output) {
//             std::cout << num << " ";
//         }
//         std::cout << "}\n";
//         return;
//     }

//     // Option 1: Exclude the current element and move to the next element
//     findSubsets(arr, output, index + 1);

//     // Option 2: Include the current element and move to the next element
//     output.push_back(arr[index]);
//     findSubsets(arr, output, index + 1);

//     // Backtrack to remove the current element (to explore other subsets)
//     output.pop_back();
// }

// int main() {
//    //  std::vector<int> arr = {1, 2, 3};  // example array
//   string arr = "abc";
//     std::vector<int> output;
//     findSubsets(arr, output, 0);
//     return 0;
// // }

// void combinations(vector<int> &nums, int target, vector<vector<int>> &ans, vector<int> &output, int index)
// {

//     //   Base Case for the recursion problem..
//     if (index >= nums.size())
//     {

//         if (target == accumulate(output.begin(), output.end(), 0))
//         {
//             ans.push_back(output);
//         }
//         return;
//     }

//     //   Exclude and the exclude Call for the recursion..
//     combinations(nums, target, ans, output, index + 1);

//     //  Include Call for the recursion..
//     output.push_back(nums[index]);
//     combinations(nums, target, ans, output, index + 1);

//     output.pop_back();
// }

// int main()
// {

//     // vector<int> nums = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,33,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,44,4,4,4,5,5,5,5,5,5,5,5,5,5,5,49,5,5,5,5,6,6,6,6};
//     // vector<int> nums = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
//     vector<int> nums = {10,1,2,7,6,1,5};
//     int target = 8;

//     vector<vector<int>> ans;
//     vector<int> output;

//     sort(nums.begin(), nums.end());

//     combinations(nums, target, ans, output, 0);

//      for(auto elements: ans){
//         for(auto element: elements){
//            cout<<element<<" ";
//           }
//           cout<<endl;
//      }
// }

// void combinations(vector<vector<int>>&ans,vector<int>&a,vector<int>& candidates,int target,int ind){
//         if(target==0){
//             ans.push_back(a);
//             return;
//         }
//     for(int i=ind;i<candidates.size() && target>=candidates[i];i++){
//             if(i==ind || candidates[i]!=candidates[i-1]){
//                 a.push_back(candidates[i]);
//                 combinations(ans,a,candidates,target-candidates[i],i+1);
//                 a.pop_back();
//             }
//         }
//     }
//     int main() {
//         // sort(candidates.begin(),candidates.end());
//         //  vector<vector<int>> ans;
//         //  vector<int>a;
//         //  kavya(ans,a,candidates,target,0);
//         //  return ans;

//          vector<int> nums = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,33,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,44,4,4,4,5,5,5,5,5,5,5,5,5,5,5,49,5,5,5,5,6,6,6,6};
//     // vector<int> nums = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
//     // vector<int> nums = {10,1,2,7,6,1,5};
//     int target = 20;

//     vector<vector<int>> ans;
//     vector<int> output;

//     sort(nums.begin(), nums.end());

//     combinations(ans, output, nums, target, 0);

//      for(auto elements: ans){
//         for(auto element: elements){
//            cout<<element<<" ";
//           }
//           cout<<endl;
//      }
//     }

// bool isSafe(int newX, int newY, vector<vector<int>> matrix, vector<vector<int>> store, int &size)
// {

//     if (newX >= 0 && newX < size && newY >= 0 && newY < size && matrix[newX][newY] == 1 && store[newX][newY] == 0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// void solve(int xcor, int ycor, vector<vector<int>> matrix, int size, vector<vector<int>> store, vector<string> &ans, string &str)
// {
//     //   If we implement the recursion we need the base case.
//     if (xcor == size - 1 && ycor == size - 1)
//     {
//         ans.push_back(str);
//         return;
//     }

//     //   We assume that the rat is present into the first position of the matrix and he has the 4 direction to be moved..
//     int newX = xcor + 1;
//     int newY = ycor;

//     //  First Down Direction.
//     if (isSafe(newX, newY, matrix, store, size))
//     {
//         str.push_back('D');
//         store[newX][newY] = 1;
//         solve(newX, newY, matrix, size, store, ans, str);
//         str.pop_back();
//         store[newX][newY] = 0;
//     }
//     newX = xcor;
//     newY = ycor - 1;
//     //  Second left Direction.
//     if (isSafe(newX, newY, matrix, store, size))
//     {
//         str.push_back('L');
//         store[newX][newY] = 1;
//         solve(newX, newY, matrix, size, store, ans, str);
//         str.pop_back();
//         store[newX][newY] = 0;
//     }
//     newX = xcor;
//     newY = ycor + 1;
//     //  Third Right Direction.
//     if (isSafe(newX, newY, matrix, store, size))
//     {
//         str.push_back('R');
//         store[newX][newY] = 1;
//         solve(newX, newY, matrix, size, store, ans, str);
//         str.pop_back();
//         store[newX][newY] = 0;
//     }
//     newX = xcor - 1;
//     newY = ycor;
//     //  Fourth Up Direction.
//     if (isSafe(newX, newY, matrix, store, size))
//     {
//         str.push_back('U');
//         store[newX][newY] = 1;
//         solve(newX, newY, matrix, size, store, ans, str);
//         str.pop_back();
//         store[newX][newY] = 0;
//     }
// }

// int main()
// {

//     vector<vector<int>> matrix = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
//     // vector<vector<int>> matrix = {{0, 0},{1, 0}};
//     int rowCol = matrix.size();
//     vector<vector<int>> store(matrix.size(), vector<int>(rowCol, 0));
//     vector<string> ans;
//     string str = "";
//     int xcor = 0;
//     int ycor = 0;

//     //      if the matrix[0][0] == 0 then we need to do nothing..
//     if (matrix[0][0] == 0)
//     {
//         cout << "Not Possible:";
//         return 1;
//     }
//     store[0][0] = 1;
//     //   Solve by the backtracking..
//     solve(xcor, ycor, matrix, rowCol, store, ans, str);

//     for (auto &element : ans)
//     {
//         cout << element << " ";
//     }
// }

// void solve(string str, int number, vector<string> &store, int index){
// //   For Implementing this function we need to apply the recursion base case..
//    if(index >= str.length()){
//     //     We need to store the result into the main string vector..

//         //   We store the values based on the condition.
//            for(int i = 0; i < str.length() - 1; ++i){
//               if(str[i] == '0'){
//                   continue;
//               }else if(str[i] == '1'){
//                   if(str[i + 1] == '1'){
//                     return;
//                   }
//               }
//            }
//         store.push_back(str);
//       return;
//    }

// //   Implement the include and the exclude function for this Question..
//     //   First Exclude Call for this Question..
//         solve(str, number, store, index + 1);

//         //  Call for the include and we have more some opeartions for the include method..
//            str[index] = '1';
//         solve(str, number, store, index + 1);
// }

// int main()
// {

//     int number = 3;
//     vector<string> store;
//     string str = "";
//     for(int i = 0;i  < number; ++i){
//           str.push_back('0');
//     }
//     //  Call the recursive to find the solution of the problem..
//      solve(str, number, store, 0);

//     //   cout<<endl<<"After Printing:- ";
//       for(auto element: store){
//         cout<<element<<" "<<endl;
//       }
// }

// int main()
// {

//     vector<string> binary_strings = generate_binary_strings(4);
//     for (string s : binary_strings)
//     {
//         cout << s << " ";
//     }
// }

// void solve(string str, set<string> &firstVect, int index, string result)
// {
//     //   Base case Reach for the answer..
//     if (index == str.length())
//     {
//         firstVect.insert(result);
//         return;
//     }

//     //     Implement the include and the exclude for this Question..
//     solve(str, firstVect, index + 1, result);
//     result.push_back(str[index]);
//     //  Again Implement the include Definition..
//        solve(str, firstVect, index + 1, result);
// }

// int main()
// {

//     //   We have given the two string with equal Length..
//     string str = "gfg";
//     string str2 = "ggg";
//     set<string> firstVect;
//     set<string> firstVect2;
//     // We need to find if any string have more than the distinct subsequences..
//     solve(str, firstVect, 0, "");
//     solve(str2, firstVect2, 0, "");

//     int size1 = firstVect.size();
//     int size2 = firstVect2.size();
//       if(size2 == size1 || size2 < size1){
//         cout<<str<<endl;
//       }else{
//         cout<<str2;
//       }
// }

// int main(){

// vector<int> vect = {1,8,3,4,5};

// if(is_sorted(vect.begin(), vect.end())){
//  cout<<"Sorted";
// }else{
//  cout<<"Not Sorted";
// }

// void dtb(int number){

//   if(number == 0){
//    return;
//   }
//    int remainder = number % 2;
//   dtb(number / 2);
//   cout<<remainder<<" ";

// }
// int main(){
//   int n = 10;
//   dtb(n);

// int number  = 123;
// int ans = 0;
// while (number)
// {
//      int remainder = number % 10;
//      ans = (ans * 10) + remainder;
//      number = number / 10;
// }

// cout<<ans;

//   vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

//     int row = matrix.size();
//     int col = matrix[0].size();

//     for(int i = 0; i < row; ++i){
//          for(int j = i; j < col; ++j){
//               swap(matrix[i][j], matrix[j][i]);
//          }
//     }

//    for(int i = 0; i < row; ++i){
//          for(int j = 0; j < col; ++j){
//               cout<<matrix[i][j]<<" ";
//          }
//          cout<<endl;
//    }

//  for(auto element : matrix){
//       for(auto element2: element){
//             cout<<element2<<" ";
//       }
//       cout<<endl;
//  }
// cout<<"Hello";
// cout<<"Hello";
// }

// void merge(int *arr, int start, int mid, int end)
// {
//    //  Here we have the array which contain the two sorted Array.

//    int length1 = mid - start + 1;
//    int length2 = end - mid;

//    int *arr1 = new int[length1];
//    int *arr2 = new int[length2];

//    int copy = start;
//    //  Copying the Element into the New Created Subarray..
//    for (int i = 0; i < length1; ++i)
//    {
//       arr1[i] = arr[copy++];
//    }

//    for (int i = 0; i < length2; ++i)
//    {
//       arr2[i] = arr[copy++];
//    }

//    // Here are the Logic for merge Two Sorted Array..
//    //  Here we have the two array which we want to merge into the single Array.

//    int first = 0;
//    int second = 0;
//    copy = start;

//    while (first < length1 && second < length2)
//    {
//       if (arr1[first] <= arr2[second])
//       {
//          arr[copy] = arr1[first++];
//       }
//       else
//       {
//          arr[copy] = arr2[second++];
//       }
//       ++copy;
//    }

//    while (first < length1)
//    {
//       arr[copy++] = arr1[first++];
//    }

//    while (second < length2)
//    {
//       arr[copy++] = arr2[second++];
//    }
// }

// void mergeSort(int *arr, int start, int end)
// {

//    if (start >= end)
//    {
//       return;
//    }
//    //  This is the recursive Function...
//    int mid = start + (end - start) / 2;

//    mergeSort(arr, start, mid);
//    mergeSort(arr, mid + 1, end);
//    merge(arr, start, mid, end);
// }

// int main()
// {

//    //  We Need to Implement the Merge Sort..
//    int arr[10] = {3, 2, 65, 45, 6, 58, 14, 7, 98, 65};
//    int size = sizeof(arr) / sizeof(arr[0]);

//    //  Call the merge Sort Function..

//    cout << "Before the Sorting:- ";
//    for (int i = 0; i < size; ++i)
//    {
//       cout << arr[i] << " ";
//    }

//    mergeSort(arr, 0, size - 1);

//    cout << endl;
//    cout << "After the Sorting:- ";
//    for (int i = 0; i < size; ++i)
//    {
//       cout << arr[i] << " ";
//    }
// }

//  Insertion Sort Using the C++.

int main()
{

   int arr[10] = {2, 1, 56, 4, 34, 5, 2, 78, 6, 90};
   int size = sizeof(arr) / sizeof(arr[0]);


//    After the Sorting..
    for(int i = 0 ; i < size; ++i){
      cout<<arr[i]<<" ";
    }


   for (int i = 1; i < size; ++i)
   {

      int element = arr[i];
      int j = i - 1;
      for (; j >= 0; --j)
      {
         if(arr[j] > element){
               arr[j + 1] = arr[j];
         }else{
            break;
         }
      }
      arr[++j] = element;
  }
cout<<endl;
//    After the Sorting..
    for(int i = 0 ; i < size; ++i){
      cout<<arr[i]<<" ";
    }
}