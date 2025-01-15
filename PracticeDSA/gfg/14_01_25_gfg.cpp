#include <iostream>
#include <vector>
#include <set>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    // string str = "Welcome to Coding Ninjas";
    // string s = "";
    // vector<string> myVect;

    // for (auto element : str)
    // {
    //     if (!isalpha(element))
    //     {
    //         myVect.push_back(s);
    //         s.clear();
    //     }
    //     s += element;
    // }
    // myVect.push_back(s);
    // s.clear();

    // reverse(myVect.begin(), myVect.end());

    // for (auto element : myVect)
    // {
    //     s += element;
    //     }

    //     Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15
    // Output: 6
    // Explanation: Subarrays with sum = 15 are [5, 2, 7, 1], [10, 5] and [10, 5, 2, 7, 1, -10]. The length of the longest subarray with a sum of 15 is 6.

    //  For solving this Question we need to maintain a hashmap and also the start and the end point to find the length of the longest subarray.

    // vector<int> arr = {10, 5, 2, 7, 1, -10};
    // int size = arr.size();
    // int target = 15;
    // int maxSize = INT_MIN;
    // int start = 0;
    // int end = 0;

    // for (int i = 0; i < size; ++i)
    // {
    //     int sum = 0;
    //     for (int j = i; j < size; ++j)
    //     {
    //         sum += arr[j];
    //         if (sum == target)
    //         {
    //             int length = j - i + 1;
    //             maxSize = max(maxSize, length);
    //         }
    //     }
    // }
    // cout << maxSize;

    //  we use the hashmap for solving this Question..
    // int currSum = 0;
    // map<int, int> myMap;

    // for (int i = 0; i < size; ++i)
    // {
    //     currSum += arr[i];

    //     if (currSum == target)
    //     {
    //         // here we find the first array.
    //         start = 0;
    //         end = i;
    //         maxSize = max(maxSize, end - start + 1);
    //     }

    //     //     check into the map.
    //     if (myMap.find(currSum - target) != myMap.end())
    //     {
    //         //  find the array so mark the start and the end point.
    //         start = myMap[currSum - target] + 1;
    //         end = i;
    //         maxSize = max(maxSize, end - start + 1);
    //     }

    //     //  mark the entry for this iteration..(Need to update).
    // myMap[currSum] = i;
    // }
    // if (maxSize == INT_MIN)
    // {
    //     cout << 0;
    // }
    // cout << maxSize;

    // vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int rows = matrix.size();
    // int cols = matrix[0].size();
    // int n = 3;

    // //  we need to find the only the diagonal sum for the matrix.
    // int sum = 0;
    // for (int i = 0; i < rows; ++i)
    // {
    //     for (int j = 0; j < cols; ++j)
    //     {
    //         if (i == j)
    //         {
    //             sum = sum + matrix[i][j];
    //         }
    //         else if (i + j + 1 == n)
    //         {
    //             sum = sum + matrix[i][j];
    //         }
    //     }
    // }
    // cout << sum;

    //  Minimize the  XOR.
    // Input: num1 = 3, num2 = 5
    // Output: 3
    // Explanation:
    // The binary representations of num1 and num2 are 0011 and 0101, respectively.
    // The integer 3 has the same number of set bits as num2, and the value 3 XOR 3 = 0 is minimal.

    //  we need to perform the 2 task for this Queestion..
    //   1. Find the element which have the same no. of bit.

    // int demoNum2 = num2;
    // int oneBit = 0;
    // int zeroBit = 0;
    // int ans = -1;

    // while (num2)
    // {
    //     int bit = num2 & 1;
    //     if (bit == 1)
    //     {
    //         ++oneBit;
    //     }
    //     else if (bit == 0)
    //     {
    //         ++zeroBit;
    //     }
    //     num2 = num2 >> 1;
    // }
    // int minXor = INT_MAX;
    // // cout << zeroBit << " " << oneBit;

    // for (int i = 0; i < demoNum2; ++i)
    // {
    //     int demoOneBit = 0;
    //     int element = i;
    //     while (element)
    //     {
    //         int demoBit = element & 1;
    //         if (demoBit == 1)
    //         {
    //             ++demoOneBit;
    //         }
    //         element = element >> 1;
    //     }

    //     if (demoOneBit == oneBit)
    //     {
    //         //  find the minimum XOR OPeration..
    //         // minXor = min(i ^ num1, minXor);
    //         if (minXor > i ^ num1)
    //         {
    //             minXor = i ^ num2;
    //             ans = i;
    //         }
    //     }
    // }

    // cout << ans;

    int oneBit = 0;
    int zeroBit = 0;
    int num1 = 10;
    int num2 = 10;
    int demoNum2 = num2;
    int ans = -1;

    while (num2)
    {
        int bit = num2 & 1;
        if (bit == 1)
        {
            ++oneBit;
        }
        else if (bit == 0)
        {
            ++zeroBit;
        }
        num2 = num2 >> 1;
    }
    int minXor = INT_MAX;
    // cout << oneBit << " " << zeroBit;

    for (int i = 0; i < demoNum2; ++i)
    {
        int demoOneBit = 0;
        int element = i;
        while (element)
        {
            int demoBit = element & 1;
            if (demoBit == 1)
            {
                ++demoOneBit;
            }
            element = element >> 1;
        }

        if (demoOneBit == oneBit)
        {
            //  find the minimum XOR OPeration..
            // minXor = min(i ^ num1, minXor);
            int demo = i ^ num1;
            if (minXor > demo)
            {
                minXor = i ^ num1;
                ans = i;
            }
        }
    }
    cout << ans;
}