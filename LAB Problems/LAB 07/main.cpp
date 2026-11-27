#include <iostream>
#include "BST copy.h"
using namespace std;

int main()
{
    Node *root = nullptr;
    int choice;

    cout << "\n  Binary Search Tree (BST)  \n";

    for (int i = 0; i <= 10; i++)
    {
        insert(root);
    }
    cout<<"Pre Order Traversal: ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"In Order Traversal: ";
    inOrderTraversal(root);
    cout<<endl;

    cout<<"Post Order Traversal: ";
    postOrderTraversal(root);
    cout<<endl;

    cout<<"Level Order Traversal: ";
    printLevelOrder(root);
    cout<<endl;
    

    if(search(root)){
        cout<<"Item found";
        cout<<endl;
    }
    else{
        cout<<"Item not found";
        cout<<endl;
    }
    deleteNode(root);
    cout<<endl;

    cout<<"After Delete: "<<endl;
    cout<<"Pre Order Traversal: ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"In Order Traversal: ";
    inOrderTraversal(root);
    cout<<endl;

    cout<<"Post Order Traversal: ";
    postOrderTraversal(root);
    cout<<endl;

    cout<<"Level Order Traversal: ";
    printLevelOrder(root);
    cout<<endl;

    return 0;
}