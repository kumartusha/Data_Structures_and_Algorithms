// #include <iostream>
// #include <cstddef>
// using namespace std;

// class SinglyLinkedList
// {
// public:
//    int data;
//    SinglyLinkedList *next;

//    //  Constructor to Create the Node for the Problems..
//    SinglyLinkedList(int data)
//    {
//       this->data = data;
//       this->next = nullptr;
//    }
// };

// //  Insert at Head of the Linkedlist....
// int insertAtHead(SinglyLinkedList *&head, SinglyLinkedList *&tail, int data)
// {
//    SinglyLinkedList *newNode = new SinglyLinkedList(data);
//    //    Initially Head is Null.
//    if (head == nullptr)
//    {
//       //  In that Case we need to Create the node and pointing the head and the taill..
//       //  newNode->data = data;
//       //  newNode->next = nullptr;
//       head = newNode;
//       tail = newNode;
//    }
//    else
//    {
//       //  If the Linkedlist is not Null..
//       newNode->next = head;
//       head = newNode;
//    }
// }

// int insertAtTail(SinglyLinkedList *&head, SinglyLinkedList *&tail, int data)
// {
//    SinglyLinkedList *newNode = new SinglyLinkedList(data);
//    //    Initially Head is Null.
//    if (tail == nullptr)
//    {
//       //  In that Case we need to Create the node and pointing the head and the taill..
//       head = newNode;
//       tail = newNode;
//    }
//    else
//    {
//       //  If the Linkedlist is not Null..
//       tail->next = newNode;
//       tail = newNode;
//    }
// }

// //  Insert at any Position in the entire linked list....
// void insertAtPosition(SinglyLinkedList *&head, SinglyLinkedList *&tail, int data, int position)
// {
//    SinglyLinkedList *newNode = new SinglyLinkedList(data);
//    if (head == nullptr)
//    {
//       cout << "Linked list is Empty Now please add some links into the linked list..";
//    }
//    else if (position == 1)
//    {
//       insertAtHead(head, tail, data);
//       return;
//    }
//    else
//    {
//       //  Here we have the position that will be occur in the medium of the linked list..
//       SinglyLinkedList *temp = head;

//       //    TO reach the previous insert position..
//       int i = 1;
//       while (i++ < position - 1)
//       {
//          temp = temp->next;
//       }

//       // Check the Lst COndition of the linked list..
//       if (temp->next == nullptr)
//       {
//          insertAtTail(head, tail, data);
//          return;
//       }
//       //  Else it is the middle one Position..
//       newNode->next = temp->next;
//       temp->next = newNode;
//    }
// }

// void print(SinglyLinkedList *&head)
// {

//    if (head == nullptr)
//    {
//       cout << "The linkedlist is empty..";
//    }
//    else
//    {
//       // if the head is not null then print the entire linkedlist..
//       SinglyLinkedList *temp = head;

//       while (temp != nullptr)
//       {
//          cout << temp->data << " -> ";
//          temp = temp->next;
//       }
//       cout << "Null" << endl;
//    }
// }

// int main()
// {

//    //  Statically Created the Object of the Linkedlist..
//    // SinglyLinkedList* ref;
//    // Dynamically Created the Object of the Linkedlist.
//    //  SinglyLinkedList *ref = new SinglyLinkedList(20);
//    // cout();

//    SinglyLinkedList *head = nullptr;
//    SinglyLinkedList *tail = nullptr;

//    //  Insertion at Head..
//    insertAtTail(head, tail, 10);
//    print(head);
//    insertAtTail(head, tail, 20);
//    print(head);
//    insertAtTail(head, tail, 40);
//    print(head);
//    insertAtTail(head, tail, 50);
//    print(head);
//    insertAtTail(head, tail, 60);
//    print(head);
//    // insertAtTail(head, tail, 50);
//    // print(head);
//    // insertAtTail(head, tail, 60);
//    // print(head);

//    //    From Here we implement the insert at Position.. in the linkedlist..

//    insertAtPosition(head, tail, 30, 6);
//    print(head);
//    cout << head->data << endl;
//    cout << tail->data << endl;
// }

// // #include <bits/stdc++.h>
// // using namespace std;

// // class Node
// // {
// // public:
// //     int data;
// //     Node *next;
// //     // COnstructor for creating the new Node..
// //     Node(int data)
// //     {
// //         this->data = data;
// //         this->next = NULL;
// //     }

// //     //     Destructor fot free the memory..
// //     //  ~Node(){

// //     //  }
// // };

// // Node *insertAtTail(Node *&head, Node *&tail, int data)
// // {
// //     // Initially the head is null so we want to create the linked list according to that..

// //     Node *newNode = new Node(data);
// //     if (head == NULL)
// //     {
// //         head = newNode;
// //         tail = newNode;
// //     }
// //     else
// //     {
// //         //  If the Linked list have the more than or equal to the 1 node in the list..
// //         tail->next = newNode;
// //         tail = newNode;
// //     }
// // }

// // void printLinkedList(Node *&head)
// // {

// //     Node *temp = head;
// //     while (temp != NULL)
// //     {
// //         cout << temp->data << " -> ";
// //         temp = temp->next;
// //     }
// //     cout << "NULL" << endl;
// // }

// // void deleteNodeFromLL(Node *&head, Node *deleteNode)
// // {

// //     Node *temp = head;
// //     Node *prev = NULL;
// //     while (temp != NULL)
// //     {
// //         if (temp->data == deleteNode->data)
// //         {
// //             prev->next = temp->next;
// //             temp->next = NULL;
// //             delete temp;
// //             return;
// //         }
// //         prev = temp;
// //         temp = temp->next;
// //     }
// // }

// // Node *reverseLinkedList(Node *&head)
// // {

// //     Node *prev = NULL;
// //     Node *curr = head;
// //     Node *next = NULL;

// //     while (curr)
// //     {
// //         next = curr->next;
// //         curr->next = prev;
// //         prev = curr;
// //         curr = next;
// //     }
// //     head = prev;
// //     return head;
// // }

// // Node *createNode(Node *&head, Node *&tail, int data)
// // {
// //     // Initially the head is null so we want to create the linked list according to that..

// //     Node *newNode = new Node(data);
// //     if (head == NULL)
// //     {
// //         head = newNode;
// //         tail = newNode;
// //     }
// //     else
// //     {
// //         //  If the Linked list have the more than or equal to the 1 node in the list..
// //         tail->next = newNode;
// //         tail = newNode;
// //     }
// // }

// // Node *rotateLinkedList(Node *&head, int k)
// // {

// //     vector<int> myVect;
// //     Node *temp = head;

// //     while (temp != NULL)
// //     {
// //         myVect.push_back(temp->data);
// //         temp = temp->next;
// //     }

// //     //   Copy the rotated elements of the array..
// //     vector<int> rotated(myVect.size());
// //     int size = rotated.size();
// //     for (int i = 0; i < rotated.size(); ++i)
// //     {
// //         rotated[(i + k) % size] = myVect[i];
// //     }
// //     Node *newHead = NULL;
// //     Node *newTail = NULL;

// //     for (auto element : rotated)
// //     {
// //         createNode(newHead, newTail, element);
// //     }
// //     return newHead;
// // }
// // // Node *reverse(Node *&secondLeft, Node *&firstRight)
// // // {
// // //     firstRight->next = NULL;
// // //     Node *curr = secondLeft;
// // //     Node *prev = NULL;
// // //     Node *next = NULL;

// // //     while (curr)
// // //     {
// // //         next = curr->next;
// // //         curr->next = prev;
// // //         prev = curr;
// // //         curr = next;
// // //     }

// // //     // printLinkedList(firstRight);
// // //     // printLinkedList(secondLeft);
// // //     return prev;
// // // }
// // // Node *reverse(Node *&head)
// // // {
// // //     Node *curr = head;
// // //     Node *prev = NULL;
// // //     Node *next = NULL;

// // //     while (curr)
// // //     {
// // //         next = curr->next;
// // //         curr->next = prev;
// // //         prev = curr;
// // //         curr = next;
// // //     }

// // //     // printLinkedList(firstRight);
// // //     // printLinkedList(secondLeft);
// // //     return prev;
// // // }

// // // Node *reverseBetween(Node *&head, int left, int right)
// // // {

// // //     //   if the head is pointing to the null node..
// // //     if (head == NULL || head -> next == NULL)
// // //     {
// // //         return head;
// // //     }
// // //     /// If the linked list contain more than or equal to the 2 node.
// // //     // ListNode* left = NULL;
// // //     // ListNode* right = NULL;

// // //     Node*newNode = new Node(-1);
// // //     newNode->next = head;

// // //     Node*firstLeft = newNode;
// // //     Node*secondLeft = NULL;
// // //     Node*firstRight = newNode;
// // //     Node*secondRight = NULL;
// // //     int i = 1;
// // //     //  Pointing to the left pointer to the linked list..
// // //     while (i++ < left)
// // //     {
// // //         firstLeft = firstLeft->next;
// // //     }
// // //     secondLeft = firstLeft -> next;

// // //     //   Pointing to the right pointer in the linked list..
// // //     i = 0;
// // //     while (i++ < right)
// // //     {
// // //         firstRight = firstRight->next;
// // //     }
// // //     secondRight = firstRight->next;

// // //     // Join the first Part of the linked listt..

// // //     firstLeft->next = reverse(secondLeft, firstRight);
// // //     secondLeft->next = secondRight;

// // //     return newNode->next;
// // // }

// // // int gcdCalculate(int a, int b){

// // // //  Here we need to implement the function of the GCD Calculate..
// // //    while(a != b){
// // //     if(a > b){
// // //         a = a - b;
// // //     }else{
// // //         b = b - a;
// // //     }
// // //    }
// // // return a;
// // // }

// // // int main()
// // // {

// // //     Node *head = NULL;
// // //     Node *tail = NULL;

// // //     //  Create the node and insert the node after it..
// // //     insertAtTail(head, tail, 5);
// // //     insertAtTail(head, tail, 2);
// // //     insertAtTail(head, tail, 13);
// // //     insertAtTail(head, tail, 3);
// // //     insertAtTail(head, tail, 8);
// // //     // insertAtTail(head, tail, 6);
// // //     // insertAtTail(head, tail, 7);
// // //     // insertAtTail(head, tail, 8);
// // //     // insertAtTail(head, tail, 9);
// // //     // insertAtTail(head, tail, 10);
// // //     // insertAtTail(head, tail, 1);
// // //     // insertAtTail(head, tail, 70);

// // //     // tail -> next = head -> next -> next;
// // //     // cout<<tail->next->data;

// // //     // reverseLinkedList(head);
// // //     //   cout<<head->data<<endl;
// // //     //   cout<<tail->data;

// // //     // printLinkedList(head);
// // //     // head = rotateLinkedList(head, 4);
// // //     // printLinkedList(head);

// // //     // //  int left = 2, right = 4;
// // //     // head = reverseBetween(head, 1, 4);

// // //     // printLinkedList(head);
// // //     // head = reverse(head);
// // //     // printLinkedList(head);

// // //     // Node *curr = head;
// // //     // Node *nextPtr = head->next;
// // //     // while (nextPtr)
// // //     // {
// // //     //     if (curr->data > nextPtr->data)
// // //     //     {
// // //     //         nextPtr = nextPtr->next;
// // //     //         curr->next = nextPtr;
// // //     //     }else{
// // //     //         curr = nextPtr;
// // //     //         nextPtr = nextPtr -> next;
// // //     //     }
// // //     // }
// // //     // head = reverse(head);
// // //     // printLinkedList(head);

// // //      cout<<gcdCalculate(36,12);

// // // }

//    Problem of the Day...  (Leetcode:- 13 Dec.)
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int minIndex(vector<int> &nums, vector<bool> &store)
{
   //  we need to return the minimum element index from the vector..
   int minElement = INT_MAX;
   int minIndex = -1;

   for (int i = 0; i < nums.size(); ++i)
   {
      if (nums[i] < minElement && store[i] != true)
      {
         minElement = nums[i];
         minIndex = i;
      }
   }

   return minIndex;
}

int main()
{
   vector<int> nums = {2,1,3,4,5,2};
   // vector<int> nums = {2, 3, 5, 1, 3, 2};
   vector<bool> store(nums.size());
   long long score = 0;
   int size = nums.size();

   //   sort(nums.begin(), nums.end());

   // //    Algorithm wise right this Question..
   for (int i = 0; i < size; ++i)
   {
      //  If none element are Visited..
      int index = minIndex(nums, store);
      if (index == -1)
      {
         break;
      }
      if (store[index] != true)
      {
         store[index] = true;
         score += nums[index];
         // Mark the adjacent element visited..
         if (index + 1 < size && store[index + 1] != true)
         {
            store[index + 1] = true;
         }
         if ((index - 1) >= 0 && store[index - 1] != true)
         {
            store[index - 1] = true;
         }
      }
   }
   cout << score;

   //   for(auto element: store){
   //    cout<<element<<" ";
   //   }
}

