#include <iostream>
#include "bst.h"
using namespace std;

int main() {
    Node* root = nullptr;
    int choice;

    do {
        cout << "\n1. Insert\n2. Delete\n3. Search\n4. Pre-order\n5. In-order\n6. Post-order\n7. Level-order\n0. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insert(root);
                break;
            case 2:
                deleteNode(root);
                break;
            case 3:
                if (search(root))
                    cout << "Element found in BST\n";
                else
                    cout << "Element not found in BST\n";
                break;
            case 4:
                preOrderTraversal(root);
                cout << endl;
                break;
            case 5:
                inOrderTraversal(root);
                cout << endl;
                break;
            case 6:
                postOrderTraversal(root);
                cout << endl;
                break;
            case 7:
                levelOrderTraversal(root);
                cout << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}