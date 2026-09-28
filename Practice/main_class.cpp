#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList* list = new LinkedList();

    list->insertFirst();
    list->insertFirst();
    list->insertFirst();
    list->insertFirst();
    list->insertLast();
    cout<<"The list is "<<endl;
    list->printList();
    list->deleteFirst();
    cout<<"After deleting first element:"<<endl;
    list->printList();
    cout<<"After deleting last element:"<<endl;
    list->deleteLast();
    list->printList();

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}