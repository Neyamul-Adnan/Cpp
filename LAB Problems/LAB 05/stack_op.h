#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class Stack
{
private:
    int stack[100];
    int top;
    int length;

public:
    Stack()
    {
        top = 0;
        length = 100;
    }

    // Push: Insert an item onto the stack
    void push(int item)
    {
        if (top == length)
        {
            cout << "Stack is full!" << endl;
        }
        else
        {
            stack[top] = item;
            top++;
            cout << item << " pushed into stack." << endl;
        }
    }

    // Pop: Delete the last item from the stack
    void pop()
    {
        if (top == 0)
        {
            cout << "Stack is empty!" << endl;
        }
        else
        {
            top--;
            cout << "Item popped from stack." << endl;
        }
    }

    // Peek: Return the last item from the stack
    void peek()
    {
        if (top == 0)
        {
            cout << "Stack is empty!" << endl;
        }
        else
        {
            cout << "Top element: " << stack[top - 1] << endl;
        }
    }

    // Print: Display all items of the stack
    void print()
    {
        if (top == 0)
        {
            cout << "Stack is empty!" << endl;
        }
        else
        {
            cout << "Stack elements:" << endl;

            for (int i = top - 1; i >= 0; i--)
            {
                cout << stack[i] << endl;
            }
        }
    }
};

#endif