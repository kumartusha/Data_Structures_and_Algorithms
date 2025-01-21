// //  we need to implement the linked list from scratch and also need to reverse it.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // bitset<4> number(12);
    // bitset<4> newNum = number;

    // cout << typeid(newNum).name();

    int n = 20;
    int k = 6;

    string str = "";
    while (n)
    {
        int bit = n & 1;
        str = to_string(bit) + str;
        n = n >> 1;
    }
    cout << str;
    for (int i = str.length() - 1; k > 0; --k, --i)
    {
        if (str[i] == '0')
        {
            str[i] = '1';
        }
        else
        {
            str[i] = '0';
        }
    }
    cout << str;

    // cout << stoi(str, nullptr, 2);
}

// class LinkedList
// {

//     // we need to create the singly linked list.
// public:
//     int data;
//     LinkedList *next;
//     LinkedList(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// void print(LinkedList *&head)
// {

//     LinkedList *temp = head;

//     while (temp != nullptr)
//     {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "nullptr" << endl;
// }

// void insertAtHead(LinkedList *&head, LinkedList *&tail, int data)
// {
//     LinkedList *newNode = new LinkedList(data);
//     //  initially the head is null.
//     if (head == nullptr)
//     {
//         //  means that we dont have any kind of linked list so we need to update the head and the tail pointer.
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     else
//     {
//         //  here we have the linked list if it may be the on or more than one node..
//         newNode->next = head;
//         head = newNode;
//     }
// }

// void insertAtTail(LinkedList *&head, LinkedList *&tail, int data)
// {
//     LinkedList *newNode = new LinkedList(data);
//     //  initially the head is null.
//     if (tail == nullptr)
//     {
//         //  means that we dont have any kind of linked list so we need to update the head and the tail pointer.
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     else
//     {
//         //  here we have the linked list if it may be the on or more than one node..
//         tail->next = newNode;
//         tail = newNode;
//     }
// }

// LinkedList *rotateLinkedList(LinkedList *&head, LinkedList *&tail, int k)
// {
//     //  we need to rotate the Linkedlist.

//     LinkedList *temp = head;

//     for (int i = 0; i < k; ++i)
//     {
//         tail->next = head;
//         head = head->next;
//         temp->next = NULL;
//         tail = temp;
//         temp = head;
//     }

//     cout << temp->data << " " << head->data << " " << tail->data;
// }

// LinkedList *reverseLinkedList(LinkedList *&head)
// {
//     LinkedList *prev = nullptr;
//     LinkedList *next = nullptr;

//     while (head)
//     {
//         next = head->next;
//         head->next = prev;
//         prev = head;
//         head = next;
//     }
//     return prev;
// }
// int main()
// {

//     LinkedList *head = nullptr;
//     LinkedList *tail = nullptr;

//     //  craete the linked list and add the nodes on the head;
//     // insertAtHead(head, tail, 10);
//     // print(head);
//     // insertAtHead(head, tail, 20);
//     // print(head);
//     // insertAtHead(head, tail, 30);
//     // print(head);
//     // insertAtHead(head, tail, 40);
//     // print(head);
//     // insertAtHead(head, tail, 50);
//     // print(head);

//     //  For reverse the Linked List.
//     // LinkedList *newHead = reverseLinkedList(head);
//     // print(newHead);

//     insertAtTail(head, tail, 10);
//     print(head);
//     insertAtTail(head, tail, 20);
//     print(head);
//     insertAtTail(head, tail, 30);
//     print(head);
//     insertAtTail(head, tail, 40);
//     print(head);
//     // insertAtTail(head, tail, 50);
//     // print(head);

//     int k = 6;

//     rotateLinkedList(head, tail, k);
//     //  we need to left rotate the linked list k time..
// }
