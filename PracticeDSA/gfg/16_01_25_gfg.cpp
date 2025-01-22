// //  we need to implement the linked list from scratch and also need to reverse it.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
// string str = "d-cba";
// reverse(str.begin(), str.end());

// cout << str;

// bitset<4> number(12);
// bitset<4> newNum = number;

// cout << typeid(newNum).name();

// int n = 20;
// int k = 6;

// string str = "";
// while (n)
// {
//     int bit = n & 1;
//     str = to_string(bit) + str;
//     n = n >> 1;
// }
// cout << str;
// for (int i = str.length() - 1; k > 0; --k, --i)
// {
//     if (str[i] == '0')
//     {
//         str[i] = '1';
//     }
//     else
//     {
//         str[i] = '0';
//     }
// }
// cout << str;

// cout << stoi(str, nullptr, 2);
// }

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

LinkedList *rotateLinkedList(LinkedList *&head, LinkedList *&tail, int k)
{
    //  we need to rotate the Linkedlist.

    LinkedList *temp = head;

    for (int i = 0; i < k; ++i)
    {
        tail->next = head;
        head = head->next;
        temp->next = NULL;
        tail = temp;
        temp = head;
    }

    cout << temp->data << " " << head->data << " " << tail->data;
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

LinkedList *addTwoLists(LinkedList *num1, LinkedList *num2)
{
    //  Edge Case if both the string have the null value and we need to correspondence List.
    if (!num1)
    {
        return num2;
    }
    if (!num2)
    {
        return num1;
    }
    num1 = reverseLinkedList(num1);
    num2 = reverseLinkedList(num2);

    int carry = 0;
    LinkedList *newHead = NULL;
    LinkedList *newTail = NULL;

    while (num1 != NULL && num2 != NULL)
    {
        int sum = num1->data + num2->data + carry;
        int node = sum % 10;
        carry = sum / 10;

        //  Create the Linked list.
        insertAtTail(newHead, newTail, node);

        // Move the pointer to the next.
        num1 = num1->next;
        num2 = num2->next;
    }

    while (num1 != NULL)
    {
        int sum = num1->data + carry;
        int node = sum % 10;
        carry = sum / 10;

        if (node)
        {
            //  Create the Linked list.
            insertAtTail(newHead, newTail, node);
        }

        // Move the pointer to the next.
        num1 = num1->next;
    }
    while (num2 != NULL)
    {
        int sum = num2->data + carry;
        int node = sum % 10;
        carry = sum / 10;

        if (node)
        {
            //  Create the Linked list.
            insertAtTail(newHead, newTail, node);
        }

        // Move the pointer to the next.
        num2 = num2->next;
    }
    if (carry)
    {
        insertAtTail(newHead, newTail, carry);
    }
    newHead = reverseLinkedList(newHead);
    return newHead;
}

int main()
{

    LinkedList *head1 = nullptr;
    LinkedList *head2 = nullptr;
    LinkedList *tail1 = nullptr;
    LinkedList *tail2 = nullptr;

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
    insertAtTail(head1, tail1, 0);
    // print(head1);
    insertAtTail(head1, tail1, 0);
    // print(head1);
    insertAtTail(head1, tail1, 6);
    // print(head1);
    insertAtTail(head1, tail1, 3);
    // print(head);

    insertAtTail(head2, tail2, 0);
    // print(head2);
    insertAtTail(head2, tail2, 7);
    // print(head2);
    // insertAtTail(head2, tail2, 20);
    // // print(head2);
    // insertAtTail(head2, tail2, 10);
    // print(head);

    // print(head1);
    // print(head2);

    // LinkedList *head1 = head;
    // LinkedList *head2 = head1;
    // print(head);
    // print(head2);

    LinkedList *newHead = addTwoLists(head1, head2);
    print(newHead);
    // print(head);
    // LinkedList *head2 = head;
    // head2 = reverseLinkedList(head2);
    // print(head);
    // print(head2);

    //  For reverse the Linked List.
    // LinkedList *newHead = reverseLinkedList(head);

    // insertAtTail(head, tail, 50);
    // print(head);
    // int k = 6;
    // rotateLinkedList(head, tail, k);
    //  we need to left rotate the linked list k time..
}
