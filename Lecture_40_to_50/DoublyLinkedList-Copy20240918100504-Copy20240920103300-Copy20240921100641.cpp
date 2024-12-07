#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    Node *prev;
    int data;
    Node *next;

    //  Constructor for creating a new node every time object are created..
    Node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->prev != NULL || this->next != NULL)
        {
            delete next, prev;
            this->next = NULL;
            this->prev = NULL;
        }
        cout << "The deleted data from the linked list is:- " << value << endl;
    }
};

// Traverse a linked List..
void printList(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//  Get the length of the linked list..
int getLength(Node *&head)
{

    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        ++count;
        temp = temp->next;
    }
    return count;
}

//    Insert At Head Function implemented here..
void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *node = new Node(data);
        head = node;
        tail = node;
        return;
    }
    else
    {
        // First create a node for adding into the linked list.
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Insert at Tail Function are implemented here..
void insertAtTail(Node *&tail, Node *&head, int data)
{
    if (tail == NULL)
    {
        Node *node = new Node(data);
        tail = node;
        head = node;
        return;
    }
    // First create a node for adding into the linked list.
    Node *newNode = new Node(data);

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{

    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    //  Creating the node for inserting into the linked list..
    Node *newNode = new Node(data);
    Node *curr = head;
    Node *next = head->next;
    int count = 1;

    // The temp node point to the position - 1 node
    while (count < position - 1)
    {
        next = next->next;
        curr = curr->next;
        ++count;
    }
    // Condition for inserting at the end of the linked list..
    if (curr->next == NULL)
    {
        // tail->next = newNode;
        // newNode->prev = tail;
        // tail = newNode;
        // return;

        insertAtTail(tail, head, data);
        return;
    }

    curr->next = newNode;
    newNode->prev = curr;
    newNode->next = next;
    next->prev = newNode;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    //  For the position 1 node in the linked list
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    else
    {
        //  Deletion of node from any particular position in the linkedlist..
        Node *prev = NULL;
        Node *curr = head;
        int count = 1;

        //  For reach the deleted node position. in the linked list......
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            ++count;
        }
        //   For the last node deletion in the linkedlist..
        if (curr->next == NULL)
        {
            tail = curr->prev;
            prev->next = NULL;

            curr->prev = NULL;
            delete curr;
            return ;
        }

        prev->next = curr->next;
        curr->next->prev = prev;
        curr->prev = NULL;
        curr->next = NULL;

        delete curr;
        return;
    }
}

int main()
{

    // Node *node = new Node(10);
    // Node *head = node;
    // Node *tail = node;

    Node *head = NULL;
    Node *tail = NULL;

    printList(head);
    // cout<<"The length of the linked list are:- "<<getLength(head);

    //   Insert at head of the linked List
    // insertAtHead(head,tail, 10);
    // printList(head);
    // insertAtHead(head, 30);
    // printList(head);
    // insertAtHead(head, 40);
    // printList(head);
    // insertAtHead(head, 50);
    // printList(head);
    // insertAtHead(head, 60);
    // printList(head);

    //   Insert at the tail of the linked list..
    insertAtTail(tail, head, 10);
    printList(head);
    insertAtTail(tail, head, 20);
    printList(head);
    insertAtTail(tail, head, 30);
    printList(head);
    insertAtTail(tail, head, 40);
    printList(head);
    insertAtTail(tail, head, 50);
    printList(head);

    //  Insert at any position in the linked list..
    insertAtPosition(head, tail, 5, 25);
    printList(head);

    //  Deletion in Doubly Linked List..
    deleteNode(head, tail, 1);
    printList(head);

    cout << "Head:- " << head->data << endl;
    cout << "Tail:- " << tail->data;
}