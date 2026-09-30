#include<iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *pre;
};

class linkedList{
    public:

    Node* start;
    linkedList(){
        start = nullptr;
    }

    Node* getNode(){
        Node* newNode = new Node();
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

    void insertFirst(){
        Node* newNode = getNode();
        if (start == nullptr)
        {
            start = newNode;
        }
        else{
            newNode->next = start;
            start->pre = newNode;
            start = newNode;
        }
        
    }

};