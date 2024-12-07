#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    //  Constructor to create an node using C++..
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //  Destructor for deleting the memory ..
    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "The deleted element from linked list are:- " << value;
    }
};

//  For Printing the list
void printList(Node *&head, Node *&tail)
{

    Node *temp = head;

    while (temp != tail)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    cout << tail->data << " ";
    cout << endl;

    // do
    // {
    //     /* code */
    //     cout << temp->data << " ";
    //     // temp = temp->next;
    //     tail = tail -> next;
    // } while (temp != tail);
}

//  Get the length of the linkedlist
void getLength(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
    tail->next = temp;
}
void insertAtTail(Node *&tail, Node *&head, int data)
{

    Node *temp = new Node(data);

    temp->next = tail->next;
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    //  For handling the first Position to be Inserted.
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    else
    {
        //  For Handling the Greater than 1 position number.
        Node *temp = new Node(data);
        Node *curr = head;

        int count = 1;
        while (count < position - 1)
        {
            curr = curr->next;
            ++count;
        }
        // cout << curr->data << endl;
        //     Insert at the tail Position on the linked list.
        if (curr == tail)
        {
            insertAtTail(head, tail, data);
            return;
        }

        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &head,Node* &tail, int data){

if(tail == NULL){
    cout<<"List is already Empty Please Try Again";
   return;
}else{
     // Here is the option for deletion the node...
     Node* prev = tail;
     Node* curr = prev -> next;

     while(curr -> data != data){
        prev = curr;
        curr = curr -> next;
     } 

     prev -> next = curr -> next;
     curr = NULL;
     delete curr;
    cout<<"Error Creation"<<endl;
}

}

int main()
{

    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;

    printList(head, tail);
    //  Insertion on head of the linkedlist..
    insertAtHead(head, tail, 20);
    printList(head, tail);
    insertAtHead(head, tail, 30);
    printList(head, tail);
    insertAtHead(head, tail, 40);
    printList(head, tail);
    // insertAtHead(head, tail, 50);
    // printList(head, tail);
    // insertAtHead(head, tail, 60);
    // printList(head, tail);
    // insertAtHead(head, tail, 70);
    // printList(head, tail);

    //  Insertion at any position on the singly Circular Linked List.
    insertAtPosition(head, tail, 50, 4);
    printList(head, tail);

    //  Insertion on Tail..
    insertAtTail(tail, head, 60);
    printList(head, tail);
    //  insertAtTail(tail, head, 70);
    //  printList(head, tail);
    //  insertAtTail(tail, head, 80);
    //  printList(head, tail);

    deleteNode(head, tail, 60);
    printList(head, tail);

    cout << "Head:- " << head->data << endl;
    cout << "Tail:- " << tail->data << endl;
}