#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 5, 7};
    int target = 12;

    int size = arr.size();
    for (int i = 0; i < size; ++i)
    {
        int sum = 0;
        for (int j = i; j < size; ++j)
        {
            sum += arr[j];
            if (sum == target)
            {
                // Return 1-based indices
                cout << i + 1, j + 1;
            }
        }
    }
    // If no subarray is found
    return {-1};
}