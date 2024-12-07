#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // COnstructor for creating the new Node..
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //     Destructor fot free the memory..
    //  ~Node(){

    //  }
};

Node *insertAtTail(Node *&head, Node *&tail, int data)
{
    // Initially the head is null so we want to create the linked list according to that..

    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        //  If the Linked list have the more than or equal to the 1 node in the list..
        tail->next = newNode;
        tail = newNode;
    }
}

void printLinkedList(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteNodeFromLL(Node *&head, Node *deleteNode)
{

    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == deleteNode->data)
        {
            prev->next = temp->next;
            temp->next = NULL;
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}

Node *reverseLinkedList(Node *&head)
{

    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

Node* createNode(Node *&head, Node *&tail, int data)
{
    // Initially the head is null so we want to create the linked list according to that..

    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        //  If the Linked list have the more than or equal to the 1 node in the list..
        tail->next = newNode;
        tail = newNode;
    }

}

Node* rotateLinkedList(Node* &head, int k){

vector<int> myVect;
Node* temp = head;

while(temp != NULL){
      myVect.push_back(temp -> data);
      temp = temp -> next;
}

//   Copy the rotated elements of the array..
  vector<int> rotated(myVect.size());
  int size = rotated.size();
  for(int i = 0; i < rotated.size(); ++i){
        rotated[(i + k) % size] = myVect[i];
  }
       Node* newHead = NULL;
       Node* newTail = NULL;

    for(auto element: rotated){
          createNode(newHead, newTail, element);
    }
    return newHead;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    //  Create the node and insert the node after it..
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);
    // insertAtTail(head, tail, 1);
    // insertAtTail(head, tail, 70);

    // tail -> next = head -> next -> next;
    // cout<<tail->next->data;

    // reverseLinkedList(head);
//   cout<<head->data<<endl;
//   cout<<tail->data;

    // printLinkedList(head);
    // head = rotateLinkedList(head, 4);
    // printLinkedList(head);



}