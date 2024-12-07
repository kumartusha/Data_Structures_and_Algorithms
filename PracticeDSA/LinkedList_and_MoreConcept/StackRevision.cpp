// #include <bits/stdc++.h>
// using namespace std;

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

// void insertBottom(){

// }

// int main(){

//     stack<int> stk;
//     stk.push(11);
//     stk.push(2);
//     stk.push(32);
//     stk.push(3);
//     stk.push(41);

//     vector<int> vect;

//     while (!stk.empty())
//     {
//         vect.push_back(stk.top());
//         stk.pop();
//     }

//  sort(vect.begin(), vect.end());

//     int size = vect.size();
//     for(int i = size - 1; i >= 0; --i){
//         stk.push(vect[i]);
//     }

//    while(!stk.empty()){
//       cout<<stk.top()<<" ";
//       stk.pop();
//    }

// }

// void isSorted(stack<int> &stk, int element)
// {

//     if (stk.empty())
//     {
//         stk.push(element);
//     }
//     else
//     {
//         //  If the second and more than second elements..
//         if (element > stk.top())
//         {
//             stk.push(element);
//         }
//         else
//         {

//             int topElement = stk.top();
//             stk.pop();
//             isSorted(stk, element);
//             stk.push(topElement);
//         }
//     }
// }

// void sortStack(stack<int> &stk)
// {
//     if (stk.empty())
//     {
//         return;
//     }

//     //    Recursive Call for the recursion..
//     int element = stk.top();
//     stk.pop();

//     sortStack(stk);

//     //   when we return from the recursive Call we push the elements into the Stack..
//     isSorted(stk, element);
// }

// int main()
// {

//     stack<int> stk;
//     stk.push(11);
//     stk.push(2);
//     stk.push(32);
//     stk.push(3);
//     stk.push(41);

//     sortStack(stk);

//  while(!stk.empty()){
//           cout<<stk.top()<<" ";
//           stk.pop();
//     }

// }

// int main(){

//    vector<int> vect = {2,1,4,3};
//    vector<int> ans;

//    stack<int> stk;
//    int size = vect.size();

//    for(auto element: ans){
//     cout<<element<<" ";
//    }

// }

// int main(){

// vector<int> vect1 = {1,2,1};
// vector<int> vect2(2 * vect1.size());
// int size = vect1.size();

// for(int i = 0; i < vect2.size(); ++i){
//     vect2[i] = vect1[i % size];
// }
// }

// int main()
// {
//     vector<int> arr = {3, 1, 4, 2, 7};
//     int size = arr.size();
//     stack<int> stk;
//     stk.push(-1);
//     vector<int> ans(arr.size());

//     for (int i = size - 1; i >= 0; --i)
//     {
//         int element = arr[i];

//         while (!stk.empty() && stk.top() <= element)
//         {
//             stk.pop();
//         }

//         // Here we got the maximum Element for the Particular Number..
//         if (!stk.empty())
//         {
//             ans[i] = stk.top();
// ;        }
//         else
//         {
//            ans[i] = -1;
//         }
//         stk.push(element);
//     }

//     for (auto element : ans)
//     {
//         cout << element << " ";
//     }
// }

// int main()
// {

//     vector<int> arr = {50,40,30,10};
//     int size = arr.size();
//     stack<int> stk;
//     stk.push(-1);
//     vector<int> ans(arr.size());

//     for (int i = size - 1; i >= 0; --i)
//     {
//         int element = arr[i];

//         while (!stk.empty() && stk.top() <= element)
//         {
//             stk.pop();
//         }

//         // Here we got the maximum Element for the Particular Number..
//         if (!stk.empty())
//         {
//             ans[i] = stk.top();
//         }
//         else
//         {
//             ans[i] = -1;
//         }
//         stk.push(element);
//     }

//     for (auto element : ans)
//     {
//         cout << element << " ";
//     }
// }

// int main(){

// vector<int> nums1 = {4,1,2};
// vector<int> nums2 = {1,3,4,2};
// vector<int> vect;
// stack<int> stk;
// stk.push(-1);
// int size = nums2.size();

// unordered_map<int, int> myMap;
// for (int i = size - 1; i >= 0; --i)
//     {
//         int element = nums2[i];

//         while (!stk.empty() && stk.top() <= element)
//         {
//             stk.pop();
//         }

//         // Here we got the maximum Element for the Particular Number..
//         if (!stk.empty())
//         {
//             // ans[i] = stk.top();
//             myMap[nums2[i]] = stk.top();
//         }
//         else
//         {
//         //    ans[i] = -1;/
//         myMap[nums2[i]] = -1;
//         }
//         stk.push(element);
//     }

//     for(int i = 0; i < nums1.size(); ++i){
//             vect.push_back(myMap[nums1[i]]);
//     }

//  Printing the element of the map..
//    for(auto element: myMap){
//        cout<<element.first<<" "<<element.second<<endl;
//    }
// for(auto element: vect){
//       cout<<element<<" ";
// }
// }

// int main()
// {

//     vector<int> vect = {29959,29867,29822,29704,29676,29650,29577,29488,29286,29255,29232,29207,29071,29034,28925,28849,28731,28693,28624,28606,28591,28397,28357,28308,28295,28210,28119,28090,28004,27903,27845,27830,27777,27736,27640,27540,27506,27428,27341,27308,27182,27152,27122,27029,26928,26872,26796,26765,26663,26597,26580,26530,26498,26475,26436,26406,26382,26312,26213,26134,26088,26025,25943,25912,25875,25845,25810,25702,25638,25614,25531,25524,25488,25470,25444,25402,25283,25262,25121,24988,24958,24886,24769,24697,24635,24595,24490,24456,24453,24346,24313,24248,24200,24148,24107,24052,24044,24021,23970,23908,23897,23835,23752,23741,23714,23661,23596,23545,23509,23470,23439,23409,23350,23215,23166,23155,23100,23024,22923,22825,22793,22627,22613,22536,22450,22383,22312,22268,22205,22175,22136,22028,21971,21900,21824,21769,21726,21583,21546,21513,21494,21428,21327,21264,21254,21174,21140,21112,21000,20921,20902,20830,20817,20783,20735,20657,20616,20573,20485,20378,20363,20305,20259,20210,20114,20002,19846,19785,19747,19667,19645,19622,19610,19580,19542,19516,19454,19392,19310,19277,19194,19131,19090,19004,18883,18845,18791,18781,18668,18591,18518,18475,18368,18331,18310,18287,18217,18114,18092,18048,17990,17964,17912,17836,17740,17704,17630,17613,17573,17428,17356,17341,17300,17260,17180,17174,17126,17071,17041,16866,16850,16828,16672,16618,16577,16499,16407,16357,16318,16293,16202,16150,16075,16041,15948,15921,15844,15843,15785,15764,15668,15626,15579,15473,15387,15255,15190,15139,15062,14996,14954,14918,14907,14902,14867,14851,14817,14799,14751,14720,14536,14506,14474,14353,14303,14280,14185,14107,14012,13932,13858,13781,13585,13563,13533,13451,13412,13362,13249,13208,13181,13064,13037,12961,12926,12892,12786,12731,12611,12573,12506,12502,12496,12470,12443,12370,12262,12182,12153,12069,12000,11847,11806,11781,11708,11687,11593,11550,11445,11372,11329,11308,11291,11268,11241,11191,11027,10982,10879,10862,10776,10695,10603,10502,10464,10350,10338,10305,10273,10176,10124,10094,10038,9953,9935,9812,9786,9743,9728,9508,9472,9383,9349,9236,9215,9130,9124,9042,9008,8988,8901,8833,8809,8780,8716,8580,8462,8334,8321,8305,8280,8257,8246,8137,8077,8043,8016,7984,7955,7927,7906,7746,7663,7653,7572,7542,7530,7489,7420,7390,7361,7337,7245,7210,7188,7175,7096,6898,6846,6745,6675,6569,6478,6427,6363,6284,6260,6243,6206,6154,6135,6078,6061,6017,5995,5917,5863,5836,5793,5763,5743,5678,5572,5532,5459,5384,5341,5299,5251,5231,4995,4933,4861,4740,4672,4625,4496,4445,4361,4282,4215,4135,4097,4028,3917,3862,3711,3553,3498,3410,3388,3384,3288,3279,3244,3221,3181,3171,3150,3060,3035,2975,2965,2834,2760,2637,2584,2533,2440,2383,2311,2285,2255,2211,2192,2121,2054,2010,1964,1850,1724,1642,1577,1411,1409,1332,1296,1265,1256,1220,1195,937,903,880,811,739,720,650,609,547,533,459,434,384,279,231,163,102,78,30,5,52,100,155,217,277,328,389,446,473,546,583,649,702,734,768,857,882,912,1043,1219,1243,1258,1290,1325,1359,1409,1567,1642,1679,1726,1873,1965,2017,2088,2172,2204,2226,2273,2288,2316,2434,2522,2558,2622,2678,2790,2933,2965,3025,3037,3071,3167,3180,3194,3233,3269,3282,3383,3387,3401,3465,3528,3595,3801,3910,4020,4078,4128,4213,4271,4295,4420,4472,4612,4663,4739,4845,4891,4980,5109,5241,5284,5335,5379,5388,5478,5546,5639,5705,5751,5766,5803,5855,5879,5975,6000,6024,6070,6093,6137,6156,6212,6256,6276,6304,6421,6441,6537,6614,6743,6844,6893,7087,7169,7183,7200,7237,7262,7352,7376,7398,7441,7491,7541,7564,7602,7656,7707,7814,7924,7940,7958,8014,8036,8048,8132,8141,8250,8279,8288,8321,8331,8374,8515,8655,8723,8807,8825,8878,8953,8990,9011,9077,9128,9172,9219,9276,9383,9420,9499,9535,9736,9744,9801,9900,9951,10038,10093,10119,10147,10265,10301,10314,10340,10456,10499,10564,10622,10767,10802,10876,10882,10997,11063,11217,11243,11276,11299,11314,11365,11407,11456,11587,11627,11705,11751,11792,11831,11901,12012,12118,12180,12240,12296,12385,12469,12473,12497,12503,12537,12578,12723,12778,12858,12901,12936,13020,13048,13136,13195,13232,13325,13377,13424,13493,13547,13564,13724,13856,13911,13938,14075,14151,14234,14300,14353,14395,14499,14507,14705,14724,14796,14802,14823,14858,14882,14905,14914,14936,14962,15049,15114,15161,15237,15272,15399,15565,15587,15666,15749,15778,15830,15843,15864,15928,16039,16075,16141,16163,16246,16315,16333,16389,16415,16526,16601,16650,16798,16845,16861,16991,17046,17090,17140,17178,17186,17292,17305,17343,17419,17456,17610,17617,17693,17728,17783,17909,17918,17970,18032,18083,18104,18114,18223,18296,18330,18363,18428,18496,18578,18660,18733,18782,18792,18861,18929,19069,19127,19184,19269,19279,19355,19394,19494,19539,19559,19599,19612,19643,19666,19745,19760,19815,19864,20012,20141,20231,20270,20330,20370,20380,20500,20595,20617,20690,20751,20811,20824,20843,20910,20925,21044,21126,21165,21198,21260,21280,21343,21467,21505,21531,21564,21640,21755,21817,21885,21929,22010,22103,22159,22196,22229,22270,22368,22414,22515,22570,22615,22630,22806,22864,22951,23030,23107,23155,23191,23226,23399,23438,23464,23487,23524,23559,23634,23667,23719,23747,23764,23869,23901,23936,24012,24022,24045,24074,24141,24185,24204,24272,24327,24452,24455,24490,24560,24615,24641,24734,24815,24890,24963,25025,25242,25282,25283,25414,25446,25475,25489,25527,25586,25636,25640,25771,25844,25848,25883,25923,26005,26048,26106,26157,26312,26359,26395,26429,26465,26491,26513,26558,26584,26601,26667,26770,26864,26900,26996,27118,27129,27176,27272,27313,27389,27478,27517,27580,27700,27761,27811,27844,27848,27967,28051,28108,28176,28264,28302,28332,28380,28525,28591,28617,28681,28727,28744,28874,28994,29047,29123,29221,29239,29274,29347,29493,29596,29668,29694,29717,29847,29871};
    //  We Need to Calculate the minimum in each and evry subarray and find the sum..

    //    For storing the maximumElemene.
    // vector<int> minStore;
    // vector<int> temp;

    // for (int i = 0; i < vect.size(); ++i)
    // {

    //     for (int j = i; j < vect.size(); ++j)
    //     {    temp.push_back(vect[j]);
    //          int minElement = *min_element(temp.begin(), temp.end());
    //          minStore.push_back(minElement);
    //     }
    //     temp.clear();
    // }
    // int result = accumulate(minStore.begin(), minStore.end(), 0);
    // cout<<result % 1000000007;
// }



// int main(){
    
//     vector<int> vect = {3,2,1,4};
//     int sum = 0;

//     for(int i = 0; i < vect.size(); ++i){
//           sum += vect[i];
//           int minimum = vect[i];
//           for(int j = i + 1; j < vect.size(); ++j){
               
//            minimum = min(minimum, vect[j]);
//            sum = (sum + minimum) % (int)(1e7 + 9);
//           }
//     }
//     cout<<sum;

// }