// //  Creation of the binary tree and the implementation.
// #include <iostream>
// #include <queue>
// #include <algorithm>
// using namespace std;

// class BinaryTree
// {
// public:
//     //  declare the instances that will be required for creation of the binary tree.
//     BinaryTree *left;
//     int data;
//     BinaryTree *right;

//     // constructor for creating the new node whenever the constructor will be called..
//     BinaryTree(int data)
//     {
//         this->data = data;
//         this->right = NULL;
//         this->left = NULL;
//     }

//     //  Destructor for deleting the unnecessary object memory from the collections..
//     //   ~BinaryTree(){
//     //   }
// };

// BinaryTree *buildTree(BinaryTree *&root)
// {
//     // here are the logic to create the binary tree.
//     int data;
//     cout << "Enter the data:- "<<endl;
//     cin >> data;

//     root = new BinaryTree(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     //  if user enter something different to the -1 then call the recursion.

//     cout << "Enter the data for the left of the " << root->data << endl;
//     buildTree(root->left);
//     cout << "Enter the data for the right of the " << root->data << endl;
//     buildTree(root->right);

//     return root;
// }

// // Use the preorder traversal for printing the elements..
// void preorder(BinaryTree *&root)
// {

//     if (root == NULL)
//     {
//         // cout<<"The Binary tree is Empty";
//         return;
//     }
//     if (root->data != -1)
//     {
//         cout << root->data << " ";
//     }
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(BinaryTree *&root)
// {

//     if (root == NULL)
//     {
//         // cout<<"The Binary tree is Empty";
//         return;
//     }

//     inorder(root->left);
//     if (root->data != -1)
//     {
//         cout << root->data << " ";
//     }
//     inorder(root->right);
// }
// void postOrder(BinaryTree *&root)
// {

//     if (root == NULL)
//     {
//         // cout<<"The Binary tree is Empty";
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     if (root->data != -1)
//     {
//         cout << root->data << " ";
//     }
// }

// void levelOrderTraversal(BinaryTree *&root, vector<vector<int>> &store)
// {
//     //  for implementing the Level order Traversal we need to implement the concept of the BFS..
//     //  and also it will implementing by the Queue.
//     queue<BinaryTree *> myQueue;
//     myQueue.push(root);
//     myQueue.push(NULL);
//     vector<int> tempo;
//     bool flag = false;

//     while (!myQueue.empty())
//     {
//         BinaryTree *temp = myQueue.front();
//         myQueue.pop();

//         if (temp == NULL)
//         {
//               if(!flag){
//                 reverse(tempo.begin(), tempo.end());
//                 store.push_back(tempo);
//                 tempo.clear();
//               }
//               flag = !flag;
//             //   cout<<endl;
//               if (!myQueue.empty())
//               {
//                 myQueue.push(NULL);
//               }

//         }
//         else
//         {
//             // we need to print the data and push the childs into the tree..
//             // if(temp->data != -1){
//             //     cout << temp->data << " ";
//             // }
//             tempo.push_back(temp->data);

//             if (temp->left)
//             {
//                 myQueue.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 myQueue.push(temp->right);
//             }
//         }
//     }
// }

// int main()
// {

//     //    Creating the object of the class...
//     BinaryTree *root = NULL;

//     //   Creation of the binary tree.
//     root = buildTree(root);

//     //     print the binary tree..
//     // cout << "Preorder of the Tree"<<endl;
//     // preorder(root);
//     // cout<<"Inorder of the Tree"<<endl;
//     // inorder(root);
//     // cout<<"PostOrder of the Tree"<<endl;
//     // postOrder(root);

//     // Level order traversal using the Breadth First Search Algorithm..
//     vector<vector<int>> store;
//     levelOrderTraversal(root, store);

//     for(auto element: store){
//         for(auto element2: element){
//             cout<<element2<<" ";
//         }
//         cout<<endl;
//     }

//     // 3 5 11 -1 -1 13 -1 -1 7 -1 2 -1 -1
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = {10, 30, 20, 5};
    int target = 25;
    vector<int> ans;

    //  we need to find the pair from the main array that sum is less than the target element.

    sort(arr.begin(), arr.end());

    int start = 0;
    int end = arr.size() - 1;
    int closestMin = INT_MAX;
    int maxAbsDiff = INT_MIN;

    for (int i = 0; i < arr.size(); ++i)
    {
        int abs = arr[end] - arr[start];
        int sum = arr[start] + arr[end];
        if (sum <= target && abs > maxAbsDiff && sum - target < INT_MAX)
        {
            cout << arr[start] << " " << arr[end] << endl;
        }
    }

    // for (auto element : arr)
    // {
    //     cout << element << " ";
    // }
}
