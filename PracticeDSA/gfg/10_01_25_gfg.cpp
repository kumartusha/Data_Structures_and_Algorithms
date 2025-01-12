// Input: arr[] = [1, 2, 1, 3, 4, 2, 3], k = 4
// Output:  [3, 4, 4, 3]
// Explanation: Window 1 of size k = 4 is 1 2 1 3. Number of distinct elements in this window are 3.
// Window 2 of size k = 4 is 2 1 3 4. Number of distinct elements in this window are 4.
// Window 3 of size k = 4 is 1 3 4 2. Number of distinct elements in this window are 4.
// Window 4 of size k = 4 is 3 4 2 3. Number of distinct elements in this window are 3.

#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std;

int main()
{

    // vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    // int k = 4;
    // int size = arr.size();
    // vector<int> ans;
    // set<int> mySet;

    // for (int i = 0; i <= size - k; ++i)
    // {
    //     int size2 = 0;
    //     for (int j = i; j < k + i; ++j)
    //     {
    //         mySet.insert(arr[j]);
    //         size2 = mySet.size();
    //     }
    //     // cout << endl;
    //     ans.push_back(size2);
    //     mySet.clear();
    // }

    // for (auto element : ans)
    // {
    //     cout << element << " ";
    // }

    // vector<int> arr = {3, 8, 2, 5, 7, 6, 12};
    // int k = 4;

    // // for the sliding window technique we need to calculate the first window Sum.
    // int currSum = 0;
    // for (int i = 0; i < k; ++i)
    // {
    //     currSum += arr[i];
    // }
    // //  now we need to add the next element and remove the first element..
    // int size = arr.size();
    // int maxi = INT_MIN;

    // for (int i = 1; i <= size - k; ++i)
    // {
    //     currSum = currSum - arr[i - 1] + arr[i + k - 1];
    //     maxi = max(currSum, maxi);
    // }

    // cout << maxi;

    //     Input: s = "geeksforgeeks"
    // Output: 7
    // Explanation: "eksforg" is the longest substring with all distinct characters.

    // string str = "";
    // int maxLength = INT_MIN;

    // for (auto element : s)
    // {
    //     if (str.find(element) != string::npos)
    //     {
    //         cout << str << endl;
    //     }
    //     else
    //     {
    //         str.push_back(element);
    //     }
    // }

    // cout << maxLength;

    string s = "aaabaaa";
    string str = "";
    int maxLen = INT_MIN;
    for (auto element : s)
    {
        if (str.find(element) != string::npos)
        {
            int size = str.size();
            if (size > maxLen)
            {
                maxLen = size;
            }
            str.clear();
            str.push_back(element);
        }
        else
        {
            str.push_back(element);
        }
    }
    cout << maxLen;
}
