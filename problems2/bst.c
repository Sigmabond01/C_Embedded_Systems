#include <stdio.h>      // Standard input-output library for printf
#include <stdlib.h>     // Standard library for malloc and exit

// Define a structure for a node in the Binary Search Tree
typedef struct node {
    int key;                 // Data value stored in the node
    struct node *left;       // Pointer to the left child node
    struct node *right;      // Pointer to the right child node
} Node;

// Function to create a new node with a given key
Node *createNode(int key) {
    Node *newNode = (Node*)malloc(sizeof(Node));   // Dynamically allocate memory for a new node
    if(newNode == NULL) {                          // Check if memory allocation failed
        fprintf(stderr, "Out of memory\n");        // Print error message to stderr
        exit(1);                                   // Terminate the program if allocation fails
    }
    newNode->key = key;                            // Assign the given key to the node
    newNode->left = newNode->right = NULL;         // Initialize left and right child pointers to NULL
    return newNode;                                // Return the newly created node
}

// Function to insert a new key into the BST
Node *insert(Node *node, int key) {
    if(node == NULL) {                             // If current position is empty, insert here
        return createNode(key);                    // Create and return a new node
    }
    if(key < node->key) {                          // If key is smaller than current node's key
        node->left = insert(node->left, key);      // Recur into the left subtree
    } else if (key > node->key) {                  // If key is greater than current node's key
        node->right = insert(node->right, key);    // Recur into the right subtree
    }                                              // Duplicate keys are ignored
    return node;                                   // Return the (possibly unchanged) node pointer
}

// Function to perform in-order traversal of the BST
void inOrderTraversal(Node *root) {
    if(root != NULL) {                             // If current node exists
        inOrderTraversal(root->left);              // Traverse the left subtree
        printf("%d ", root->key);                  // Visit the current node (print its key)
        inOrderTraversal(root->right);             // Traverse the right subtree
    }
}

// Main function — program execution starts here
int main() {
    Node *root = NULL;                             // Initialize root pointer to NULL (empty tree)
    root = insert(root, 50);                       // Insert the first node as root

    insert(root, 30);                              // Insert node with key 30
    insert(root, 20);                              // Insert node with key 20
    insert(root, 40);                              // Insert node with key 40
    insert(root, 70);                              // Insert node with key 70
    insert(root, 60);                              // Insert node with key 60
    insert(root, 80);                              // Insert node with key 80

    printf("Inorder traversal of BST: ");          // Display message before traversal output
    inOrderTraversal(root);                        // Perform in-order traversal and print elements
    printf("\n");                                  // Print a newline for clean output
    
    return 0;                                      // End of program, return success status
}
