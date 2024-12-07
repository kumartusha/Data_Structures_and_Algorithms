#include <bits/stdc++.h>
using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     // COnstructor for creating the new Node..
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }

//     //     Destructor fot free the memory..
//     //  ~Node(){

//     //  }
// };

// Node *insertAtTail(Node *&head, Node *&tail, int data)
// {
//     // Initially the head is null so we want to create the linked list according to that..

//     Node *newNode = new Node(data);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         //  If the Linked list have the more than or equal to the 1 node in the list..
//         tail->next = newNode;
//         tail = newNode;
//     }
// }

// void printLinkedList(Node* &head){

//    Node* temp = head;
//    while( temp != NULL){
//        cout<<temp->data<<" -> ";
//        temp = temp->next;
//    }
//    cout<<"NULL"<<endl;
// }

// void deleteNodeFromLL(Node* &head, Node* deleteNode){

// Node* temp = head;
// Node* prev = NULL;
// while(temp != NULL){
//       if(temp->data == deleteNode->data){
//         prev->next = temp->next;
//         temp->next = NULL;
//         delete temp;
//         return;
//       }
//       prev = temp;
//       temp = temp->next;
// }
// }

// Node* reverseLinkedList(Node* &head){

//    Node* prev = NULL;
//    Node* curr = head;
//    Node* next;

//    while(curr){
//       next = curr->next;
//       curr->next = prev;
//       prev = curr;
//       curr = next;
//    }
// printLinkedList(prev);
// }

// int main()
// {

//     Node *head = NULL;
//     Node *tail = NULL;

//     //  Create the node and insert the node after it..
//     insertAtTail(head, tail, 10);
//     insertAtTail(head, tail, 20);
//     insertAtTail(head, tail, 30);
//     insertAtTail(head, tail, 40);
// insertAtTail(head, tail, 50);
// insertAtTail(head, tail, 60);
// insertAtTail(head, tail, 70);

//  Delete the node from the linked list..
//   Node* deleteNode = new Node(40);

// deleteNodeFromLL(head, deleteNode);
//     printLinkedList(head);
//     reverseLinkedList(head);

// }

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    //    Create a node using the constructor..
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    //    Destructor for deletinf the node.
    //  ~Node(){

    //  }
};

Node *insertAtTail(Node *&head, Node *&tail, int data)
{

    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        // If the linked list have more than or equal to 1 node in the list..
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void printList(Node *&head)
{

    Node *temp = head;

    cout << "NULL  <->  ";
    while (temp != NULL)
    {

        cout << temp->data << "  <->  ";
        temp = temp->next;
    }
    cout << "NULL";
}

// // void deleteStart(Node* &head){

// //      if(head == NULL){
// //         return;
// //      }else{
// //         Node* temp = head;
// //         head = head->next;
// //         head->prev = NULL;
// //      }
// // }

// // void deletePosNode(Node *&head, Node *&tail, int position)
// // {

// //     if (position == 1)
// //     {
// //         deleteStart(head);
// //         return;
// //     }
// //     else
// //     {
// //         // If the position are the mid value..

// //         Node *temp = head;
// //         Node* prev = NULL;
// //         int i = 1;
// //         while (i++ < position)
// //         {   prev = temp;
// //             temp = temp->next;
// //         }
// //         if(temp->next == NULL){
// //            prev->next = NULL;
// //            temp->prev = NULL;
// //            return;
// //         }
// //        temp->next->prev = prev;
// //        prev->next = temp->next;

// //     }
// // }

// void sortedInsert(Node* &head, int element){

//     Node* temp = head;
//     Node* prevVal = NULL;
//     Node* newNode = new Node(element);

//     while(temp != NULL){
//         cout<<"Inner";
//         if(element < temp->data && prevVal == NULL){
//             cout<<"First";
//         //   Insert at the first Position..
//         newNode->next = temp;
//         temp->prev = newNode;
//         head = newNode;
//          return;
//         }
//         else if(element < temp->data){
//             cout<<"THird";
//             // Insert at that position
//             newNode->next = temp;
//             newNode->prev = prevVal;
//             prevVal->next = newNode;
//             temp->prev = newNode;
//             return;
//         }else if(temp->next == NULL){
//             cout<<"Second";
//         // Handle the last position case.
//          newNode->prev = temp;
//          temp->next = newNode;
//           return;
//         }
//            prevVal = temp;
//            temp = temp->next;

//     }

// }

void reverseLinkedList(Node *&head)
{

    Node *previous = NULL;
    Node *curr = head;
    Node *next;

    while (curr)
    {
        //   Reverse the Linked List..
        next = curr->next;
        curr->prev = curr->next;
        curr->next = previous;
        previous = curr;
        curr = next;
    }
    printList(previous);

}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    //  Create the linked list..
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 9);
    insertAtTail(head, tail, 16);
    insertAtTail(head, tail, 25);
    insertAtTail(head, tail, 78);
    insertAtTail(head, tail, 34);
    insertAtTail(head, tail, 98);
    insertAtTail(head, tail, 100);
    insertAtTail(head, tail, 122);
    insertAtTail(head, tail, 345);

    // int element = 2;
    // sortedInsert(head, element);

    // printList(head);
    // Reverse the linked list..
    reverseLinkedList(head);

}