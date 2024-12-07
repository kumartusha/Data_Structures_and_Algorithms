//  Implementation of Queue using array... in C++.

#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int arraySize;
    int front;
    int rear;

public:
    Queue(int size)
    {
        arr = new int[size];
        this->front = -1;
        this->rear = -1;
        this->arraySize = size;
    }

    // Operations performed for the Queue data Structure using array in C++.
    void enqueue(int data)
    {
         if(rear == arraySize -1){
            cout<<rear<<" "<<arraySize<<endl;
            cout<<"Queue is Full"<<endl;
        }else if(rear == -1){
            rear = front = 0;
            arr[rear] = data;
        }else{
            arr[++rear] = data;
        }
    }
    void dequeue()
    {
        if(rear == -1){
            cout<<"Queue is Empty"<<endl;
        }else if(rear == front){
            cout<<"The deleted element are:- "<<arr[front]<<endl;
              rear = front = -1;
        }else{
            cout<<"The deleted element are:- "<<arr[front]<<endl;
            ++front;
        }
    }

    void peek()
    {
        if(rear == -1){
            cout<<"Queue is empty"<<endl;
        }else{
            cout<<"The peek element are:- "<<arr[front]<<endl;
        }
    }

    void isEmpty()
    {
        if(rear == -1){
            cout<<"Queue is empty"<<endl;
        }else{
            cout<<"Queue is not empty"<<endl;
        }
    }
    void display(){
       if(rear == -1){
        cout<<"Queue is empty"<<endl;
       }else{
        for(int i = front ;i <= rear; i++){
            cout<<arr[i]<<" ";
        }
       }
    }
};

int main()
{

    Queue *queue = new Queue(5);


    queue->enqueue(3);
    queue->enqueue(4);
    queue->enqueue(5);
    queue->enqueue(6);
    queue->enqueue(7);

    queue->dequeue();
    queue->dequeue();
    queue->dequeue();
    queue->dequeue();
    queue->dequeue();

    queue->isEmpty();

    queue->peek();

    queue->display();

}
