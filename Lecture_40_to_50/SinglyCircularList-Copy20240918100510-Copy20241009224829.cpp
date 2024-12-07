#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
    // Destructure for free the memory manually.
    ~Node()
    {
    }
};

void insertionInCircularLinkedList(Node *&tail, int data)
{

    //  Check condiiton if the tail is null then inserta node into it..
        Node *temp = new Node(data);
    if (tail == NULL)
    {
        tail = temp;
        tail->next = temp;
        return;
    }
    else
    {
        //  If tail is not null then we insert into the circular linked list..
        Node *curr = tail;
        Node *forward = curr->next;
        curr->next = temp;
        temp->next = forward;
        tail = temp;
    }
}

void print(Node *&tail)
{
    //  Here the print of the singly circular linked list..
    Node *temp = tail;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (tail != temp);
    cout << endl;
}
bool checkCircular(Node *&tail)
{

    Node *temp = tail;

    do
    {
        if (temp->next == NULL)
        {
            return false;
        }
        temp = temp->next;
    } while (tail != temp);
    return true;
}

int main()
{

    Node *tail = NULL;

    insertionInCircularLinkedList(tail, 10);
    print(tail);
    insertionInCircularLinkedList(tail, 20);
    print(tail);
    insertionInCircularLinkedList(tail, 30);
    print(tail);
    insertionInCircularLinkedList(tail, 40);
    print(tail);
    insertionInCircularLinkedList(tail, 50);
    print(tail);
    insertionInCircularLinkedList(tail, 60);
    print(tail);

    if(checkCircular(tail)){
        cout<<"The Linked list is circular"<<endl;
    }else{
        cout<<"The Linked list is not Circular";
    }

    cout << "Tail:- " << tail << endl;
    cout << "Tail:- " << tail->data;
}