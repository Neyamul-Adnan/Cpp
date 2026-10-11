#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    int choice;

    linkedList *list = new linkedList();

    cout << "This is a program to implement a Double linked list" << endl;
    
    do
    {
         cout << "\n========== MENU ==========" << endl;
        cout << "1. Insert First" << endl;
        cout << "2. Insert Last" << endl;
        cout << "3. Insert Middle" << endl;
        cout << "4. Delete First" << endl;
        cout << "5. Delete Last" << endl;
        cout << "6. Delete Middle" << endl;
        cout << "7. Print List" << endl;
        cout << "0. Exit" << endl;
        cin >> choice;

        
    } while (choice != 0);

    return 0;
}