#include <stdio.h>
#include <stdlib.h>

// Define the TreeNode structure
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Create a new tree node
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a value into the BST
struct TreeNode* insertNode(struct TreeNode* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } 
    else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

// Search for a value in the BST
int searchNode(struct TreeNode* root, int value) {
    if (root == NULL) {
        return 0;  
    }

    if (root->data == value) {
        return 1;
    } 
    else if (value < root->data) {
        return searchNode(root->left, value);
    } 
    else {
        return searchNode(root->right, value);
    }
}

// Calculate number of nodes in a d-ary tree of height h
int calculateNodes(int d, int h) {
    if (h == 0) {
        return 1;
    }
    return 1 + d * calculateNodes(d, h - 1);
}

int main() {
    struct TreeNode* root = NULL;

    // Insert values into the tree
    root = insertNode(root, 5);
    root = insertNode(root, 3);
    root = insertNode(root, 7);
    root = insertNode(root, 2);
    root = insertNode(root, 4);
    root = insertNode(root, 6);
    root = insertNode(root, 8);

    // Search for the value 7
    if (searchNode(root, 7)) {
        printf("The number 7 is in the tree.\n");
    } else {
        printf("The number 7 is not in the tree.\n");
    }

    // Example calculation for d = 2, h = 3 using calculateNodes()
    int d = 2;
    int h = 3;
    int nodes = calculateNodes(d, h);
    printf("The number of nodes in a tree with degree %d and height %d is: %d\n", d, h, nodes);

    return 0;
}
