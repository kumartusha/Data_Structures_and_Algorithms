#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
   int *arr;
   int size;
   int front;
   int rear;

public:
   Queue(int arrSize)
   {
      arr = new int[arrSize];
      this->size = arrSize;
      this->front = -1;
      this->rear = -1;
   }

   //     First For inserting the element..
   int enqueue(int data)
   {
      if (rear == size)
      {
         cout << "Queue is Full";
      }
      else if(rear == -1)
      {
         rear++;
         arr[rear] = data;
         // rear++;
      }else{
         rear++;
         arr[rear] = data;
      }
   }
   //     Deleting the elements from the queue.
   int deque()
   {

      if (front == rear)
      {
         cout << "Queue is Empty Bhai";
      }else if(front == -1){
         front = 0;
      }
      else
      {
         cout << "The deleted item are:- " << arr[front++] << endl;
      }
   }
   //  Find the peek element in the queue
   void peek()
   {
      if (rear == front)
      {
         cout << "Queue is Empty Bhai" << endl;
      }
      else
      {
         cout << "The peek element are:- " << arr[front] << endl;
      }
   }

   //     Check if the queue is empty or not..
   void isEmpty()
   {
      if (front == rear)
      {
         cout << "The Queue is empty";
      }
      else
      {
         cout << "Queue is not empty";
      }
   }

   //    Printing the element of the queue..
   void display()
   {
      for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
      {
         cout << arr[i] << " ";
      }
      cout << endl;
   }
};

int main()
{

   Queue *queue = new Queue(5);

   queue->enqueue(10);
   queue->display();
   queue->enqueue(20);
   queue->display();
   queue->enqueue(30);
   queue->display();
   queue->enqueue(40);
   queue->display();
   queue->enqueue(50);
   queue->display();


   // queue->deque();
   // queue->deque();

   cout << queue->rear;

}