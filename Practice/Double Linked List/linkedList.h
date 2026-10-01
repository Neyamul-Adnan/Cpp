#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *pre;
};

class linkedList
{
public:
    Node *start;
    linkedList()
    {
        start = nullptr;
    }

    Node *getNode()
    {
        Node *newNode = new Node();
        cout << "Enter data: ";
        cin >> newNode->data;
        newNode->next = nullptr;
        newNode->pre = nullptr;
        return newNode;
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

    void insertFirst()
    {
        cout << "Insert for first ";
        Node *newNode = getNode();
        if (start == nullptr)
        {
            start = newNode;
        }
        else
        {
            newNode->next = start;
            start->pre = newNode;
            start = newNode;
        }
    }

    void insertLast()
    {
        cout << "Insert for last ";
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
            newNode->pre = temp;
        }
    }

    int nodeCount()
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
};