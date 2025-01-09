#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;

// bool isPrefix(string str1, string str2)
// {
// we need to check her that the str1 is the prefix and also the suffix of the str2 or not..
//     int size = str1.size();
//     int size2 = str2.size();

//     for (int i = 0; i < size; ++i)
//     {
//         if (str1[i] != str2[i])
//         {
//             return false;
//         }
//     }
//     // cout << "I m prefix";
//     //  If the flow here means that the prefix is exist... Now we need to find the suffix..
//     for (int i = size - 1, j = size2 - 1; i >= 0; --i, --j)
//     {
//         if (str1[i] != str2[j])
//         {
//             return false;
//         }
//     }
//     // cout << "I m Suffix";
//     cout << str1 << " " << str2 << endl;
//     return true;
// }

int main()
{
    // vector<string> words = {"a", "abb"};
    // int size = words.size();
    // int count = 0;

    // for (int i = 0; i < size; ++i)
    // {
    //     for (int j = i + 1; j < size; ++j)
    //     {
    //         if (isPrefix(words[i], words[j]))
    //         {
    //             ++count;
    //         }
    //     }
    // }

    //     cout << count;

    // string str1 = "tus";
    // string str2 = "tusharkumartus";

    // int len1 = str1.size(), len2 = str2.size();
    // // Prefix check
    // cout << str2.substr(0, len1) << endl;
    // int sz = len2 - len1;
    // cout << str2.substr(sz);

    // vector<int> arr = {19, 23, 15, 6, 6, 2, 28, 2};
    // int target = 2;
    // int size = arr.size();
    // bool isBreak = false;
    // vector<int> ans = {-1};

    // for (int i = 0; i < size; ++i)
    // {
    //     int sum = arr[i];
    //     for (int j = i + 1; j < size; ++j)
    //     {
    //         sum = sum + arr[j];
    //         if (sum == target)
    //         {
    //             isBreak = true;
    //             ans.clear();
    //             ans.push_back(++i);
    //             ans.push_back(++j);
    //             cout << "Hello";
    //             break;
    //         }
    //     }
    //     if (isBreak)
    //     {
    //         break;
    //     }
    // }

    // for (auto element : ans)
    // {
    //     cout << element << " ";
    // }
}