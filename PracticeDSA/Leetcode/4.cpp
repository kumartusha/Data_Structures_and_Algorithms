#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    // vector<int> arr = {1, 1, 1, 1};
    // int target = 2;
    // //  First we use the hashmap...
    // int size = arr.size();
    // map<int, int> store;
    // int count = 0;
    // for (int i = 0; i < size; ++i)
    // {
    //     if (store.find(target - arr[i]) != store.end())
    //     {
    //         count += store[target - arr[i]];
    //     }
    //     store[arr[i]]++;
    // }

    // int row = mat.size();
    // int col = mat[0].size();

    // int start = 0;
    // int end = row * col - 1;
    // int target = 14;

    // while (start < end)
    // {
    //     //     if the searching element equals to the middle element..
    //     int mid = start + (end - start) / 2;

    //     if(mat[mid/col][mid%col] == target){
    //         cout<<"found;"
    //     }
    // }
    // cout << (start + end) / 2;
    // cout << (start + (end - start)) / 2;
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = mat.size();
    int col = mat[0].size();

    for (auto &element : mat)
    {
        reverse(element.begin(), element.end());
    }

    for (int i = 0; i < row; ++i)
    {
        for (int j = i; j < col; ++j)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for (auto elements : mat)
    {
        for (auto element : elements)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}