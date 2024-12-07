#include <bits/stdc++.h>
using namespace std;

// int main(){

// //   We are going to implement the stack for the DSA in C++..
//     stack<int> myStack;
//     myStack.push(1);
//     myStack.push(2);
//     myStack.push(3);
//     myStack.push(4);
//     myStack.push(5);

//     myStack.pop();
//     myStack.pop();
//     myStack.pop();

//     cout<<myStack.size()<<endl;

//     while(!myStack.empty()){
//         cout<<myStack.top()<<" ";
//         myStack.pop();
//     }

// }
// #define size 10
// class Stack
// {
// public:
//     //   Instance Variable for this Class..
//     int top;
//     int arr[size];

//     Stack()
//     {
//         top = -1;
//         //  cout<<"Hello Memory Initializes.";
//     }
//     //   Push Operation for the Stack..
//     void push(int data)
//     {

//         //     If the Stack is the FUll Condition..
//         if (top == size - 1)
//         {
//             cout << "The Stack is Overflow." << endl;
//         }
//         else
//         {
//             ++top;
//             arr[top] = data;
//         }
//     }
//     //   Pop Operation for the Stack..
//     void pop()
//     {
//         //   if the Stack is Empty..
//         if (top == -1)
//         {
//             cout << "The Stack is Undderflow.." << endl;
//         }
//         else
//         {
//             cout << "The Deleted Element are:- " << arr[top] << endl;
//             --top;
//         }
//     }
//     //   Peek Operation for the Stack..

//     void peek()
//     {
//         //   if the stack is the empty soo there is no peek Element into the Stack..
//         if (top == -1)
//         {
//             cout << "The Stack is Underflow";
//         }
//         else
//         {
//             cout << "The top element into the Stack are:- " << arr[top] << endl;
//         }
//     }

//     //   Empty Operation for the Stack..

//     void empty()
//     {
//         if (top == -1)
//         {
//             cout << "Stack is Empty Now;" << endl;
//         }
//         else
//         {
//             cout << "The Stack is not Empty" << endl;
//         }
//     }
//     //   Printing Operation for the Stack..
//     void print()
//     {
//         while (top + 1)
//         {
//             cout << arr[top--]<<" ";
//         }
//     }
// };

// int main()
// {

//     //     Here we Implement the Stack using the Class Concept..
//     // Create a Class Instance for the Stack and Implement the Function..
//     Stack *stk = new Stack();

//     stk->push(10);
//     stk->push(20);
//     stk->push(30);
//     stk->push(40);
//     stk->push(50);
//     stk->push(60);
//     stk->push(70);
//     stk->push(80);

//     stk-> pop();
//     stk-> pop();

//     stk->empty();

//     stk->peek();

//     stk->print();

// }

// class Queue{

// };

// int main(){

// //  Here we Implement the Queue Using the Array...
// //   Using the Predefined STL Library..
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);
//     q.push(7);
//     q.push(8);
//     q.push(9);
//     q.push(10);

//     cout<<q.size()<<" ";

//     cout<<q.front()<<" ";
//     q.pop();
//     cout<<q.front()<<" ";
//     q.pop();
//     cout<<q.front()<<" ";
//     cout<<q.back()<<" ";

//     cout<<q.size()<<" ";

//     // while(!q.empty()){
//     //       cout<<q.front()<<endl<<" ";
//     //       q.pop();
//     // }

// }

// class Queue
// {
// private:
//     int *arr;
//     int front;
//     int rear;
//     int size;

// public:
//     //  Data Member and the Function for the Class..
//     Queue(int size)
//     {
//         this->size = size;
//         this->front = 0;
//         this->rear = 0;
//         arr = new int[size];
//     }

//     //  Push Functions in the Queue.

//     void push(int element)
//     {
//         //      Initially the Queue is Empty so push According to That..
//         //  If the Queue is Empty on a First TIme..
//         if (rear == size - 1)
//         {
//             cout << "The Queue is Full";
//         }
//         else if (front == -1 && rear == -1)
//         {
//             front = rear = 0;
//             arr[rear] = element;
//         }
//         else
//         {
//             arr[++rear] = element;
//         }
//     }

//     //  Pop Functions in the Queue.
//     int pop()
//     {
//         //   Handle if the Queue is Empty or Not..
//         if (front == -1 && rear == -1)
//         {
//             cout << "The Queue is Empty Now";
//         }
//         else if (rear == front)
//         {
//             cout << "The deleted Item are:- " << arr[front] << endl;
//             front = rear = -1;
//         }
//         else
//         {
//             cout << "The deleted Item are:- " << arr[front] << endl;
//             ++front;
//         }
//     }
//     //  Empty Functions in the Queue.
//     bool empty()
//     {
//         //  Check Empty Queue and handle both the cases menas empty Queue or Some Element Queue..
//         if (front == -1 && rear == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     //  Peek Functions in the Queue.
//     void peek()
//     {
//         //  Find Peek According to the Empty and some element Queue.
//         if (front == -1 && rear == -1)
//         {
//             cout << "Queue is Empty Please Push Element" << endl;
//         }
//         else
//         {
//             cout << "The Front Element are:- " << arr[front] << endl;
//         }
//     }

//     //  printing Functions in the Queue.
//     void print()
//     {
//         //  Print Remind According to the Empty and some Element into the Queue..
//         if (front == -1 && rear == -1)
//         {
//             cout << "Queue is Empty" << endl;
//         }
//         else
//         {
//             //  If the Queue is not Empty..
//             cout << "The Elements are:- ";
//             // do
//             // {
//             //     cout<<arr[front++]<<" ";
//             // } while (front != rear);
//             for (int i = front; i <= rear; i++)
//             {
//                 cout << arr[i] << " ";
//             }
//         }
//     }
// };

// int main()
// {

//     //   Implementation of Queue Using the Array..
//     Queue *q = new Queue(8);

//     q->push(10);
//     q->push(20);
//     q->push(30);
//     q->push(40);
//     q->push(50);

//     q->pop();
//     q->pop();
//     q -> pop();
//     q -> pop();
//     q -> pop();
//     q -> pop();

//     // q.empty();

//     // q.peek();

//     // q->print();
// }

// class Queue
// {

// private:
//     int *arr;
//     int *arr2;
//     int top1;
//     int top2;
//     int size;
//     int count;

// public:
//     Queue(int size)
//     {
//         this->size = size;
//         this->top1 = -1;
//         this->top2 = -1;
//         this->count = 0;
//         arr = new int[size];
//         arr2 = new int[size];
//     }

//     //   Here are the Operations performed for the Queue..
//     void enqueue(int data)
//     {
//         push1(data);
//         count++;
//     }
//     void push1(int data)
//     {
//         //     Here we push the
//         if (top1 == size - 1)
//         {
//             cout << "The first Stack is Full" << endl;
//         }
//         else
//         {
//             ++top1;
//             arr[top1] = data;
//         }
//     }
//     int dequeue()
//     {
//         int a, b;
//         if (top1 == -1 && top2 == -1)
//         {
//             cout << "Both the Stack are Empty"<<endl;
//         }
//         else
//         {

//             //     First Copied the elements of the first Array into the second Array.
//             for (int i = 0; i < count; ++i)
//             {
//                 a = pop1();
//                 push2(a);
//             }
//             //     Call the function for printing the First Value;
//             // peek(pop2());
//             cout<<"The deleted Element are:- "<<pop2()<<endl;
//             --count;

//             //     Copied the elements from the second array into the first Array.
//             for (int i = 0; i < count; ++i)
//             {
//                  b = pop2();
//                  push1(b);
//             }
//         }
//     }

//     int pop1()
//     {
//         if (top1 == -1)
//         {
//             cout << "The Second Stack is Empty" << endl;
//             return 0;
//         }
//         return arr[top1--];
//     }

//     void push2(int data)
//     {

//         if (top2 == size - 1)
//         {
//             cout << "The first Stack is Full" << endl;
//         }
//         else
//         {
//             ++top2;
//             arr2[top2] = data;
//         }
//     }

//     int pop2()
//     {
//         if (top2 == -1)
//         {
//             cout << "The Second Stack is Empty" << endl;
//             return 0;
//         }
//         return arr2[top2--];
//     }

//     bool empty()
//     {

//         if (top1 == -1 && top2 == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     void peek()
//     {
//         int a, b;
//         //  The Peek Elemenst are present into the second Stack..
//          if (top1 == -1 && top2 == -1) {
//             cout<<"The Queue is Empty"<<endl;
//         }else{
//         for (int i = 0; i < count; ++i) {
//              a = pop1();
//             push2(a);
//         }
//         int peek = arr2[top2];

//         //   now here we again put the elements into the first Array..
//           for(int i = 0; i < count; ++i){
//                b = pop2();
//                push1(b);
//           }
//         //     Call the function for printing the First Value;
//         cout<<"The peek element are:- "<<peek<<endl;
//         }
//     }

//     void display()
//     {
//         if(top1 == -1 && top2 == -1){
//               cout<<"The Both Stack are Empty"<<endl;
//         }else{
//             cout << "The Elements are:- ";
//         //  We Print the values from the first Stack...
//         for (int i = 0; i <= top1; ++i)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//         }
//     }
// };

// int main()
// {

//     Queue *q = new Queue(8);

//     q->enqueue(10);
//     // q->enqueue(20);
//     // q->enqueue(30);
//     // q->enqueue(40);
//     // q->enqueue(50);
//     // q->enqueue(60);
//     // q->enqueue(70);

//     // q->dequeue();
//     // q->dequeue();
//     // q->dequeue();
//     // q->dequeue();

//     q->peek();
//     q->display();

//     q->dequeue();

//     if(q->empty()){
//           cout<<"The Queue is Empty"<<endl;
//     }else{
//           cout<<"The Queue is not Empty"<<endl;
//     }

// }

// //   Here we need to implement the Stack using the Queue and perform the all operation that will present into the stack..

// // class Stack
// // {

// // private:
// //     int *arr;
// //     int front;
// //     int rear;
// //     int size;

// // public:
// //     //  Constructor for Initializing the Variables of the Class..
// //     Stack(int size)
// //     {
// //         this->front = -1;
// //         this->rear = -1;
// //         this->size = size;
// //         arr = new int[size];
// //     }
// //     //     e have the following the Functions to implement the operation same as the Stack.
// //     void push(int data)
// //     {
// //         //   Base Condition for the FUnctions..
// //         if (rear == size - 1)
// //         {
// //             cout << "Queue is Full" << endl;
// //         }else if(front == -1 && rear == -1){
// //               rear = front = 0;
// //               arr[rear] = data;
// //         }
// //         else
// //         {
// //             arr[++rear] = data;
// //         }
// //     }

// //     //     Pop Function for the Stack Implementation using the Queue.
// //     int pop()
// //     {
// //         //  Check if the Queue is empty..
// //         if (front == -1 && rear == -1)
// //         {
// //             cout << "Queue is Empty Now" << endl;
// //         }
// //         else if(rear == front)
// //         {
// //              cout<<"The deleted Item are:- "<<arr[rear]<<endl;
// //              rear = front = -1;
// //         }else{
// //              cout<<"The deleted Item are:- "<<arr[rear--]<<endl;

// //         }
// //     }

// //       void peek(){
// //              if(front == -1 && rear == -1){
// //                   cout<<"The Queue is Empty";
// //              }else{
// //                   cout<<"The peek Element are:- "<<arr[rear]<<endl;
// //              }
// //       }

// //     //  Printing the Elements of the Stack..
// //       void display(){
// //         if(front == -1 && rear == -1){
// //               cout<<"The Queue is Empty Now"<<endl;
// //         }else{
// //             cout<<"The Elements are:- ";
// //             //    cout<<"The Front and the rear is:- "<<front<<" "<<rear;
// //               for(int i = rear; i >= front; --i){
// //                   cout<<arr[i]<<" ";
// //               }
// //               cout<<endl;
// //         }
// //       }
// // };

// // int main()
// // {

// //     //      Creating the Objects for the particulat Stack Class..
// //     Stack *stk = new Stack(8);

// //     stk -> push(10);
// //     stk -> push(20);
// //     stk -> push(30);
// //     stk -> push(40);
// //     stk -> push(50);
// //     stk -> push(60);
// //     stk -> push(70);
// //     stk -> push(80);
// //     // stk -> push(90);

// //     stk->pop();
// //     stk->pop();
// //     stk->pop();
// //     stk->pop();

// //     stk->peek();

// //     // Pop Operation..
// //    stk->display();
// // }

// class Linked
// {

// private:
//     int data;
//     Linked *next;

// public:
//     //      Constructor for Initializing the Variable and the Objects..
//     Linked(int data)
//     {

//         this->data = data;
//         this->next = NULL;
//     }

//     //  Perform all the operation of the Linked list..
//     void push(int data, Linked *&head)
//     {
//         Linked *newNode = new Linked(data);

//         if (head == NULL)
//         {
//             head = newNode;
//             return;
//         }
//         else
//         {
//             // If the head is not the NULL
//             // Implement the Insertion at head..
//             newNode->next = head;
//             head = newNode;
//         }
//     }
//     //  pop operation for the problem..
//     int pop(Linked* &head)
//     {
//        if(head == NULL){
//         cout<<"The Linked list is Empty Now."<<endl;
//        } else{
//           cout<<"The Deleted Item are:- "<<head -> data<<endl;
//            Linked* temp = head;
//            head = head -> next;
//            delete temp;
//        }
//     }

//     void peek(Linked* &head){
//         if(head == nullptr){
//             cout<<"The Linked list is Empty"<<endl;
//         }else{
//             cout<<"The Peek Element are:- "<<head->data<<endl;
//         }
//     }

//     void display(Linked *&head)
//     {
//         if (head == nullptr)
//         {
//             cout << "The Linked list is Empty Now" << endl;
//         }
//         else
//         {
//             cout<<"The Elements are:- ";
//             Linked *temp = head;

//             while (temp != NULL)
//             {
//                 cout << temp->data << " ";
//                 temp = temp -> next;
//             }
//         }
//     }
// };

// int main()
// {

//     //   Implementation of Stack Using the Linked List..
//     Linked *ld;
//     Linked *head = NULL;

//     ld->push(1, head);
//     ld->push(90, head);
//     ld->push(1, head);
//     ld->push(28, head);
//     ld->push(2, head);
//     ld->push(2, head);

//     ld->pop(head);
//     ld->pop(head);
//     ld->pop(head);
//     // ld->pop(head);
//     // ld->pop(head);

//     ld->peek(head);

//     ld->display(head);
// }

//  Implementing the Queue using the Linked list..
// class Linked
// {

// private:
//     int data;
//     Linked *next;

// public:
//     //      Constructor for Initializing the Variable and the Objects..
//     Linked(int data)
//     {

//         this->data = data;
//         this->next = NULL;
//     }

//     //  Perform all the operation of the Linked list..
//     void push(int data, Linked *&head, Linked *&tail)
//     {
//         Linked *newNode = new Linked(data);
//         if (head == NULL)
//         {
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         else
//         {
//             //    Implement the insert at end Logic using the Tail..
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }
//     //  pop operation for the problem..
//     int pop(Linked* &head)
//     {
//           if(head == NULL){
//             cout<<"The Linked list is Empty Now";
//           }else{
//             //  Implement the deletion on end;
//             cout<<"The deleted Item are:- "<<head->data<<endl;
//             Linked* temp = head;
//             head = head->next;
//             delete temp;
//           }
//     }

//     // void peek(Linked* &head){

//     // }

//     void display(Linked *&head, Linked *&tail)
//     {
//         if (head == NULL)
//         {
//             cout << "The Linked list is Empty Now" << endl;
//         }
//         else
//         {
//             //  Printing the data..
//             Linked *temp = head;
//             cout<<"The Data Elements are:- ";
//             while (temp != NULL)
//             {
//                 cout << temp->data << " ";
//                 temp = temp->next;
//             }
//         }
//     }
// };

// int main()
// {
//     Linked *ld;
//     Linked *head = NULL;
//     Linked *tail = NULL;

//     ld->push(10, head, tail);
//     ld->push(20, head, tail);
//     ld->push(30, head, tail);
//     ld->push(40, head, tail);
//     ld->push(50, head, tail);

//     ld->pop(head);
//     ld->pop(head);
//     ld->pop(head);

//     ld->display(head, tail);
// }

// class MinStack
// {

// private:
//     int topVal;
//     int *arr;
//     int size = 10;

// public:
//     MinStack()
//     {
//         this->topVal = -1;
//         arr = new int[size];
//     }

//     void push(int val)
//     {
//         if (topVal == size - 1)
//         {
//             cout << "The Stack is Overflow Now" << endl;
//         }
//         else
//         {
//             topVal++;
//             arr[topVal] = val;
//         }
//     }

//     void pop()
//     {
//         if (topVal == -1)
//         {
//             cout << "The Stack is Empty Now." << endl;
//         }
//         else
//         {
//             cout << "The poped Value are:- " << arr[topVal--] << endl;
//         }
//     }

//     int top()
//     {
//         if (topVal == -1)
//         {
//             cout << "The Stack is Empty Now" << endl;
//         }
//         else
//         {
//             cout << "The top value are:- " << arr[topVal] << endl;
//         }
//     }

//     void getMin()
//     {
//         if (topVal == -1)
//         {
//             cout << "The Stack is Empty Now" << endl;
//             return;
//         }
//         else
//         {

//             int minElement = INT_MAX;

//             //   cout<<"The topVal are:- "<<topVal<<endl;
//             for(int i = topVal; i >= 0; --i)
//             {
//                 // cout<<minElement<<endl;
//             //    cout<<"Index are:- "<<i<<endl;
//                 if (arr[i] < minElement)
//                 {
//                     // cout<<"Hello"<<endl;
//                     minElement = arr[i];
//                 }
//             }
//             cout<<"The Minimum Element are:- "<<minElement<<endl;
//         }
//     }

//     //   Display the data..
//     void display()
//     {
//         if (topVal == -1)
//         {
//             cout << "The Stack is Empty Now";
//         }
//         else
//         {
//             cout << "The Data Elements are:- ";
//             for (int i = topVal; i >= 0; --i)
//             {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {

//     MinStack *stk = new MinStack();

//     // stk->getMin();

//     stk->push(-2);
//     stk->push(0);
//     stk->push(-3);

//     // stk->getMin();

//     stk->pop();

//     // stk->top();

//     // stk->display();

//     stk->getMin();

// }

// int main()
// {
//     string exp = "ab*c+";
//     int i = 0;
//     stack<string> stk;
//     int size = exp.length();

//     while (i < size)
//     {
//         //  if the operand Occur in the string..
//         if ((exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= '0' && exp[i] <= '9'))
//         {

//            str += exp[i];
//             stk.push(str);
//         }
//         else
//         {
//             //  If The operator Occur in the string..
//             string t1 = stk.top();
//             stk.pop();
//             string t2 = stk.top();
//             stk.pop();

//             string converted = '(' + t2 + exp[i] + t1 + ')';
//             stk.push(converted);
//         }
//         ++i;
//     }

//     cout << stk.top();
// }

// void deleteMiddle(stack<int> &stk, int midIndex, int count)
// {
//     if (count == midIndex)
//     {
//         //  if we reach to the middle elements into the stack..
//         stk.pop();
//         return;
//     }
//     //  Recursive Call for this particular problem..
//     int element = stk.top();
//     stk.pop();

//     deleteMiddle(stk, midIndex, count + 1);

//     //     If we return fromm the recursive call.
//     stk.push(element);
// }

// int main()
// {

//     stack<int> stk;
//     stk.push(1);
//     stk.push(2);
//     stk.push(3);
//     stk.push(4);
//     stk.push(5);

//     // 1. The Problem is to delete the middle element from the stack..
//     // Solution we solved this Problem using the

//     // cout << "The Stack Elements are:- ";
//     // while (!stk.empty())
//     // {
//     //     cout << stk.top() << " ";
//     //     stk.pop();
//     // }

//     int middle = stk.size() / 2;
//     deleteMiddle(stk, middle, 0);

//     cout<<"The Stack Elements are:- ";
//     while (!stk.empty())
//     {
//         cout << stk.top() << " ";
//         stk.pop();
//     }
// }


void insertBottom(){

  

}

int main(){


    stack<int> stk;
    stk.push(11);
    stk.push(2);
    stk.push(32);
    stk.push(3);
    stk.push(41);

    vector<int> vect;

    while (!stk.empty())
    {
        vect.push_back(stk.top());
        stk.pop();
    }
 
 sort(vect.begin(), vect.end());
    
    int size = vect.size();
    for(int i = size - 1; i >= 0; --i){
        stk.push(vect[i]);
    }

   while(!stk.empty()){
      cout<<stk.top()<<" ";
      stk.pop();
   }


}