
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>

// int main()
// {
//     // int count = 0;/

//     // for(int i = 0 ;i < arr.size(); ++i){
//     //       for(int j = i + 1; j < arr.size(); ++j){
//     //             if(arr[i] + arr[j] < target){
//     //                 ++count;
//     //             }
//     //       }
//     // }
//     // return count;

//     vector<int> arr = {1, 2, 3, 4, 5};
//     int target = 10;
//     //  Usin the two pointer approach..
//     sort(arr.begin(), arr.end());
//     int count = 0;
//     int n = arr.size();
//     int i = 0;
//     int j = n - 1;
//     while (i < j)
//     {
//         if (arr[i] + arr[j] < target)
//         {
//             count += j - i;
//             i++;
//         }
//         else
//         {
//             j--;
//         }
//     }
//     return count;
// }