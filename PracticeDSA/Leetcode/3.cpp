// #include <iostream>
// using namespace std;
// #include <vector>

// int main()
// {
//     vector<int> nums = {-1,-4,-1,4};
//     int count = 0;
//     int size = nums.size();

//     for (int i = 0; i < size - 2; ++i)
//     {
//         if (nums[i] + nums[i + 2] == nums[i + 1] / 2.0)
//         {

//             ++count;
//         }
//     }
//     // cout << count;
// }

// Revision

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> vect = {54,56,567,445,54455,6555,454,34};
//     // sort(vect.begin(), vect.end());

//     sort(vect.begin(), vect.end(), greater<int>());
//     for(auto element: vect){
//           cout<<element<<" ";
//     }

// }

#include <iostream>
#include <climits>
#include <queue>
#include <algorithm>
using namespace std;

// int main()
// {
//     queue<int> given;
//     given.push(10);
//     given.push(6);
//     given.push(8);
//     given.push(12);
//     given.push(3);

//     queue<int> myQueue;
//     // // while (!given.empty())
//     // // {
//     // //     cout << given.front() << " ";
//     // //     given.pop();
//     // // }
//     // int size = given.size();
//     // for (int i = size - 1; i >= 0; --i)
//     // {
//     //     cout << myQueue[i] << " ";
//     // }
// }

int main()
{

    // vector<int> arr = {5, 2, 1, 7};
    // int length = 0;
    // int maxLength = INT_MIN;
    // //  we need to find the maximum subarray length in a single array.
    // int size = arr.size();

    // for (int i = 0; i < size; ++i)
    // {
    //     for (int j = 0; j < size; ++j)
    //     {
    //         // Here we write the logic for this question in terms of the i and j;
    //         length = j - i + 1;
    //         if (length > maxLength)
    //         {
    //             maxLength = length;
    //         }
    //     }
    // }
    // cout << maxLength;

    vector<int> myvect = {1, 4, 45, 6, 10, 8};
    int target = 16;

    int size = myvect.size();
    sort(myvect.begin(), myvect.end());
    int first = 0;
    int last = size - 1;

    for (int i = 0; i < size; ++i)
    {
        int sum = myvect[first] + myvect[last];
        if (sum == target)
        {
            return true;
        }
        else if (sum < target)
        {
            ++first;
        }
        else
        {
            --last;
        }
    }
}