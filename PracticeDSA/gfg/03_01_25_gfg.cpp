// // Problem:-  Count Subarrays with given XOR
// #include <map>
// #include <vector>
// #include <bits/stdc++.h>
// int main()
// {
//     vector<int> arr = {4, 2, 2, 6, 4};
//     int k = 6;
//     map<long, long> myMap;

//     long long currsum = 0;
//     long count = 0;

//     for (int i = 0; i < arr.size(); ++i)
//     {
//         currsum ^= arr[i];

//         if (currsum == k)
//         {
//             ++count;
//         }

//         //  else we move forward..
//         if (myMap.find(currsum ^ k) != myMap.end())
//         {
//             count += myMap[currsum ^ k];
//         }

//         //  if not found then we need to create the entry for the curr sum.
//         myMap[currsum]++;
//     }
//     return count;
// }