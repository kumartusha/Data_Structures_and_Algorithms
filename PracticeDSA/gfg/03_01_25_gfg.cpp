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

// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

    // int count = 0;
    // int currSum = 0;
    // unordered_map<int, int> myMap;

    // for (int i = 0; i < size; ++i)
    // {
    //     currSum += arr[i];

    //     if (currSum == target)
    //     {
    //         ++count;
    //     }

    //     if (myMap.find(currSum - target) != myMap.end())
    //     {
    //         count += myMap[currSum - target];
    //     }

    //     myMap[currSum]++;
    // }
    // cout << count;

    // vector<int> arr = {-1, 1, 5, 5, 7};
    // int target = 6;
    // int size = arr.size();
    // int start = 0;
    // int end = size - 1;
    // int count = 0;
    // int maxCount = 0;

    // while (start < end)
    // {
    //     int sum = arr[start] + arr[end];
    //     if (sum == target)
    //     {
    //         ++count;
    //         maxCount += count;
    //         // --end;
    //     }
    //     else if (sum > target)
    //     {
    //         --end;
    //     }
    //     else
    //     {
    //         ++start;
    //     }
    // }
    // cout << maxCount;

    //     vector<string> words = {"mass", "as", "hero", "superhero"};

    //     for (auto elements : words)
    //     {
    //         string str = elements;
    //         for (auto element : words)
    //         {

    //         }
    //     }
}