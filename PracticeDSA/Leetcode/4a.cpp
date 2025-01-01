#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
#include <set>
using namespace std;
// int main()
// {
//     string s = "011101";
//     int size = s.size();
//     int minCount = INT_MIN;

//     for (int i = 0; i < size - 1; ++i)
//     {
//         int size1 = i + 1;
//         int size2 = size - i;
//         string str1 = s.substr(0, size1);
//         string str2 = s.substr(i + 1, size2);

//         int tot_count = count(str1.begin(), str1.end(), '0') + count(str2.begin(), str2.end(), '1');

//         minCount = max(tot_count, minCount);
//     }

//     cout << minCount;
// }

int main()
{
    // arr = [10, 2, -2, -20, 10], k = -10
    vector<int> arr = {10, 2, -2, -20, 10};
    int k = -10;
    int count = 0;
    int size = arr.size();

    for (int i = 0; i < size; ++i)
    {
        int sum = 0;
        for (int j = i; j < size; ++j)
        {
            sum += arr[j];
            if (sum == k)
                ++count;
        }
        // cout << sum << " ";
    }
}