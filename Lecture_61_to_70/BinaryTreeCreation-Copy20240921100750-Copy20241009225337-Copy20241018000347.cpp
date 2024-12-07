#include <bits/stdc++.h>
using namespace std;

// class Node
// {

// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int d)
//     {

//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *buildTree(Node *&root)
// {

//     cout << "Enter the data for the binary Tree" << endl;
//     int data;
//     cin >> data;

//     // Creating of the root node..
//     root = new Node(data);

//     //
//     if (data == -1)
//     {
//         return NULL;
//     }

//     cout << "Enter data for inserting in Left" << endl;
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in Right" << endl;
//     root->right = buildTree(root->right);

//     return root;
// }

// void levelOrderTraversal(Node *&root)
// {

//     //  At that time the tree have been created..
//     queue<Node *> q;
//     q.push(root);

//     q.push(NULL);

//     while (!q.empty())
//     {
//         Node *temp = q.front();

//         q.pop();

//         // Purana level complete traverse ho chuka hai..
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             { // Queue still has some child nodes..
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// int main()
// {

//     Node *root = NULL;

//     // Creating the Binary Tree

//     root = buildTree(root);

//     // Level Order Traversal in Binary Tree..
//     levelOrderTraversal(root);
// }

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    // Constructor to create a node....
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

    //    Destructor for free the space that aquire by the node.....
    ~Node()
    {
        int value = this->data;
        if (this->left != NULL && this->right != NULL)
        {
            this->left = NULL;
            this->right = NULL;
        }
        cout << "The Deleted element from the tree are:- " << value << endl;
    }
};

Node *buildBinaryTree(Node *&root)
{

    cout << "Enter the node Data:- " << endl;
    int data;
    cin >> data;

    // Creating the node for every recursive call for the left and right child of the node..
    root = new Node(data);

    //  This condition verify that any node containing the leaf node so return from there..
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for the left child of " << root->data << endl;
    root->left = buildBinaryTree(root->left);
    cout << "Enter the data for the right child of " << root->data << endl;
    root->right = buildBinaryTree(root->right);

    return root;
}

Node *inOrderTraversal(Node *&root, int &count)
{

    if (root == NULL)
    {
        return NULL;
    }

    inOrderTraversal(root->left, count);
    cout << root->data << " ";
    ++count;
    inOrderTraversal(root->right, count);
}

Node *preOrderTraversal(Node *&root)
{

    if (root == NULL)
    {
        return NULL;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

Node *postOrderTraversal(Node *&root)
{

    if (root == NULL)
    {
        return NULL;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

Node *levelOrderTraversal(Node *&root)
{

    //   Make Sure that whenever you implement the levelorder Traversal so the queue is mandatory for storing the data elements because its just like use of BFS Algorithm internally..

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    bool check = false;
    vector<int> ans;

    while (!q.empty())
    {

         

        Node *temp = q.front();

//    Left View of the tree..
        if(!check){
          ans.push_back(temp -> data);
          check = !check;   // true..
        } 

        q.pop();
        if (temp == NULL)
        {
            check = !check;                 // Left view 
            //  If equals to NULL.
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            //   Printing the data of the tree..
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
 
 cout<<"The left view of tree are: "<<endl;
 for(auto element: ans){
    cout<<element<<" ";
 }

}
int sum(Node *&root)
{
    //  If the root node is NULL..
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return root->data;
    }

    int left = sum(root->left);
    int right = sum(root->right);

    if (root->data == (left + right))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void rightOrderTraversal(Node *&root, vector<int> &store)
{

    //  If the root node is a null node..
    if (root == NULL)
    {
        return;
    }
    //   if the node is the leaf node of the tree..
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }

    // Recursive call for the left and the right tree..
    rightOrderTraversal(root->left, store);
    rightOrderTraversal(root->right, store);

    store.push_back(root->data);
}

void leafOrderTraversal(Node *&root, vector<int> &store)
{

    //  if the node has a null node..
    if (root == NULL)
    {
        return;
    }
    //  If the node is a leaf node..
    if (root->left == NULL && root->right == NULL)
    {
        store.push_back(root->data);
        return;
    }

    //     Inorder Traversal...
    leafOrderTraversal(root->left, store);
    leafOrderTraversal(root->right, store);
}

void leftOrderTraversal(Node *&root, vector<int> &store)
{

    //  Check if the node is the null node..
    if (root == NULL)
    {
        return;
    }
    store.push_back(root->data);
    //     Check if the node is the laef node.. in the tree..
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }

    leftOrderTraversal(root->left, store);
    leftOrderTraversal(root->right, store);
}

vector<int> boundaryTree(Node *&root)
{
    vector<int> store;
    store.push_back(root->data);
    // // If tree contain the null root node..
    // if(root == NULL){
    //     return store;
    // }
    // // Contain the element from the left order traversal..
    leftOrderTraversal(root->left, store);

    // store the leaf nodes using the inorder traversal.
    leafOrderTraversal(root, store);

    // Store the value of the right side node..
    rightOrderTraversal(root->right, store);
}

int heightBinaryTree(Node* &root){

      if(root == NULL){
        return 0;
      }

   int left = heightBinaryTree(root -> left);
   int right = heightBinaryTree(root -> right);

   int ans = min(left, right) + 1;
   return ans;

}

int main()
{

    Node *root = NULL;
    //   Data:- 3 5 9 -1 -1 11 -1 -1 7 17 -1 -1 -1
    //   Data2:- 100 50 25 -1 30 -1 35 -1 -1 75 70 -1 -1 80 -1 -1 150 140 -1 -1 200 -1 -1

//           1
//        /     \
//      2        3
//    /   \      / \
//   4     5   6     7
//    \
//      8   

    //  Create a Binary Tree..
    buildBinaryTree(root);

    // Traversals for the Binary Tree..
    cout << "The Inorder traversal are:- ";
    int count = 0;
    inOrderTraversal(root, count); // (Inorder Traversal)
    cout << endl;
    cout << "The no. of nodes are:- " << count << endl;
    // (Preorder Traversal)
    cout << "The PreOrder traversal are:- ";
    preOrderTraversal(root); // (PreOrder Traversal)
    cout << endl;
    // (PostOrder Traversal)
    cout << "The PostOrder traversal are:- ";
    postOrderTraversal(root); // (PostOrder Traversal)
    cout << endl;
    // Level Order Traversal for the Tree.
    cout << "The tree are stored in a memory like:- " << endl;
    levelOrderTraversal(root);

    // if(sum(root)){
    //     cout<<"The tree are the sum tree"<<endl;
    // }else{
    //   cout<<"The tree are not the sum tree."<<endl;
    // }

    // Boundary of the binary tree...
    // boundaryTree(root);

    cout<<"The maximum height of the tree are:- "<<heightBinaryTree(root);
}