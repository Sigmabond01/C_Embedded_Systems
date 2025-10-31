#include <stdio.h>   // Standard input-output library for printf and scanf functions
#include <stdlib.h>  // Standard library for memory allocation (malloc) and exit functions

// Define a structure for the binary tree node
struct Node {
    int data;                 // Holds the value of the node
    struct Node *left;        // Pointer to the left child node
    struct Node *right;       // Pointer to the right child node
};

// Function to create a new node and initialize its members
struct Node *createNode(int value) {
    struct Node *newNoode = (struct Node*)malloc(sizeof(struct Node));  // Allocate memory for the new node
    newNoode->data = value;         // Assign the given value to the node
    newNoode->left = NULL;          // Initialize left child as NULL
    newNoode->right = NULL;         // Initialize right child as NULL
    return newNoode;                // Return the newly created node
}

// Recursive function for in-order traversal of the binary tree
void inOrderTraversal(struct Node *root) {
    if(root == NULL)                // Base case: if current node is NULL, return
    {
        return;                     // End this call of the recursion
    }
    inOrderTraversal(root->left);   // Visit and traverse the left subtree first
    printf("%d ", root->data);      // Print the value of the current node
    inOrderTraversal(root->right);  // Visit and traverse the right subtree next
}

int main() {
    struct Node *root = createNode(1);     // Create root node with value 1

    root->left = createNode(2);            // Create left child of root with value 2
    root->right = createNode(3);           // Create right child of root with value 3
    root->left->left = createNode(4);      // Create left child of node 2 with value 4
    root->left->right = createNode(5);     // Create right child of node 2 with value 5
    root->right->left = createNode(6);     // Create left child of node 3 with value 6
    root->right->right = createNode(7);    // Create right child of node 3 with value 7

    printf("Inorder traversal: ");         // Print message before displaying traversal result
    inOrderTraversal(root);                // Perform in-order traversal starting from root
    printf("\n");                          // Print a newline after traversal output

    return 0;                              // End of program
}
