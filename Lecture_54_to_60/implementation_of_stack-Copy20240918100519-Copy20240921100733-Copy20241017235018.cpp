#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void pushElement(int element)
    {
        if (size - top > 1)
        {
            ++top;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is Overflow" << endl;
        }
    }
    void popElement()
    {
        if (top >= 0)
        {
            --top;
        }
        else
        {
            cout << "Stack is Underflow" << endl;
        }
    }
    void peekElement()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "The top value are:- " << arr[top] << endl;
        }
    }
    void isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Stack is not Empty" << endl;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Underflow" << endl;
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
};

int main()
{

    Stack *stack = new Stack(5);

    stack->pushElement(10);
    stack->pushElement(20);
    stack->pushElement(30);
    stack->pushElement(40);
    // stack->pushElement(50);
    // stack->pushElement(60);

    stack->popElement();

    stack->peekElement();

    stack->isEmpty();

    stack->display();
}