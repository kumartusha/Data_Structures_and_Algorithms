// #include <iostream>
// using namespace std;

// class Node
// {

// public:
//     int data;
//     Node *left;
//     Node *right;

//     //     Constructor for creeting the node structure..
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *createBST(Node *&root, int data)
// {

//     //  For Creating binary search tree based on the BST Condition..
//     if (root == NULL)
//     {
//         root = new Node(data);
//         return root;
//     }

//     //  BST Condition FulFill..
//     if (data > root->data)
//     {
//         root->right = createBST(root->right, data);
//     }
//     else
//     {
//         root->left = createBST(root->left, data);
//     }
//     return root;
// }

// void inOrder(Node *&root)
// {

//     if (root == NULL)
//     {
//         return;
//     }

//     inOrder(root->left);
//     cout << root->data << " ";
//     inOrder(root->right);
// }

// Node *maxElement(Node *&root)
// {

//     Node *temp = root;

//     while (temp->right != NULL)
//     {
//         temp = temp->right;
//     }
//     return temp;
// }

// Node *minElement(Node *&root)
// {

//     Node *temp = root;

//     while (temp->left != NULL)
//     {
//         temp = temp->left;
//     }
//     return temp;
// }

// Node *deleteBST(Node *&root, int element)
// {

//     if (root == NULL)
//     {
//         return NULL;
//     }

//     //      For Deleting Any Particular Element into the tree we need to reach to that node.
//     if (root->data == element)
//     {
//         // Deletion for the 0th Child
//         if (root->left == NULL && root->right == NULL)
//         {
//             delete root;
//             return NULL;
//         }
//         // Deletion for the 1th Child
//         //    Left Child
//         if (root->left != NULL && root->right == NULL)
//         {
//              Node* temp = root -> left;
//              delete root;
//              return temp;
//         }

//         //   Right Child
//         if (root->left == NULL && root->right != NULL)
//         {
//             Node* temp = root -> right;
//             delete root;
//             return temp;
//         }
//         // Deletion for the 2th Child
//         if(root -> left != NULL && root -> right != NULL){
//             //  This is the two child Condition.
//             int mini = minElement(root -> right) -> data;
//             root -> data = mini;
//             root -> right = deleteBST(root -> right, mini);
//             return root;
//         }
//     }
//     else if (root->data > element)
//     {
//         root->left = deleteBST(root->left, element);
//         return root;
//     }
//     else
//     {
//         root->right = deleteBST(root->right, element);
//         return root;
//     }
// }

// int main()
// {

//     Node *root = NULL;

//     int n;
//     cout << "Enter the how many elements are inserted into the tree:- ";
//     cin >> n;
//     int data;

//     for (int i = 0; i < n; ++i)
//     {
//         cout << "Enter The Element into tree:- ";
//         cin >> data;
//         root = createBST(root, data);
//     }

//     // //  Inorder Traversal..
//     // cout<<"The Minimum Value are:- "<<minElement(root) -> data<<endl<<" ";
//     // cout<<"The Maximum Value are::- "<<maxElement(root) -> data<<endl<<" ";

//      cout<<"Before the Deletion:- ";
//     inOrder(root);
//     deleteBST(root, 5);
//     cout<<endl;
//      cout<<"After the Deletion:- ";
//     inOrder(root);

// }