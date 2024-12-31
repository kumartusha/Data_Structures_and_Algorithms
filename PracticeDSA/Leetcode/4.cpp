#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;

// int main()
// {
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
// vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// int row = mat.size();
// int col = mat[0].size();

// for (auto &element : mat)
// {
//     reverse(element.begin(), element.end());
// }

// for (int i = 0; i < row; ++i)
// {
//     for (int j = i; j < col; ++j)
//     {
//         swap(mat[i][j], mat[j][i]);
//     }
// }
// for (auto elements : mat)
// {
//     for (auto element : elements)
//     {
//         cout << element << " ";
//     }
//     cout << endl;
// }

// ****************************************************************************************************************************************
// vector<int> a = {1, 2, 1, 3, 1};
// vector<int> b = {3, 1, 3, 4, 1};

// set<int> mySet(b.begin(), b.end());
// vector<int> ans;
// for (auto element : mySet)
// {
//     // if (a.erase(element))
//     if (find(a.begin(), a.end(), element) != a.end())
//     {
//         ans.push_back(element);
//     }
// }

// for (auto element : mySet)
// {
//     cout << element << " ";
// }

// Sample Input 1 : 2 Sample Output 1 : 1 2 5 6 3 4 Sample Input 2 : 4 Sample Output 2 : 1 2 3 4 17 18 19 20 5 6 7 14 15 16 8 9 12 13 10 11

// int number = 4;
// int row = 4;
// int col = row * 2;
// int value = 1;

// for (int i = 0; i < row; ++i)
// {
//     for (int j = i; j < row; ++j)
//     {
//         cout << value++ << " ";
//     }
//     cout << endl;
// }

// for (int i = 0; i < row; ++i)
// {
//     for (int j = 0; j <= i; ++j)
//     {
//         cout << value++ << " ";
//     }
//     cout << endl;
// }
// }

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// Node *reversed(Node *&head)
// {
//     //  so here we need to write the logic for reverse the ll.
//     Node *prev = nullptr;
//     Node *curr = head;
//     Node *next = nullptr;

//     while (curr)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }
// Node *insertatend(int number, Node *&head, Node *&tail)
// {
//     //  it will take a number and return the linked list node..
//     Node *newNode = new Node(number);
//     if (head == nullptr && tail == nullptr)
//     {
//         //    if head and tail are nullptr means that they are in nullptr situation.
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         //     if the linkedlist is not nullptr means that we need to add into the last.
//         head->next = newNode;
//         tail = newNode;
//     }
//     return head;
// }

// Node *addTwoNumbers(Node *num1, Node *num2)
// {
//     //  Edge Cases.
//     if (num1 == nullptr && num2 != nullptr)
//     {
//         return num2;
//     }
//     if (num1 != nullptr && num2 == nullptr)
//     {
//         return num1;
//     }
//     //   first reverse the linked list..
//     num1 = reversed(num1);
//     num2 = reversed(num2);

//     //   here we have the reversed linked list now we nee to perform summation.
//     int carry = 0;
//     Node *temp1 = num1;
//     Node *temp2 = num2;
//     Node *head = nullptr;
//     Node *tail = nullptr;

//     while (temp1 != nullptr && temp2 != nullptr)
//     {
//         int sum = temp1->data + temp2->data + carry;
//         int node = sum % 10;
//         carry = sum / 10;
//         head = insertatend(node, head, tail);

//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }

//     //  if the temp1 is having some element.
//     while (temp1 != nullptr)
//     {
//         int sum = temp1->data + carry;
//         int node = sum % 10;
//         carry = sum / 10;
//         head = insertatend(node, head, tail);

//         temp1 = temp1->next;
//     }
//     while (temp2 != nullptr)
//     {
//         int sum = temp2->data + carry;
//         int node = sum % 10;
//         carry = sum / 10;
//         head = insertatend(node, head, tail);

//         temp2 = temp2->next;
//     }
//     if (carry != 0)
//     {
//         head = insertatend(carry, head, tail);
//     }
//     return reversed(head);
// }

// int main()
// {

//     //     Input: nums = [1,1,1,1,1], target = 3
//     // Output: 5
//     // Explanation: There are 5 ways to assign symbols to make the sum of nums be target 3.
//     // -1 + 1 + 1 + 1 + 1 = 3
//     // +1 - 1 + 1 + 1 + 1 = 3
//     // +1 + 1 - 1 + 1 + 1 = 3
//     // +1 + 1 + 1 - 1 + 1 = 3
//     // +1 + 1 + 1 + 1 - 1 = 3
// }

// auto binarySearch(vector<int> nums, int target)
// {
//     return binary_search(nums.begin(), nums.end(), target);
// }
// // Function to search a given number in row-column sorted matrix.
// int main()
// {
//     vector<vector<int>> mat = {{3, 4, 9}, {2, 5, 6}, {9, 25, 27}};
//     int target = 9;
//     bool isTrue = false;
//     for (auto elements : mat)
//     {
//         if (binarySearch(elements, target))
//         {
//             cout << "Found";
//         }
//     }
//     cout << isTrue;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main()
{

    vector<int> arr = {53, 57, 77, 15, 78, 58, 17, 63, 90, 73, 68, 82, 40, 68, 22, 52, 81, 92, 80, 37, 62, 17, 76, 67, 55, 56, 20, 22, 37, 71, 65, 7, 30, 93, 1, 1, 90, 46, 36, 74, 0, 37, 76, 69, 39, 97, 39, 30, 14, 89, 74, 71, 27, 79, 51, 45, 51, 54, 90, 35, 68, 38, 7, 82, 55, 65, 14, 40, 20, 64, 89, 95, 8, 43, 14, 88, 5, 24, 72, 9, 56, 17, 60, 91, 16, 94, 47, 15, 33};
    sort(arr.begin(), arr.end());

    //   Find the maximum longest consecutive sequence..
    int count = 1;
    int maxCount = INT_MIN;
    int size = arr.size();
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] == arr[i - 1] + 1)
        {
            ++count;
        }
        else
        {
            maxCount = max(maxCount, count);
            count = 1;
        }
    }

    cout << maxCount;
}