// #include <bits/stdc++.h>
// using namespace std;

// // // int main()
// // // {
// // //     // vector<int> nums1 = {0};
// // //     // int m = nums1.size();
// // //     // vector<int> nums2 = {1};
// // //     // int n = nums2.size();

// // //     // for(int i = 0, j = m; i < nums2.size() ; ){
// // //     //          nums1.push_back(nums2[i++]);
// // //     //          ++j;
// // //     // }

// // //     // sort(nums1.begin(), nums1.end());

// // //     // for(int i = 0; i < nums1.size() ; ++i){
// // //     //     cout<<nums1[i]<<" ";
// // //     // }
// // // }

// // class Queue
// // {

// //     int *arr;
// //     int arrSize;
// //     int front;
// //     int rear;

// // public:
// //     Queue(int size)
// //     {
// //         arr = new int[size];
// //         this->arrSize = size;
// //         this->front = -1;
// //         this->rear = -1;
// //     }
// //     //  Operations on the circular Queue.

// //     void enqueue(int data)
// //     {
// //         if ((front == 0 && rear == arrSize - 1) || (front == (rear % arrSize) + 1))
// //         {
// //             cout << "Queue is Full" << endl;
// //         }
// //         else if (rear == -1 && front == -1)
// //         {
// //             rear = front = 0;
// //             arr[rear] = data;
// //         }
// //         else
// //         {
// //             rear = (rear + 1) % arrSize;
// //             arr[rear] = data;
// //         }
// //     }

// //     void dequeue()
// //     {
// //         //   for handling the multiple conditions for delete the element from the circular Queue..
// //         if (rear == -1 && front == -1)
// //         {
// //             cout << "Queue is Empty" << endl;
// //         }
// //         else if (rear == front)
// //         {
// //             rear = front = -1;
// //         }
// //         else
// //         {
// //             //  So we traverse the front using the circular manner..
// //             cout << "The deleted element are:- " << arr[front] << endl;
// //             front = ((front + 1) % arrSize);
// //         }
// //     }

// //     void isEmpty()
// //     {
// //         if (rear == -1 && front == -1)
// //         {
// //             cout << "Queue is Empty" << endl;
// //         }
// //         else
// //         {
// //             cout << "Queue is not Empty" << endl;
// //         }
// //     }

// //     void peek()
// //     {
// //         if (rear == -1 && front == -1)
// //         {
// //             cout << "Queue is Empty" << endl;
// //         }
// //         else
// //         {
// //             cout << "The peek Element are:- " << arr[front] << endl;
// //         }
// //     }
// //     void back()
// //     {
// //         if (rear == -1 && front == -1)
// //         {
// //             cout << "Queue is Empty" << endl;
// //         }
// //         else
// //         {
// //             cout << "The back Element are:- " << arr[rear] << endl;
// //         }
// //     }
// //     void display()
// //     {
// //         //    For printing the queue element we want to move the front according the circular Queue.
// //         //    cout<<arr[front]<<endl;
// //         // for(int i = front; i < rear ;){
// //         //     cout<<arr[i]<<" ";
// //         //     i = (i + 1) % arrSize;
// //         // }cout<<arr[rear];

// //         int i = front;
// //         while(true){
// //             cout<<arr[i]<<" ";
// //             if(i == rear)
// //             break;
// //           i = (i + 1) % arrSize;
// //         }

// //     }
// // };

// // int main()
// // {

// //     //  Implementation of the circular queue using the array in C++.
// //     Queue *queue = new Queue(5);
// //     queue->isEmpty();

// //     queue->enqueue(1);
// //     queue->enqueue(2);
// //     queue->enqueue(3);
// //     queue->enqueue(4);
// //     queue->enqueue(5);
// //     // queue->enqueue(5);

// //     queue->peek();
// //     queue->back();

// //     queue->display();
// // }

// int main(){

// //  Find the perfect number..
// int number = 6;
// int sum = 0;
// for(int i = 1; i < number ;++i){
//     if(number % i == 0){
//         sum = sum + i;
//     }
// }
// if(sum == number)
// return true;
// else{
//     return false;
// }

// }