// #include <bits/stdc++.h>
// using namespace std;

// class Node{
// public:
// int data = 0;
// Node* next;

// Node(int data){
// // cout<<"Hello Guys"<<endl;
// this -> data = data;
// this -> next = NULL;
// }

// };

// int main(){

// Node* node1 = new Node(20);
// cout<<node1 -> data<<" ";
// cout<<node1 -> next<<" ";

// }

//   Creating the Singly Linked List using the C++.

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

    ~Node()
    {
        int value = this->data;
        //    Memory Free.
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with Data are:- " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{

    //  For insert a node into linkedlist we need to create a node;
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
}

void printList(Node *&head)
{

    // Print the singly linked list.
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

void insertAtTail(Node *&tail, int data)
{

    //  First Create a node of the linked list.
    Node *tempNode = new Node(data);

    tail->next = tempNode;
    tail = tempNode;
}

void insertAtMiddle(Node *&head, Node *&tail, int data, int position)
{

    //  First is to create a node.
    Node *tempNode = new Node(data);
    Node *temp = head;

    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    //     Reach to the position - 1 node;
    int j = 1;
    while (j < position - 1)
    {
        temp = temp->next;
        ++j;
    }

    //     For Checking the last case.
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // Add the new node to its desire position..
    tempNode->next = temp->next;
    temp->next = tempNode;
}

void deleteNode(int position, Node *&head, Node *&tail)
{

    if (position == 1)
    {
        Node *temp = head;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
            delete temp;
            return;
        }
        head = head->next;

        // Make sure before deleting the node that is not connected to the other node in th memory.
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            ++count;
        }
        //  For Handling the tail node deletion..
        if (curr->next == NULL)
        {
            prev->next = NULL;
            tail = prev;

            delete curr;
            return;
        }

        prev->next = curr->next;
        // Make sure before deleting the node that is not connected to the other node in th memory.
        curr->next = NULL;
        delete curr;
    }
}
bool checkCircular(Node *&tail)
{
    if (tail == NULL || tail->next == tail)
    {
        return true;
    }

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

Node *isReverse(Node *&tail, Node *&head)
{
    Node *prev = NULL;
    Node *next;
    Node *curr = head;
    // Condition for when linked list have no node.
    if (head == NULL)
    {
        return head;
    }
    //    When Linked List have one node.
    if (head->next == NULL)
    {
        return head;
    }
    //  When Linked List have more than the 1 node
    else
    {
        // Node *prev = NULL;
        // Node *next;
        // Node *curr = head;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    }
    return prev;
}

Node *detectLoop(Node *&head)
{

    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            // cout<<"The Intersection point of slow and fast is"<< slow -> data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node *startingNode(Node *&head)
{

    if (head == NULL)
    {
        return NULL;
    }

    Node *intersection = detectLoop(head); // interse = slow
            if(intersection == NULL){
                cout<<"There is no starting point here"<<endl;
                return intersection;  
            }
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeLoop(Node* &head){

Node* startNode = startingNode(head);
          if(startingNode == NULL){
            cout<<"Not Loop Present";
            return;
          }

          Node* temp = startNode;
          while(temp -> next != startNode){
            temp = temp -> next;
          }
    temp -> next = NULL;
}

int main()
{

    // Create a new node;
    Node *node = new Node(10);

    // Point the head to the first node created.
    Node *head = node;
    Node *tail = node;
    // Print the List using the PrintFunction.
    // printList(head);

    // Node Insert at the head ********************************
    // insertAtHead(head, 20);
    // Print the List using the PrintFunction.
    // printList(head);
    // insertAtHead(head, 30);
    // printList(head);
    // insertAtHead(head, 40);
    // printList(head);
    // insertAtHead(head, 50);
    // printList(head);

    // Node Insert at the tail of the linked list.****************************
    insertAtTail(tail, 20);
    printList(head);

    insertAtTail(tail, 30);
    printList(head);

    insertAtTail(tail, 40);
    printList(head);

    insertAtTail(tail, 50);
    printList(head);
    // tail->next = head -> next;

    if (detectLoop(head))
    {
        cout << "The Loop is Present in the List"<<endl;
    }
    else
    {
        cout << "The Loop is not Present in the List"<<endl;
    }
    cout<<"The starting node are:- "<<startingNode(head) -> data<<endl;
     removeLoop(head);

     if (detectLoop(head))
    {
        cout << "The Loop is Present in the List"<<endl;
    }
    else
    {
        cout << "The Loop is not Present in the List"<<endl;
    }
    // cout << "HeadData:- " << head->data << endl;
    // cout << "TailData:- " << tail->data << endl;

    //    / Reverse the singly linked list..
    // Node* newHead = isReverse(tail, head);
    // printList(newHead);

    // Node insert at the middle of the  linked list..*********************************
    // insertAtMiddle(head, tail, 50, 5);
    // printList(head);

    // deleteNode(5, head, tail);
    // printList(head);
    // deleteNode(4, head, tail);
    // printList(head);

    // deleteNode(3, head, tail);
    // printList(head);
    // deleteNode(2, head, tail);
    // printList(head);

    // deleteNode(1, head, tail);
    // printList(head);

    // cout << "Head:- " << head << endl;
    // cout << "Tail:- " << tail<<endl;
    // cout << "HeadData:- " << head -> data << endl;
    // cout << "TailData:- " << tail -> data;

    //  if(checkCircular(tail)){
    //     cout<<"The linked list is circular";
    //  }else{
    //     cout<<"The linked list is not circular";
    //  }
}