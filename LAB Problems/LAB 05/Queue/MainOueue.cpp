#include <iostream>
#include "LinearQueue.h"

using namespace std;

int main()
{
    int size, n;
    int item;

    cout << "Enter the queue size: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid queue size!";
        return 0;
    }

   LinearQueue *q = new LinearQueue(size);

    cout << "How many elements to enqueue: ";
    cin >> n;

    if (n < 0 || n > size)
    {
        cout << "Invalid number of elements!";
        delete q;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter item: ";
        cin >> item;

        q->enqueue(item);
    }
    q->print();

    cout << "\nAfter Dequeue:" << endl;
    q->dequeue();
    q->print();

    cout << "\nAfter Print:" << endl;
    q->print();


    return 0;
}