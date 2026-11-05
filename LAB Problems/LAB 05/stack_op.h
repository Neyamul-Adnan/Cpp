

#include <iostream>
using namespace std;

class Stack
{
public:
    int *stack;
    int top;
    int length;

    Stack(int size)
    {
        top = 0;
        length = size;

        stack = new int[length];
    }

    // Push
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

    // Pop
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

    // Peek
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

    // Print
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
