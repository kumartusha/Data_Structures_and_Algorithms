// // #include <iostream>
// // using namespace std;

// // class Node
// // {
// // public:
// //     int data;
// //     Node *next;

// // //   We need a constructor for creating the new Node..
// //         Node(int data){
// //          this->data = data;
// //          this->next = NULL;
// //         }

// // //   Here we implement the destructor for deleting the extra memory from Heap..
// //    ~Node(){
// //     cout<<"Tushar Kumar";
// //    }

// // };

// // void insertAtTail(Node* &head, Node* &tail, int data){
// // Node* newNode = new Node(data);
// // //   Here the first head is equal to null so we need to manage that thing..
// //    if(head == nullptr){
// //        head = newNode;
// //        tail = newNode;
// //        tail -> next = head;
// //        return;
// //    }else{
// //     //   If the head is not the NULL in the Linked List..

// //        tail->next = newNode;
// //        tail = newNode;
// //        tail -> next = head;
// //    }
// // }

// // void print(Node* &head, Node* &tail){

// // //   First Way to print the data of the circular Linked list..

// // Node* temp = head;

// // // while(temp->next != head){
// // //     cout<<temp->data<<" -> ";
// // //     temp = temp->next;
// // // }
// // // // cout<<temp->data;

// // //  If we want to print the one extra thing..
// //   do{
// //        cout<<temp->data<<" -> ";
// //        temp = temp -> next;
// //   }while(temp != head);
// //   cout<<"Add. of 1st";
// // }

// // void insertAtHead(Node* &head, Node* &tail, int data){

// // Node* newNode = new Node(data);
// //     if(head == nullptr){
// //         head = newNode;
// //         tail = newNode;
// //         tail -> next = head;
// //         return;
// //     }else{
// //     //      We want to add the node into the begining of the linked list..
// //         newNode->next = head;
// //         head = newNode;
// //         tail->next = newNode;
// //     }
// // }

// // int main()
// // {

// //     //   Here we need to implement the circular Linked list and the doubly circular linked list..
// //      Node* head = nullptr;
// //      Node* tail = nullptr;

// //     //   Insert at the end of the node..
// //        insertAtTail(head, tail, 10);
// //        insertAtTail(head, tail, 20);
// //        insertAtTail(head, tail, 30);
// //        insertAtTail(head, tail, 40);
// //        insertAtTail(head, tail, 50);

// //         insertAtHead(head, tail ,5);
// //         insertAtHead(head, tail ,4);
// //         insertAtHead(head, tail ,3);
// //         insertAtHead(head, tail ,2);
// //         insertAtHead(head, tail ,1);
// //        print(head, tail);

// //       cout<<tail->next->data;

// // }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;

//     //   Constructor for creating the Node..
//     Node(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//         this->prev = nullptr;
//     }
//     //   Destructor for deleting the linked list memory..
//     ~Node()
//     {
//         cout << "Hello Bhai";
//     }
// };

// void insertAtEnd(Node *&head, Node *&tail, int data)
// {

//     Node *newNode = new Node(data);
//     if (head == nullptr)
//     {
//         head = newNode;
//         tail = newNode;
//         tail->next = head;
//         tail->prev = head;
//         return;
//     }
//     else
//     {
//         //     Now Here we have atleast the One node in the List.
//         newNode->prev = tail;
//         tail->next = newNode;
//         head->prev = tail->next;
//         tail = tail->next;
//         tail->next = head;
//     }
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     do
//     {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     } while (temp != head);
//     cout << "Add. of 1st";
// }

// void insertAtBegining(Node *&head, Node *&tail, int data)
// {
//     Node *newNode = new Node(data);

//     if (head == nullptr)
//     {
//         head = newNode;
//         tail = newNode;
//         tail->next = head;
//         tail->prev = head;
//         return;
//     }
//     else
//     {
//         //     Here we have atleast the one node..
//         newNode->next = head;
//         head->prev = newNode;
//         head = newNode;
//         head->prev = tail;
//         tail->next = head;
//     }
// }

// void reverse(Node* &head, Node* &curr, Node* prev){
//     //    //   Base Case for the Recursion..
//         //   Base Case for the Recursion..
//            if(curr == NULL){
//                head = prev;
//                return;
//            }

//            Node* newNode = curr -> next;
//         //   Recursive Call
//            reverse(head, newNode, curr);

//         //    Processing Part of the Recursion..
//            curr -> next = prev;
//            curr -> prev = newNode;
// }

// int main()
// {

//     // We need to implement the doubly circular Linked list..
//     Node *head = nullptr;
//     Node *tail = nullptr;

//     insertAtEnd(head, tail, 10);
//     insertAtEnd(head, tail, 20);
//     insertAtEnd(head, tail, 30);
//     // insertAtEnd(head, tail, 40);
//     // insertAtEnd(head, tail, 50);

//     // cout<<head->data<<endl;
//     // cout<<tail->data<<endl;
//     // cout<<tail->data<<endl;
//     // cout<<tail->next->data<<endl;
//     // cout<<head->data<<endl;
//     // cout<<head->prev->data<<endl;

//     // insertAtBegining(head, tail, 1);
//     // insertAtBegining(head, tail, 40);
//     // insertAtBegining(head, tail, 30);
//     // insertAtBegining(head, tail, 20);
//     // insertAtBegining(head, tail, 10);

//     reverse(head, head, NULL);
//     print(head);
// }