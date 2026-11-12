#include <iostream>
using namespace std;

class LinearQueue
{
public:
    int *queue;
    int font;
    int rear;
    int length;

    LinearQueue(int size)
    {
        font = 0;
        rear = 0;
        length = size;
        queue = new int[length];
    }

    void enqueue(int item)
    {
        if (rear == length)
        {
            cout << "Queue is full!" << endl;
        }
        else
        {
            queue[rear] = item;
            rear++;

            cout << item << " inserted into queue." << endl;
        }
    }

    void dequeue()
    {
        if (font == rear)
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << queue[font] << " deleted from queue." << endl;
            font++;
        }
    }

    void print()
    {
        if (font == rear)
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << "Queue elements:" << endl;

            for (int i = font; i < rear; i++)
            {
                cout << queue[i] << endl;
            }
        }
    }

};