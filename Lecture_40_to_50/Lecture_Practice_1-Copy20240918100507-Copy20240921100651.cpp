#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    //  Constructor for creating  a new Node whenever the object is created.
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        //  If there is no node in the linked List.
        Node *temp = new Node(data);
        head = tail = temp;
        return;
    }
    else
    {
        // If more than zero node present in the linked list..
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

void printList(Node *&head)
{

    // Here we printing the list by traversing the each node;
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"null "<<endl;
}

int getLength(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        ++count;
        temp = temp->next;
    }
    return count;    
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    //  Insertion at head of the linked list.
    insertAtTail(head, tail, 10);
    printList(head);
    insertAtTail(head, tail, 20);
    printList(head);
    insertAtTail(head, tail, 30);
    printList(head);
    insertAtTail(head, tail, 40);
    printList(head);
    insertAtTail(head, tail, 50);
    printList(head);

       getLength(head);

    cout << "Head:- " << head->data << endl;
    cout << "Tail:- " << tail->data;
}