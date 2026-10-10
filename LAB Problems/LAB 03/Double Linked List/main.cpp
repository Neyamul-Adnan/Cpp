#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    int n;
    cout << "This is a program to implement a Double linked list" << endl;
    cout << "Enter the number of elements to insert: ";
    cin >> n;

    linkedList *list = new linkedList();

    cout << "Inserting First elements in the list" << endl;
    for (int i = 0; i < n; i++)
    {
        list->insertFirst();
    }
    cout << "The list is " << endl;
    list->printList();
    cout << endl;
    list->insertLast();
    cout << "Now the list is " << endl;
    list->printList();
    cout << endl;
    list->insertMiddle();
    cout << "Now the list is " << endl;
    list->printList();
    cout << endl;
    list->deleteFirst();
    cout << "After deleting first data: " << endl;
    list->printList();
    cout << endl;
    list->deleteLast();
    cout << "After deleting last data: " << endl;
    list->printList();
    cout << endl;
    list->deleteMiddle();
    cout << "After deleting Middle data: " << endl;
    list->printList();

    return 0;
}