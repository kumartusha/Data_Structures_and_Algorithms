#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        //     Creation of Node Here...
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        //    Memory Free.
        if (this->next != NULL)
        {
            //  delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with Data are:- " << value << endl;
    }
};

void print(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{

    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

Node *removeDuplicate(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    //   Remove the Duplicate from the sorted linked list..
    Node *curr = head;

    while (curr != NULL && curr->next != NULL)
    {

        if (curr->data == curr->next->data)
        {
            Node *nextPtr = curr->next->next; // Next Pointer....
            Node *deleteNode = curr->next;
            delete deleteNode;

            curr->next = nextPtr;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

// Node *removeDuplicateFromUnsorted(Node *&head)
// {

//     //    Base Conditions...
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }

// //   For more than one nodes...
// map<int, bool> mapElement;
// Node *curr = head;
// Node *prev = NULL;
// Node *next = NULL;

// while (curr != NULL)
// {

//     if (mapElement[curr -> data] == true)
//     {
//         //Delete the Element from the linked list..
//         next = curr -> next;
//         prev -> next = next;
//         delete curr;
//         curr = next;
//     }
//     else
//     {
//         mapElement[curr -> data] = true;
//         next = curr -> next;
//         prev = curr;
//         curr = next;

//     }
// }
// return head;
//  creating the dummy node..
//     Node *dummy = new Node(-1);
//     Node *temp = dummy;

//     map<int, bool> mapElement;
//     Node *curr = head;

//     while (curr != NULL)
//     {

//         if (mapElement[curr->data] == true)
//         {
//             temp -> next = curr -> next;
//             curr = temp -> next;
//         }
//         else
//         {
//             mapElement[curr -> data] = true;
//             temp->next = curr;
//             temp = curr;
//             curr = curr -> next;
//         }
//     }
//     return dummy->next;
// }

int findANode(Node *&head, int number)
{

    //    Base case for the linked list
    if (head->data == number)
    {
        return 0;
    }

    Node *temp = head;
    int count = -1;
    while (temp != NULL)
    {
        ++count;
        if (temp->data == number)
        {
            return count;
        }
        temp = temp->next;
    }
    return -1;
}

void sort012(Node *&head)
{

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            ++zeroCount;
        }
        else if (temp->data == 1)
        {
            ++oneCount;
        }
        else
        {
            ++twoCount;
        }
        temp = temp->next;
    }

    temp = head;

    while (temp != NULL)
    {
        if (zeroCount > 0)
        {
            temp->data = 0;
            --zeroCount;
        }
        else if (oneCount > 0)
        {
            temp->data = 1;
            --oneCount;
        }
        else
        {
            temp->data = 2;
            --twoCount;
        }
        temp = temp->next;
    }
}

bool checkPalindrome(Node* &head){

          if(head == NULL){
            return NULL;
          }
          if(head -> next == NULL){
            return head;
          }

        //    Cases for more than one node in the linked list..
        //  Find the middle element..
           Node* slow = head;
           Node* fast = head;
                 while(fast -> next -> next != NULL){
                    fast = fast -> next -> next;
                    slow = slow -> next;
                 }

        //  Reverse the node after the slow pointer.. 
           Node* temp = slow -> next;
           Node* prev = NULL;
           Node* next = NULL;
             while(temp){
                 next = temp -> next;
                 temp -> next = prev;
                 prev = temp;
                 temp = next;
             }
               slow -> next = NULL;
             
            //   Compare both the linkedlist
            print(head);
            print(prev);

            while(head != NULL && prev != NULL){
                if(prev -> data != head -> data){
                    return false;
                }
                head = head -> next;
                prev = prev -> next;
            }
  return true;
}


int main()
{

    Node *node = new Node(1);
    Node *head = node;
    Node *tail = node;
    // print(head);

    insertAtTail(head, tail, 2);
    print(head);
    insertAtTail(head, tail, 4);
    print(head);
    insertAtTail(head, tail, 3);
    print(head);
    insertAtTail(head, tail, 2);
    print(head);
    insertAtTail(head, tail, 1);
    // insertAtTail(head, tail, 0);
    // insertAtTail(head, tail, 1);
    // print(head);
    //  Removing the element from a sorted linked list..
    // removeDuplicate(head);
    print(head);

    //   Removing the element from a unsorted linked list..
    // Node *newHead = removeDuplicateFromUnsorted(head);
    // print(newHead);

    //  Find the node in the linked list..
    //   cout<<findANode(head, 0);

    //  Sort 0 , 1, and 2 in a linked list..
    // sort012(head);
    // print(head);

    //      String Problem of the day of the leetcode....
    // vector<string> str= {"d","b","c","b","c","a"};


     if(checkPalindrome(head)){
        cout<<"The linked list is palindrome";
     }else{
       cout<<"The linked list is not palindrome";
     }

   
}