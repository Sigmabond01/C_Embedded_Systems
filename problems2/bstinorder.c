#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int value) {
    struct Node *newNoode = (struct Node*)malloc(sizeof(struct Node));
    newNoode->data = value;
    newNoode->left = NULL;
    return newNoode;
}

void inOrderTraversal(struct Node *root) {
    if(root == NULL) 
    {
        return;
    }
    inOrderTraversal(root->left);
    printf("%d", root->data);
    inOrderTraversal(root->right);
}

int main() {
    struct Node *root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);
    root->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Inorder traversal: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}

