#include <bits/stdc++.h>
using namespace std;

//  Linear Search in Function..
// bool findElement(int arr[3][3], int target){
//      for(int i = 0 ; i < 3 ; ++i){
//         for(int j = 0 ; j < 3 ; ++j){
//             if(target == arr[i][j])
//             return 1;
//         }
//      }
//      return 0;
// }

// int main()
// {
//   2D Matrix in C++..
// int arr[3][3];
// int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
// int arr[4][3] = {{1,11,111},{2,22,222},{3,33,333},{4,44,444}};

//   For row wise input..
//   for(int i = 0 ; i < 3 ; ++i){
//     for(int j = 0; j < 3 ; ++j){
//         cin>> arr[i][j];
//     }
//   }

//   For Column wise input.....
//   for(int i = 0 ; i < 3 ; ++i){
//     for(int j = 0; j < 3 ; ++j){
//         cin>> arr[j][i];
//     }
//   }

// Question 1:-   Linear Search in 2D Array using the C++.***************************************************************
//   for(int i = 0 ; i < 3 ; ++i){
//     for(int j = 0; j < 3 ; ++j){
//         cin>> arr[i][j];
//     }
//   }

// for (int i = 0; i < 3; ++i)
// {
//     for (int j = 0; j < 3; ++j)
//     {
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }
// int target;
// cout<<"Enter the target element:- ";
// cin>>target;
// if(findElement(arr,target)){
//     cout<<"Element Found";
// }else{
//     cout<<"Element not Found";
// }

// Question 2:-  Find the row and column wise sum for the 2D array.******************************************************
// int sum = 0;
// int arr[3][3];

// for (int i = 0; i < 3; ++i)
// {
//     for (int j = 0; j < 3; ++j)
//     {
//         cin >> arr[i][j];
//     }
// }

// int ans = 0;
// int index = 0;
// for (int i = 0; i < 3; ++i)
// {
//     for (int j = 0; j < 3; ++j)
//     {
//         sum += arr[j][i];
//     }
//     if (ans < sum)
//     {
//         index = i;
//         ans = sum;
//     }
//     sum = 0;
// }
// cout << "The maximum row sum and index are:- " << ans << " " << index;

// Question :- Print like a wave in 2D array using the C++. ****************************************************************
// int nRows = 4, mCols = 4;
// int arr[nRows][mCols];

// for (int i = 0; i < 4; ++i)
// {
//     for (int j = 0; j < 4; ++j)
//     {
//         cin >> arr[i][j];
//     }
// }

// for (int j = 0; j < mCols; ++j)
// {
//     if (j % 2 == 0)
//     {
//         for (int i = 0; i < nRows; ++i)
//         {
//             cout << arr[i][j]<<endl;
//         }
//     }
//     else
//     {
//         for (int i = nRows - 1; i >= 0 ; --i)
//         {
//             cout << arr[i][j]<<endl;
//         }
//     }

// }

// Question:- Print the 2D array into the spiral format using C++ *********************************************************
// int arr[4][4];

// for (int i = 0; i < 4; ++i)
// {
//     for (int j = 0; j < 4; ++j)
//     {
//         cin >> arr[i][j];
//     }
// }

// int numRows = sizeof(matrix) / sizeof(matrix[0]);
// int numCols = sizeof(matrix[0]) / sizeof(matrix[0][0]);
// int startingRow = 0;
// int startingCol = 0;
// int endingCol = numCols - 1;
// int endingRow = numRows - 1;
// int count = 0;
// vector<int> ans;
// int totalSize = numRows * numCols;

// while (count < totalSize)
// {
//     for (int i = startingCol; count < totalSize && i <= endingCol; ++i)
//     {
//         ans.push_back(matrix[startingRow][i]);
//         ++count;
//     }
//     ++startingRow;

//     for (int i = startingRow;count < totalSize && i <= endingRow; ++i)
//     {
//         ans.push_back(matrix[i][endingCol]);
//         ++count;
//     }
//     --endingCol;

//     for (int i = endingCol; count < totalSize && i >= startingCol; --i)
//     {
//         ans.push_back(matrix[endingRow][i]);
//         ++count;
//     }
//     --endingRow;

//     for (int i = endingRow; count < totalSize && i >= startingRow; --i)
//     {
//         ans.push_back(matrix[i][startingCol]);
//         ++count;
//     }
//     ++startingCol;
// }

// for(auto element: ans){
//     cout<<element<<" ";
// }

// Question:- Binary search in 2D Array using the C++..

// vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
// int target;

// int row = matrix.size();
// int col = matrix[0].size();

//     cout<<row<<" "<<col;

// Queestion:- Search in a 2D matrix array.
// vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
//  int target = 30;
//       int row = matrix.size();
//       int col = matrix[0].size();

//       for(int i = 0 ; i < row ; i++){
//         for(int j = 0 ; j < col ; j++){
//             if(matrix[i][j] == target)
//              cout<<"Number Found"<<endl;
//              else{
//                 cout<<"Not found"<<endl;
//              }
//         }
//       }

// Question:- Rotate the matrix by 90 Degree using the C++.
// int arr[3][3];
// vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//   int rows = arr.size();
//   int cols = arr[0].size();
//   // vector<vector<int>> arr2 = {{0},{0},{0}};

//   for (int i = 0; i < rows; ++i)
//   {
//     for (int j = i; j < cols; ++j)
//     {
//       // arr2[i][j] =  arr[j][i];
//        swap(arr[i][j], arr[j][i]);
//     }
//   }

// for(auto element: arr){
//   reverse(element.begin(), element.end());
// }

// for (int i = 0; i < rows; i++)
// {
//   for (int j = 0; j < cols; j++)
//   {
//     cout << arr[i][j] << " ";
//   }
//   cout << endl;
// }

// vector<vector<int>> arr{{1, 2, 3, 4,23}, {5, 6, 7, 8,45} , {9, 10, 11, 12,56},{13,14,15,16,78},{31,41,58,21,98}};

// int row = arr.size();
// int col = arr[0].size();
// int totalSize = row * col;
// int count = 0;

// int firstRow = 0;
// int firstCol = 0;
// int lastCol = col - 1;
// int lastRow = row - 1;
// vector<int> ans;

// while (count < totalSize)
// {

//   for (int i = firstCol; i <= lastCol; ++i)
//   {
//     ans.push_back(arr[firstRow][i]);
//     ++count;
//   }
//   ++firstRow;
//   for (int i = firstRow; i <= lastRow; ++i)
//   {
//     ans.push_back(arr[i][lastCol]);
//     ++count;
//   }
//   --lastCol;
//   for (int i = lastCol; i >= firstCol; --i)
//   {
//     ans.push_back(arr[lastRow][i]);
//     ++count;
//   }
//   --lastRow;
//   for (int i = lastRow; i >= firstRow; --i)

//   {
//     ans.push_back(arr[i][firstCol]);
//     ++count;
//   }
//   ++firstCol;
// }

// for (auto element : ans)
// {
//   cout << element << " ";
// }
// }

// bool checkPrime(int number){
//   if(number == 1)
//    return 0;
//   for (int i = 2; i < number; i++)
//   {
//     if (number % i == 0)
//     {
//       return 0;
//     }
//     else
//     {
//      return 1;
//     }
//   }
// }

// bool countPrime(int number) // 9
// {
//   for (int i = 2; i < number; i++)
//   {
//   if(number % i == 0){
//     return 0;
//   }
//   }
//   return 1;
// }

// int main()
// {
// Question:- 1  The Prime number program using the C++.
// int number = 1;

//   if(checkPrime(number)){
//     cout<<"The number is prime";
//   }else{
//     cout<<"The number is not prime";
//   }

// Question:-2 Count the prime number from any number..
// int number = 10;
// int count = 0;
// for (int i = 2; i < number; ++i)
// {
//   if (countPrime(i))
//   {
//     cout << i << " ";
//     ++count;
//   }
// }

// cout << "The total count number are:- " << count;

// Question:- 3 Count the prime number form any number using Seive of eratosthenes..
// int n = 50;
// vector<bool> primeCount(n, true);
// int count = 0;
// int max = INT_MIN;
// int min = INT_MAX;

// primeCount[0] = 0;
// primeCount[1] = 0;

// for (int i = 2; i < primeCount.size(); i++)
// {

//   if (primeCount[i])
//   {
//     ++count;
//       if(max < i){
//         max = i;
//       }
//       if(min > i){
//         min = i;
//       }
//          for(int j = 2 * i; j < n ; j = j + i){
//                primeCount[j] = 0;
//          }
//   }
// }
// cout<<"The total n of prime n in 50 are:- "<<count<<endl;
// cout<<"The maximum prime number in series are:- "<<max<<endl;
// cout<<"The minimum prime number in series are:- "<<min<<endl;

// }

// int findGcd(int first, int second)
// {

//   if (first == 0)
//     return second;
//   if (second == 0)
//     return first;

//   while (first != second)
//   {
//     if (first > second)
//     {
//       first = first - second;
//     }
//     if (second > first)
//     {
//       second = second - first;
//     }
//   }
//   return second;
// }



int main()
{
  // Question:- 4   Calculate the GCD for the two integer variables..

  // int first = 12;
  // int second = 36;

  // Question:- 5 Identify the relation between the first and second.
  // int result = findGcd(first, second);
  // cout << "The GCD are:- " << result<<endl;
  // int lcm = (first * second) / findGcd(first, second);
  // cout<<"The LCM of 48 and 18 are:- "<<lcm;
   int n = 50;

        vector<bool> primeCount(n + 1, true);
        int count = 0;

        primeCount[0] = 0;
        primeCount[1] = 0;

        for (int i = 2; i < primeCount.size(); i++) {

            if (primeCount[i]) {
                ++count;
                for (int j = 2 * i; j < n; j = j + i) {
                    primeCount[j] = 0;
                }
            }
        }
        // return count;
    cout<<count;
}