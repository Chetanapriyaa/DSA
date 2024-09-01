#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    return 0;
}
/*
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to insert nodes in the binary tree
Node* insertNode() {
    int val;
    cout << "Enter value (-1 for no node): ";
    cin >> val;

    // Base case for recursion
    if (val == -1) {
        return NULL;
    }

    // Create the node with the entered value
    Node* newNode = new Node(val);

    // Recursively insert the left and right children
    cout << "Enter left child of " << val << endl;
    newNode->left = insertNode();

    cout << "Enter right child of " << val << endl;
    newNode->right = insertNode();

    return newNode;
}

int main() {
    Node* root = insertNode();
    return 0;
}

*/