
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
        cout << "Invalid stack size!" << endl;
        return 0;
    }

    Stack s(size);

    cout << "How many elements do you want to push? ";
    cin >> n;

    if (n < 0 || n > size)
    {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

    // Push elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter item: ";
        cin >> item;

        s.push(item);
    }

    // Pop one element
    cout << "\nAfter Pop:" << endl;
    s.pop();

    // Peek top element
    cout << "\nAfter Peek:" << endl;
    s.peek();

    // Print all elements
    cout << "\nAfter Print:" << endl;
    s.print();

    return 0;
}
