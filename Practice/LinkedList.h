
#include <iostream>
#include "Node.h";
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
        cout << "Enter data";
        cin >> newNode->data;
        newNode->next = nullptr;
        return newNode;
    }
    void insertFirst()
    {
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
    void insertMiddle()
    {
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
    }
    void printList()
    {
        Node *temp = start;
        while (temp != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
};
