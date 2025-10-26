#include <stdio.h>      // Standard input/output functions (for printf, etc.)
#include <stdlib.h>     // Standard library (for malloc, free, etc.)

// Define a Node structure for the stack
struct Node {
    int data;               // Holds the value stored in this node
    struct Node *next;      // Pointer to the next node in the stack
};

// Define a Stack structure
struct Stack {
    struct Node *top;       // Pointer to the top (latest) node in the stack
};

// Initialize the stack (set top to NULL because it’s empty)
void initializeStack(struct Stack *stack) {
    stack->top = NULL;      // The stack is empty initially
}

// Check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == NULL;  // Returns 1 (true) if stack is empty, 0 otherwise
}

// Push a new element onto the stack
void push(struct Stack *stack, int element) {
    // Allocate memory for a new node
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    // Check if memory allocation failed
    if (newNode == NULL) {
        printf("Memory allocation failed! Cannot push %d onto stack\n", element);
        return;             // Exit the function if allocation fails
    }

    // Assign the given data to the new node
    newNode->data = element;

    // Make the new node point to the previous top of the stack
    newNode->next = stack->top;

    // Update the stack’s top pointer to this new node
    stack->top = newNode;

    // Confirm push operation to user
    printf("Pushed %d onto stack\n", element);
}

// Pop (remove) the top element from the stack
int pop(struct Stack *stack) {
    // Check if the stack is empty
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");  // Cannot pop from an empty stack
        return -1;                     // Return -1 as an error indicator
    }

    // Temporarily hold the top node
    struct Node *poppedNode = stack->top;

    // Store the data of the node to return later
    int poppedElement = poppedNode->data;

    // Move the top pointer to the next node in the stack
    stack->top = poppedNode->next;

    // Free the memory of the removed node
    free(poppedNode);

    // Return the popped element’s value
    return poppedElement;
}

// Display all elements in the stack
void display(struct Stack *stack) {
    // Start from the top node
    struct Node *current = stack->top;

    // Traverse through all nodes until reaching the end (NULL)
    while (current != NULL) {
        printf("%d -> ", current->data);  // Print current node’s data
        current = current->next;          // Move to the next node
    }

    // Indicate end of stack
    printf("NULL\n");
}

// Main function — program entry point
int main() {
    struct Stack stack;       // Declare a stack variable

    initializeStack(&stack);  // Initialize the stack (top = NULL)

    // Push elements onto the stack
    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);
    push(&stack, 20);

    // Display current stack contents
    printf("Stack elements: ");
    display(&stack);

    // Pop two elements from the stack
    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));

    // Display stack after popping
    printf("Stack after popping: ");
    display(&stack);

    return 0;   // Return 0 to indicate successful program execution
}
