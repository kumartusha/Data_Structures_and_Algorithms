#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Input: arr[] = [-1, 1, 5, 5, 7], target = 6
    // Output: 3
    // Explanation: There are 2 pairs which sum up to 6 : {1, 5}, {1, 5} and {-1, 7}.

    vector<int> arr = {-1, 1, 5, 5, 7};
    int target = 6;

    // int count = 0;

    // for (int i = 0; i < size; ++i)
    // {
    //     for (int j = i + 1; j < size; ++j)
    //     {
    //         if (arr[i] + arr[j] == target)
    //         {
    //             ++count;
    //         }
    //     }
    // }

    // cout << count;

    //  Usin the two pointer approach..
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    int count = 0;
    int maxCount = 0;

    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (sum == target)
        {
            ++count;
            maxCount += count;
            --end;
        }
        else if (sum > target)
        {
            --end;
        }
        else
        {
            ++start;
        }
    }
    cout << maxCount;
}