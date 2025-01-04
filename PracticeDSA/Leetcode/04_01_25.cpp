#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //     Input: nums = [10,4,-8,7]
    // Output: 2
    // Explanation:
    // There are three ways of splitting nums into two non-empty parts:
    // - Split nums at index 0. Then, the first part is [10], and its sum is 10. The second part is [4,-8,7], and its sum is 3. Since 10 >= 3, i = 0 is a valid split.
    // - Split nums at index 1. Then, the first part is [10,4], and its sum is 14. The second part is [-8,7], and its sum is -1. Since 14 >= -1, i = 1 is a valid split.
    // - Split nums at index 2. Then, the first part is [10,4,-8], and its sum is 6. The second part is [7], and its sum is 7. Since 6 < 7, i = 2 is not a valid split.
    // Thus, the number of valid splits in nums is 2.

    // vector<int> nums = {10, 4, -8, 7};
    vector<int> nums = {0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17, -18, -19, -20, -21, -22, -23, -24, -25, -26, -27, -28, -29, -30, -31, -32, -33, -34, -35, -36, -37, -38, -39, -40, -41, -42, -43, -44, -45, -46, -47, -48, -49, -50, -51, -52, -53, -54, -55, -56, -57, -58, -59, -60, -61, -62, -63, -64, -65, -66, -67, -68, -69, -70, -71, -72, -73, -74, -75, -76, -77, -78, -79, -80, -81, -82, -83, -84, -85, -86, -87, -88, -89, -90, -91, -92, -93, -94, -95, -96, -97, -98, -99, -100};

    // int initialSum = 0;
    // int finalSum = 0;
    // int count = 0;
    // int size = nums.size();

    // for (int i = 0; i < size; ++i)
    // {
    //     initialSum += nums[i];
    //     if (i == size - 1)
    //     {
    //         break;
    //     }
    //     for (int j = i + 1; j < size; ++j)
    //     {
    //         finalSum += nums[j];
    //     }
    //     if (initialSum >= finalSum)
    //         ++count;
    //     finalSum = 0;
    // }

    // cout << count;

    //   we need to optimized it with the Efficient Algorithm..
    // long sum = accumulate(nums.begin(), nums.end(), 0);

    // long long sum = accumulate(nums.begin(), nums.end(), 0LL); // Use 0LL to prevent overflow
    // long long prefixSum = 0;
    // int count = 0;
    // long size = nums.size();

    // for (long i = 0; i < size; ++i)
    // {
    //     if (i == size - 1)
    //     {
    //         break;
    //     }
    //     prefixSum += nums[i];
    //     if (2 * prefixSum >= sum)
    //     { // Simplified condition
    //         ++count;
    //     }
    // }
    // return count;

    //
}
