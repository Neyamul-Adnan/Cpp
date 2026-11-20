#include <iostream>
using namespace std;

class Node{
 public:
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

Node* insertRec(Node* temp, int item) {
    if (temp == nullptr) {
        temp = getNode(item);
        return temp;
    }
     else if (item < temp->data) {
        temp->left = insertRec(temp->left, item);
    }
    else if (item > temp->data) {
        temp->right = insertRec(temp->right, item);
    }
    return temp;
}


void insert(Node*& root) {
    cout << "Enter item: ";
    int item;
    cin >> item;
    root = insertRec(root, item);
}


int minimum(Node* temp) {
    while (temp->left != nullptr) {
        temp = temp->left;
    }
    return temp->data;
}

Node* deleteDataRecursive(Node* temp, int item) {
   
    if (temp == nullptr) {
        return nullptr;
    }

   
    if (item < temp->data) {
        temp->left = deleteDataRecursive(temp->left, item);
    }
    else if (item > temp->data) {
        temp->right = deleteDataRecursive(temp->right, item);
    }
    else {
    

       //No child
        if (temp->left == nullptr && temp->right == nullptr) {
            delete temp;
            return nullptr;
        }

        //One child
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

        // Two children
        int successorValue = minimum(temp->right);
        temp->data = successorValue;
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
    cout << "Enter the item you want search: " << endl;
    cin >> item;
    return searchDataRecursive(root, item);
}


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