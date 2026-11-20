#include <iostream>
#include "BST.h"
using namespace std;

int main()
{
    Node *root = nullptr;
    int choice;

    cout << "\n  Binary Search Tree (BST)  \n";

    for (int i = 0; i <= 7; i++)
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
    levelOrderTraversal(root);
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
    levelOrderTraversal(root);
    cout<<endl;

    return 0;
}