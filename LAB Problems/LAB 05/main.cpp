#include <iostream>
#include "stack_op.h"

using namespace std;

int main()
{
    int size, n, item;

    cout << "Enter stack size: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid stack size!";
        return 0;
    }

    Stack *s = new Stack(size);

    cout << "How many elements to push: ";
    cin >> n;

    if (n < 0 || n > size)
    {
        cout << "Invalid number of elements!";
        delete s;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter item: ";
        cin >> item;

        s->push(item);
    }

    cout << "\nAfter Pop:" << endl;
    s->pop();

    cout << "\nAfter Peek:" << endl;
    s->peek();

    cout << "\nAfter Print:" << endl;
    s->print();

    delete s;

    return 0;
}