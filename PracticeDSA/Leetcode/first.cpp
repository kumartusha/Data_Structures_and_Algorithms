// Leetcode 16th December 
// class Solution {
// public:

// // Return the minimum element index...
// int minimum(vector<int> &nums){
// //  Find the minimum element and return the index if have..
// int minElement = INT_MAX;
// int minIndex = -1;

// for(int i = 0; i < nums.size(); ++i){
//     if(nums[i] < minElement){
//         minElement = nums[i];
//         minIndex = i;
//     }
// }
// return minIndex;

// }
//     vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

//         vector<int> ans;
//         for (int i = 0; i < k; ++i) {
//     //  Find the minimum element and put it multiply by multiplier and put into that position..
//        int index = minimum(nums);
//        int element = nums[index] * multiplier;
//        nums[index] = element;
//         }

// //  Return the answer after storing the elements...
//         return nums;
//     }
// };