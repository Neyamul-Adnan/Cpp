#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    linkedList *list = new linkedList();

    list->insertFirst();
    list->insertFirst();
    list->insertFirst();
    list->insertFirst();
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