
#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList
{
public:
    Node *start;
    LinkedList()
    {
        start = nullptr;
    }
    Node *getNode()
    {
        Node *newNode = new Node();
        cout << "Enter data: ";
        cin >> newNode->data;
        newNode->next = nullptr;
        return newNode;
    }
    void insertFirst()
    {
        cout << "Inserting at first ";
        Node *newNode = getNode();
        if (start == nullptr)
        {
            start = newNode;
        }
        else
        {
            newNode->next = start;
            start = newNode;
        }
    }
    void insertLast()
    {
        cout << "Inserting at last ";
        Node *newNode = getNode();
        if (start == nullptr)
        {
            start = newNode;
        }
        else
        {
            Node *temp = start;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    int nodeCounter()
    {
        Node *temp = start;
        int count = 1;
        while (temp->next != nullptr)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    void insertMiddle()
    {
        cout << "Inserting at middle ";
        Node *newNode = getNode();
        if (start == nullptr)
        {
            start = newNode;
        }
        else
        {
            int position;
            cout<<endl;
            cout << "Enter the position: ";
            cin >> position;
            if (position > 1 && position <= nodeCounter())
            {
                Node *temp = start;
                int ctr = 1;
                while (ctr < position - 1)
                {
                    temp = temp->next;
                    ctr++;
                }
                newNode->next = temp->next;
                temp->next = newNode;
            }
            else
            {
                cout << "Invalid Position";
            }
        }
    }
    void deleteFirst()
    {
        if (start == nullptr)
        {
            cout << "List is empty";
        }
        else
        {
            start = start->next;
        }
    }
    void deleteLast()
    {
        if (start == nullptr)
        {
            cout << "List is empty";
        }
        else
        {
            Node *temp = start;
            while (temp->next->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = nullptr;
        }
    }
    void deleteMiddle()
    {
        if (start == nullptr)
        {
            cout << "List is empty";
        }
        else
        {
            int position;
            cout<<endl;
            cout << "Deleting at middle ";
            cout << "Enter the position: ";
            cin >> position;
            if (position > 1 && position <= nodeCounter())
            {
                Node *temp = start;
                int ctr = 1;
                while (ctr < position - 1)
                {
                    temp = temp->next;
                    ctr++;
                }

                temp->next = temp->next->next;
            }
            else
            {
                cout << "Invalid Position";
            }
        }
    }
    void printList()
    {
        Node *temp = start;
        while (temp != nullptr)
        {
            cout << temp->data;

            if (temp->next != nullptr)
            {
                cout << "->";
            }
            temp = temp->next;
        }
    }
};
