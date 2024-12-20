// // Leetcode 16th December
// // class Solution {
// // public:

// // // Return the minimum element index...
// // int minimum(vector<int> &nums){
// // //  Find the minimum element and return the index if have..
// // int minElement = INT_MAX;
// // int minIndex = -1;

// // for(int i = 0; i < nums.size(); ++i){
// //     if(nums[i] < minElement){
// //         minElement = nums[i];
// //         minIndex = i;
// //     }
// // }
// // return minIndex;

// // }
// //     vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

// //         vector<int> ans;
// //         for (int i = 0; i < k; ++i) {
// //     //  Find the minimum element and put it multiply by multiplier and put into that position..
// //        int index = minimum(nums);
// //        int element = nums[index] * multiplier;
// //        nums[index] = element;
// //         }

// // //  Return the answer after storing the elements...
// //         return nums;
// //     }
// // };

// // Leetcode Questions..

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {

//     // Input:prices = [ 8, 4, 6, 2, 3 ]
//     // Output : [ 4, 2, 4, 2, 3 ]

//     // vector<int> prices = {10,1,1,6};
//     vector<int> prices = {8,4,6,2,3};
//     vector<int> answer(prices.size());

//     int size = prices.size();
//     //  Logic for the Problem..
//     for (int i = 0; i < size; ++i)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j <= size; ++j)
//         {
//             if (j < size && prices[minIndex] >= prices[j])
//             {
//                 answer[minIndex] = prices[minIndex] - prices[j];
//                 break;
//             }else{
//                 answer[minIndex] = prices[minIndex];
//             }
//         }
//     }
    
//     for (auto element : answer)
//     {
//         cout << element << " ";
//     }
// }

