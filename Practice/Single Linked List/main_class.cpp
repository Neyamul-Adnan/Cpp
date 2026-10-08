#include <iostream>
/*LinkedList.h-এর ভেতরে আগে থেকেই #include "Node.h" করা আছে। 
তাই main_class.cpp-তে আলাদা করে আবার #include "Node.h" করার দরকার নেই।*/
#include "LinkedList.h"

using namespace std;

int main()
{

    int n;
    cout << "Enter the number of elements to insert: ";
    cin >> n;
    
    LinkedList *list = new LinkedList();

    cout<< "Inserting elements in the list" << endl;
    for(int i = 0; i < n; i++) {
        list->insertFirst();
    }
    cout << "The list is " << endl;
    list->printList();
    list->deleteFirst();
    cout << endl <<"After deleting first element:" << endl;
    list->printList();
    list->deleteMiddle();
    cout << endl << "After deleting middle element:" << endl;
    list->printList();
    list->deleteLast();
    cout << endl << "After deleting last element:" << endl;
    list->printList();

    return 0;
}