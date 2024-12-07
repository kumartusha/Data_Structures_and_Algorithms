#include <bits/stdc++.h>
using namespace std;

// Creation of the single Node..
class Node{

public:
 int data;
 Node* left;
 Node* right;


    Node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;
    }
};

Node *inOrderTraversal(Node *&root)
{

    if (root == NULL)
    {
        return NULL;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
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
    vector<int> ans;

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {   
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
}

Node* insertIntoBST(Node* root, int data){
//   Base Case..
  if(root == NULL){
    root = new Node(data);
    return root;
  }
  
  if(data > root -> data){
    // Right Part insert in BST
    root -> right = insertIntoBST(root -> right, data);
  }else{
    // Left Part insert in BST.
    root -> left = insertIntoBST(root -> left, data);
  }
}

void takeInput(Node* &root){
   int data;
   cin >> data;

   while(data != -1){
   root = insertIntoBST(root, data);
    cin>> data;
   } 
}

int main(){

Node* root = NULL;

cout<<"Enter data to create BST:- ";
takeInput(root);

cout<<"Print the BST:- "<<endl;
levelOrderTraversal(root);

cout<<"Inorder Traversal:- ";
inOrderTraversal(root);

cout<<endl;
cout<<"PreOrder Traversal:- ";
preOrderTraversal(root);

cout<<endl;
cout<<"PostOrder Traversal:- ";
postOrderTraversal(root);





}