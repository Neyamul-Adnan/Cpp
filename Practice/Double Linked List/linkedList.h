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

    void insertMiddle(){
        cout<<"Insert for Middle ";
        Node* newNode = getNode();
        if (start == nullptr)
        {
            start = newNode;
        }
        else{
            int position;
            cout<<"Enter the position: ";
            cin>>position;
            if (position>1 && position <= nodeCount())
            {
                Node* temp = start;
                int ctr = 1;
                while (ctr < position -1)
                {
                    temp = temp->next;
                    ctr++;
                }
                newNode->next = temp->next;
                newNode->pre = temp;
                temp->next->pre = newNode;
                temp->next = newNode;
                
            }
            else{
                cout<<"Invalid position";
            }
            
        }
        
    }

    void deleteFirst(){
        if (start == nullptr)
        {
            cout<<"List is empty";
        }
        else{
            start = start->next;
            start->pre = nullptr;
        }
    }

    void deleteLast(){
        if (start == nullptr)
        {
            cout<<"List is empty";
        }
        else{
            Node* temp = start;
            while (temp->next->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next->pre = nullptr;
            temp->next = nullptr;
        }
    }
};