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
        return newNode;
    }

};