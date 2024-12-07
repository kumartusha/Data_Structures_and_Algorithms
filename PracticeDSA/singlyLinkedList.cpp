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

Node *createNode(Node *&head, Node *&tail, int data)
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

Node *rotateLinkedList(Node *&head, int k)
{

    vector<int> myVect;
    Node *temp = head;

    while (temp != NULL)
    {
        myVect.push_back(temp->data);
        temp = temp->next;
    }

    //   Copy the rotated elements of the array..
    vector<int> rotated(myVect.size());
    int size = rotated.size();
    for (int i = 0; i < rotated.size(); ++i)
    {
        rotated[(i + k) % size] = myVect[i];
    }
    Node *newHead = NULL;
    Node *newTail = NULL;

    for (auto element : rotated)
    {
        createNode(newHead, newTail, element);
    }
    return newHead;
}
// Node *reverse(Node *&secondLeft, Node *&firstRight)
// {
//     firstRight->next = NULL;
//     Node *curr = secondLeft;
//     Node *prev = NULL;
//     Node *next = NULL;

//     while (curr)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }

//     // printLinkedList(firstRight);
//     // printLinkedList(secondLeft);
//     return prev;
// }
// Node *reverse(Node *&head)
// {
//     Node *curr = head;
//     Node *prev = NULL;
//     Node *next = NULL;

//     while (curr)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }

//     // printLinkedList(firstRight);
//     // printLinkedList(secondLeft);
//     return prev;
// }

// Node *reverseBetween(Node *&head, int left, int right)
// {

//     //   if the head is pointing to the null node..
//     if (head == NULL || head -> next == NULL)
//     {
//         return head;
//     }
//     /// If the linked list contain more than or equal to the 2 node.
//     // ListNode* left = NULL;
//     // ListNode* right = NULL;

//     Node*newNode = new Node(-1);
//     newNode->next = head;

//     Node*firstLeft = newNode;
//     Node*secondLeft = NULL;
//     Node*firstRight = newNode;
//     Node*secondRight = NULL;
//     int i = 1;
//     //  Pointing to the left pointer to the linked list..
//     while (i++ < left)
//     {
//         firstLeft = firstLeft->next;
//     }
//     secondLeft = firstLeft -> next;

//     //   Pointing to the right pointer in the linked list..
//     i = 0;
//     while (i++ < right)
//     {
//         firstRight = firstRight->next;
//     }
//     secondRight = firstRight->next;

//     // Join the first Part of the linked listt..

//     firstLeft->next = reverse(secondLeft, firstRight);
//     secondLeft->next = secondRight;

//     return newNode->next;
// }

// int gcdCalculate(int a, int b){

// //  Here we need to implement the function of the GCD Calculate..
//    while(a != b){
//     if(a > b){
//         a = a - b;
//     }else{
//         b = b - a;
//     }
//    }
// return a;
// }

// int main()
// {

//     Node *head = NULL;
//     Node *tail = NULL;

//     //  Create the node and insert the node after it..
//     insertAtTail(head, tail, 5);
//     insertAtTail(head, tail, 2);
//     insertAtTail(head, tail, 13);
//     insertAtTail(head, tail, 3);
//     insertAtTail(head, tail, 8);
//     // insertAtTail(head, tail, 6);
//     // insertAtTail(head, tail, 7);
//     // insertAtTail(head, tail, 8);
//     // insertAtTail(head, tail, 9);
//     // insertAtTail(head, tail, 10);
//     // insertAtTail(head, tail, 1);
//     // insertAtTail(head, tail, 70);

//     // tail -> next = head -> next -> next;
//     // cout<<tail->next->data;

//     // reverseLinkedList(head);
//     //   cout<<head->data<<endl;
//     //   cout<<tail->data;

//     // printLinkedList(head);
//     // head = rotateLinkedList(head, 4);
//     // printLinkedList(head);

//     // //  int left = 2, right = 4;
//     // head = reverseBetween(head, 1, 4);

//     // printLinkedList(head);
//     // head = reverse(head);
//     // printLinkedList(head);

//     // Node *curr = head;
//     // Node *nextPtr = head->next;
//     // while (nextPtr)
//     // {
//     //     if (curr->data > nextPtr->data)
//     //     {
//     //         nextPtr = nextPtr->next;
//     //         curr->next = nextPtr;
//     //     }else{
//     //         curr = nextPtr;
//     //         nextPtr = nextPtr -> next;
//     //     }
//     // }
//     // head = reverse(head);
//     // printLinkedList(head);

//      cout<<gcdCalculate(36,12);

// }