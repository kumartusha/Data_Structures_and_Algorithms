// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;

// int main()
// {
//     vector<int> arr = {10, 30, 20, 5};
//     int target = 25;
//     vector<int> ans;

//     //  we need to find the pair from the main array that sum is less than the target element.

//     sort(arr.begin(), arr.end());

//     int start = 0;
//     int end = arr.size() - 1;
//     int closestMin = INT_MAX;
//     int maxAbsDiff = INT_MIN;

//     for (int i = 0; i < arr.size(); ++i)
//     {
//         int abs = arr[end] - arr[start];
//         int sum = arr[start] + arr[end];
//         if (sum <= target && abs > maxAbsDiff && sum - target < INT_MAX)
//         {
//             cout << arr[start] << " " << arr[end] << endl;
//         }
//     }

//     // for (auto element : arr)
//     // {
//     //     cout << element << " ";
//     // }
// }
