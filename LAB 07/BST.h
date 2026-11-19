#ifndef BST_H
#define BST_H

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* getNode(int item) {
    Node* newNode = new Node();
    newNode->data = item;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// a. Insert an element into the BST
Node* insertRecursive(Node* temp, int item) {
    if (temp == nullptr) {
        temp = getNode(item);
        return temp;
    }
    else if (item < temp->data) {
        temp->left = insertRecursive(temp->left, item);
    }
    else if (item > temp->data) {
        temp->right = insertRecursive(temp->right, item);
    }
    return temp;
}

void insert(Node*& root) {
    cout << "Enter item";
    int item;
    cin >> item;
    root = insertRecursive(root, item);
}

// b. Delete an element from the BST
int minimum(Node* temp) {
    while (temp->left != nullptr) {
        temp = temp->left;
    }
    return temp->data;
}

Node* deleteDataRecursive(Node* temp, int item) {
    // Base case: tree is empty or item not found
    if (temp == nullptr) {
        return nullptr;
    }

    // Step 1: Search for the node to delete
    if (item < temp->data) {
        temp->left = deleteDataRecursive(temp->left, item);
    }
    else if (item > temp->data) {
        temp->right = deleteDataRecursive(temp->right, item);
    }
    else {
        // Step 2: Node found handle deletion

        // Case 1: No child (leaf node)
        if (temp->left == nullptr && temp->right == nullptr) {
            delete temp;
            return nullptr;
        }

        // Case 2: One child
        if (temp->left == nullptr) {
            Node* rightChild = temp->right;
            delete temp;
            return rightChild;
        }
        else if (temp->right == nullptr) {
            Node* leftChild = temp->left;
            delete temp;
            return leftChild;
        }

        // Case 3: Two children
        // Find inorder successor (minimum in right subtree)
        int successorValue = minimum(temp->right);
        // Replace current node's data
        temp->data = successorValue;
        // Delete the inorder successor
        temp->right = deleteDataRecursive(temp->right, successorValue);
    }
    return temp;
}

void deleteNode(Node*& root) {
    int item;
    cout << "Enter the item you want delete" << endl;
    cin >> item;
    root = deleteDataRecursive(root, item);
}

// c. Search an element from the BST
bool searchDataRecursive(Node* root, int item) {
    if (root == nullptr) {
        return false;
    }
    else if (item < root->data) {
        return searchDataRecursive(root->left, item);
    }
    else if (item > root->data) {
        return searchDataRecursive(root->right, item);
    }
    else {
        return true;
    }
}

bool search(Node* root) {
    int item;
    cout << "Enter the item you want search" << endl;
    cin >> item;
    return searchDataRecursive(root, item);
}

// d. Tree traversal techniques (pre-order, in-order, post-order, level-order)
void preOrderTraversal(Node* temp) {
    if (temp != nullptr) {
        cout << temp->data << " ";
        preOrderTraversal(temp->left);
        preOrderTraversal(temp->right);
    }
}

void inOrderTraversal(Node* temp) {
    if (temp != nullptr) {
        inOrderTraversal(temp->left);
        cout << temp->data << " ";
        inOrderTraversal(temp->right);
    }
}

void postOrderTraversal(Node* temp) {
    if (temp != nullptr) {
        postOrderTraversal(temp->left);
        postOrderTraversal(temp->right);
        cout << temp->data << " ";
    }
}

int height(Node* temp) {
    if (temp == nullptr) {
        return 0;
    }
    int leftHeight = height(temp->left);
    int rightHeight = height(temp->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

void printCurrentLevel(Node* temp, int level) {
    if (temp == nullptr) {
        return;
    }
    if (level == 1) {
        cout << temp->data << " ";
    }
    else if (level > 1) {
        printCurrentLevel(temp->left, level - 1);
        printCurrentLevel(temp->right, level - 1);
    }
}

void levelOrderTraversal(Node* root) {
    int h = height(root);
    for (int i = 1; i <= h; i++) {
        printCurrentLevel(root, i);
    }
}

#endif