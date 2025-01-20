//  we need to implement the linked list from scratch and also need to reverse it.

#include <iostream>
using namespace std;

class LinkedList
{

    // we need to create the singly linked list.
public:
    int data;
    LinkedList *next;
    LinkedList(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void print(LinkedList *&head)
{

    LinkedList *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

void insertAtHead(LinkedList *&head, LinkedList *&tail, int data)
{
    LinkedList *newNode = new LinkedList(data);
    //  initially the head is null.
    if (head == nullptr)
    {
        //  means that we dont have any kind of linked list so we need to update the head and the tail pointer.
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        //  here we have the linked list if it may be the on or more than one node..
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(LinkedList *&head, LinkedList *&tail, int data)
{
    LinkedList *newNode = new LinkedList(data);
    //  initially the head is null.
    if (tail == nullptr)
    {
        //  means that we dont have any kind of linked list so we need to update the head and the tail pointer.
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        //  here we have the linked list if it may be the on or more than one node..
        tail->next = newNode;
        tail = newNode;
    }
}

LinkedList *reverseLinkedList(LinkedList *&head)
{
    LinkedList *prev = nullptr;
    LinkedList *next = nullptr;

    while (head)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}
int main()
{

    LinkedList *head = nullptr;
    LinkedList *tail = nullptr;

    //  craete the linked list and add the nodes on the head;
    // insertAtHead(head, tail, 10);
    // print(head);
    // insertAtHead(head, tail, 20);
    // print(head);
    // insertAtHead(head, tail, 30);
    // print(head);
    // insertAtHead(head, tail, 40);
    // print(head);
    // insertAtHead(head, tail, 50);
    // print(head);

    //  For reverse the Linked List.
    // LinkedList *newHead = reverseLinkedList(head);
    // print(newHead);

    insertAtTail(head, tail, 10);
    print(head);
    insertAtTail(head, tail, 20);
    print(head);
    insertAtTail(head, tail, 30);
    print(head);
    insertAtTail(head, tail, 40);
    print(head);
    insertAtTail(head, tail, 50);
    print(head);

    int k = 4;
    //  we need to left rotate the linked list k time..
}