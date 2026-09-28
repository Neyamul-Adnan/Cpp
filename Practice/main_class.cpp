#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main()
{

    LinkedList *list = new LinkedList();

    list->insertFirst();
    list->insertFirst();
    list->insertFirst();
    list->insertFirst();
    list->insertLast();
    cout << "The list is " << endl;
    list->printList();
    list->deleteFirst();
    cout << "After deleting first element:" << endl;
    list->printList();
    cout << "After deleting last element:" << endl;
    list->deleteLast();
    list->printList();

    return 0;
}