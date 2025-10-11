#include <stdio.h>   // For standard input/output functions like printf() and scanf()
#include <stdlib.h>  // For malloc() and free() functions used in dynamic memory allocation

// =============================
// STRUCT DEFINITION: Node
// =============================
// Each node in the linked list will have two parts:
// 1. 'data' → stores an integer value
// 2. 'next' → pointer to the next node in the list
struct Node {
    int data;
    struct Node *next;
};

// ====================================
// FUNCTION: LinkedList
// PURPOSE: Creates and prints a linked list
// ====================================
// This function takes an array of integers (dataArr)
// and its size (n), builds a linked list from it,
// prints the list, and then frees the allocated memory.
void LinkedList(int dataArr[], int n) {
    // Declare pointers for head of the list, new node, current node, and a temporary pointer for freeing memory later
    struct Node *head = NULL, *newNode, *current, *temp;
    int i;  // Loop counter

    // ==========================
    // Create linked list nodes
    // ==========================
    // Loop through all elements of the input array
    for(i = 0; i < n; i++) {
        // Allocate memory dynamically for a new node
        newNode = (struct Node*)malloc(sizeof(struct Node));

        // Assign the current array element to the node’s data field
        newNode->data = dataArr[i];

        // Make the new node point to the current head (previous first node)
        // This effectively inserts each new node at the beginning of the list
        newNode->next = head;

        // Move head pointer to point to the new node — now the new node becomes the new head
        head = newNode;
    }

    // ==========================
    // Print the linked list
    // ==========================
    printf("Linked list: ");

    // Start traversal from the head node
    current = head;

    // Loop through the linked list until the end (NULL pointer)
    while(current != NULL) {
        // Print the current node's data followed by an arrow
        printf("%d -> ", current->data);

        // Move to the next node
        current = current->next;
    }

    // Indicate the end of the list
    printf("NULL\n");

    // ==========================
    // Free allocated memory
    // ==========================
    // Reset current to head to start freeing from the beginning
    current = head;

    // Loop through each node again to deallocate the memory
    while(current != NULL) {
        // Store current node temporarily
        temp = current;

        // Move to next node before freeing
        current = current->next;

        // Free the memory of the node stored in temp
        free(temp);
    }
}

// ====================================
// FUNCTION: main
// PURPOSE: Entry point of the program
// ====================================
int main() {
    int arr[100], i, n;  // Array to hold user input, loop counter, and size of array

    // Ask the user for the number of elements they want to store
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Ask the user to enter the array elements
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element and store it in array
    }

    // Call the LinkedList() function to create and display the linked list
    LinkedList(arr, n);

    // Return 0 indicates successful execution
    return 0;
}
