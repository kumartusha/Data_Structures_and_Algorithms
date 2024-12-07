#include <bits/stdc++.h>
using namespace std;

// class Node{

// public:
//    int data;
//    Node* left;
//    Node* right;
//    // Constructor to create a node..
//       Node(int data){
//          this->data = data;
//          this->right = NULL;
//          this->left = NULL;
//       }
// };

// Node* createBT(Node* root){
// //  We use the recursion so that we handle the base condition..

//   cout<<"Enter the Data:- ";
//   int data;
//   cin>>data;

//   if(data == -1){
//    return NULL;
//   }
//   root = new Node(data);

//   cout<<"Enter the data for inserting into the Left of "<<root->data<<":- "<<endl;
//   root->left = createBT(root -> left);

//   cout<<"Enter the data for inserting into the right of "<<root->data<<":- "<<endl;
//   root->right = createBT(root->right);

// //   return root;

// }

// void inorder_Traversal(Node* &root){

// if(root == NULL){
//    return;
// }

// inorder_Traversal(root->left);
// cout<<root->data<<" ";
// inorder_Traversal(root->right);

// }
// void preorder_Traversal(Node* &root){

// if(root == NULL){
//    return;
// }

// cout<<root->data<<" ";
// preorder_Traversal(root->left);
// preorder_Traversal(root->right);

// }
// void postorder_Traversal(Node* &root){

// if(root == NULL){
//    return;
// }

// postorder_Traversal(root->left);
// postorder_Traversal(root->right);
// cout<<root->data<<" ";

// }

// int main(){
// Node* root = NULL;
// root = createBT(root);
// inorder_Traversal(root);
// cout<<endl;
// preorder_Traversal(root);
// cout<<endl;
// postorder_Traversal(root);
// }
// int main(){
//   vector<int> vect = {1,2,3,4,5,6,7};
// }

//   Creation of the Binary Tree.

class Node
{
public:
   int data;
   Node *left;
   Node *right;

   Node(int data)
   {
      //   Constructor is used to create the Node..
      this->data = data;
      this->left = NULL;
      this->right = NULL;
   }
};

Node *createBinaryTree(Node *&root)
{

   cout << "Enter the data:- " << endl;
   int data;
   cin >> data;

   //  Base Case for the recursion..
   if (data == -1)
   {
      return NULL;
   }
   //    If we are the valid data to insert into the tree.
   root = new Node(data);

   cout << "Enter the data left of the " << root->data << ":- " << endl;
   //  Build the Left Part of the tree..
   root->left = createBinaryTree(root->left);

   cout << "Enter the data right of the " << root->data << ":- " << endl;
   //  Build the Right Part of the tree..
   root->right = createBinaryTree(root->right);

   return root;
}

void inOrderTraversal(Node *&root)
{

   if (root == NULL)
   {
      return;
   }

   //  Traverse into the Algorithm..
   inOrderTraversal(root->left);
   cout << root->data << " ";
   inOrderTraversal(root->right);
}

void preOrderTraversal(Node *&root)
{

   if (root == NULL)
   {
      return;
   }

   //  Traverse into the Algorithm..
   cout << root->data << " ";
   preOrderTraversal(root->left);
   preOrderTraversal(root->right);
}

void postOrderTraversal(Node *&root)
{

   if (root == NULL)
   {
      return;
   }

   //  Traverse into the Algorithm..
   postOrderTraversal(root->left);
   postOrderTraversal(root->right);
   cout << root->data << " ";
}

void leftPartStore(Node *&root, vector<int> &vect)
{

   if (root->left == NULL && root->right == NULL)
   {
      return;
   }

   vect.push_back(root->data);
   if (root->left)
   {
      leftPartStore(root->left, vect);
   }
   else
   {
      leftPartStore(root->right, vect);
   }
}

void leafNode(Node *&root, vector<int> &vect)
{

   if (root == NULL)
   {
      return;
   }

   if (root->left == NULL && root->right == NULL)
   {

      vect.push_back(root->data);
      return;
   }

   //   Inorder Traversal.
   leafNode(root->left, vect);
   leafNode(root->right, vect);
}

void rightPart(Node *&root, vector<int> &vect)
{

   if (root == NULL)
   {
      return;
   }

   if (root->left == NULL && root->right == NULL)
   {
      return;
   }

   //    Traverse to the right part of the subtree..
   if (root->right)
   {
      rightPart(root->right, vect);
   }
   else
   {
      rightPart(root->left, vect);
   }
   vect.push_back(root->data);
}

void leftView(Node *&root, vector<int> &store)
{
   //  We Need a queue for implementing the level order Traversal because its implementing using the BFS Algorithm..
   queue<Node *> q;
   store.push_back(root->data);
   q.push(root);
   q.push(NULL);

   while (!q.empty())
   {
      Node *temp = q.front();
      q.pop();

      if (temp == NULL)
      {
         if (!q.empty())
         {
            Node *print = q.front();
            store.push_back(print->data);
         }

         cout << endl;
         if (!q.empty())
         {
            q.push(NULL);
         }
      }
      else
      {
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
}

void levelOrderTraversal(Node *&root, vector<int> &store, map<int, int> &myMap)
{
   //  We Need a queue for implementing the level order Traversal because its implementing using the BFS Algorithm..
   queue<pair<int, Node *>> q;
   q.push(make_pair(0, root));

   while (!q.empty())
   {
      pair<int, Node *> front = q.front();
      q.pop();

      if (myMap.find(front.first) == myMap.end())
      {
         //    If the Value not find into the Queue with the same Key Value.
         myMap[front.first] = front.second->data;
      }

      // cout << temp->data << " ";
      if (front.second->left)
      {
         q.push(make_pair(front.first - 1, front.second->left));
      }
      if (front.second->right)
      {
         q.push(make_pair(front.first + 1, front.second->right));
      }
   }
   for(auto element: myMap){
         store.push_back(element.second);
   }
}

int main()
{

   //   Node* root = new Node(10);

   //   root->left = new Node(20);
   //   root->right = new Node(30);

   //   root->left->left = new Node(40);
   //   root->left->right = new Node(50);

   //   root->right->left = new Node(60);
   //   root->right->right = new Node(70);
   //   root = createBinaryTree(root);

   //
   //   Different type to create the binary tree is.
   Node *root = nullptr;
   root = createBinaryTree(root);

   //  Trevaresal for the tree.. :-  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
   //   1 2 4 -1 -1 5 8 -1 -1 9 -1 -1 3 6 -1 -1 7 -1 -1

   // inOrderTraversal(root);
   // cout<<endl;
   // preOrderTraversal(root);
   // cout<<endl;
   // postOrderTraversal(root);

   //   Level Order Traversal in the Binary Tree..
   // levelOrderTraversal(root);

   // vector<int> vect;
   //  leftPartStore(root, vect);
   //  leafNode(root , vect);
   //  rightPart(root -> right, vect);

   //   for(auto element: vect){
   //    cout<<element<<" ";
   //   }
   //   4 10 -1 5 5 -1 6 7 -1 8 8 -1 8 11 -1 3 4 -1 1 3 -1 8 6 -1 11 11 -1 5 8
   //  100 50 25 -1 30 -1 35 -1 -1 75 70 -1 -1 80 -1 -1 150 140 -1 -1 200 -1 -1
   // 28 -1 4 42 40 39 2 24 41 -1 -1 -1 -1 -1 17 15 37 45 18 -1 33 43 35 -1 -1 23 -1 -1 -1 -1 -1 -1 30 12 -1 -1 -1 -1 47 7 -1 -1 32 -1 -1
  // 1 2 3 -1 4 5 -1 6 -1 7 -1 8 -1 9 -1 -1 -1 -1 -1

   //  vector<int> store;
   // leftView(root , store);

   // for(auto element: store){
   //      cout<<element<<" ";
   // }

   vector<int> store;
   map<int, int> myMap;

   levelOrderTraversal(root, store, myMap);

   for(auto element: store){
        cout<<element<<" ";
   }
}
