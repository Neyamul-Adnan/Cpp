#include <iostream>
#include "bst.h"
using namespace std;

int main() {
    Node* root = nullptr;
    int choice;

    do {
        cout << "\n--- Binary Search Tree (BST) Operations ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Pre-order Traversal\n";
        cout << "5. In-order Traversal\n";
        cout << "6. Post-order Traversal\n";
        cout << "7. Level-order Traversal\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insert(root);
                break;

            case 2:
                deleteNode(root);
                break;

            case 3:
                if (search(root)) {
                    cout << "Item found in the BST." << endl;
                } else {
                    cout << "Item not found in the BST." << endl;
                }
                break;

            case 4:
                cout << "Pre-order: ";
                preOrderTraversal(root);
                cout << endl;
                break;

            case 5:
                cout << "In-order: ";
                inOrderTraversal(root);
                cout << endl;
                break;

            case 6:
                cout << "Post-order: ";
                postOrderTraversal(root);
                cout << endl;
                break;

            case 7:
                cout << "Level-order: ";
                levelOrderTraversal(root);
                cout << endl;
                break;

            case 0:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}