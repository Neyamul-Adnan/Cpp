#include <iostream>
using namespace std;

class CircularQueue
{
public:
    int *queue;
    int font;
    int rear;
    int length;
    int count;

    CircularQueue(int size)
    {
        font = 0;
        rear = 0;
        count = 0;
        length = size;
        queue = new int[length];
    }

    void enqueue(int item)
    {
        if (count == length)
        {
            cout << "Queue is full!" << endl;
        }
        else
        {
            queue[rear] = item;
            rear = (rear + 1) % length;
            count++;

            cout << item << " inserted into queue." << endl;
        }
    }

    void dequeue()
    {
        if (count == 0)
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << queue[font] << " deleted from queue." << endl;

            font = (font + 1) % length;
            count--;
        }
    }

    void print()
    {
        if (count == 0)
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << "Queue elements:" << endl;

            int i = font;

            for (int j = 0; j < count; j++)
            {
                cout << queue[i] << endl;

                i = (i + 1) % length;
            }
        }
    }

    ~CircularQueue()
    {
        delete[] queue;
    }
};