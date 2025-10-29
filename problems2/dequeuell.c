#include <stdio.h>
#include <stdlib.h>

// Define a structure for each node in the deque
struct Node {
    int data;                // To store the value
    struct Node *prev;       // Pointer to the previous node
    struct Node *next;       // Pointer to the next node
};

// Initialize global pointers for front and rear
struct Node *front = NULL;
struct Node *rear = NULL;

// Function to insert an element at the front
void insertFront(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node)); // Create a new node
    newNode->data = value;    // Assign value
    newNode->prev = NULL;     // New node will be first, so no previous
    newNode->next = front;    // Its next will be the current front

    if(front == NULL) {       // If deque is empty
        front = rear = newNode;
    } else {                  // Otherwise link the new node before the old front
        front->prev = newNode;
        front = newNode;      // Update front pointer
    }
    printf("%d inserted at front\n", value);
}

// Function to insert an element at the rear
void insertRear(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node)); // Create a new node
    newNode->data = value;    // Assign value
    newNode->next = NULL;     // It will be the last node
    newNode->prev = rear;     // Link it to current rear

    if(rear == NULL) {        // If deque is empty
        front = rear = newNode;
    } else {                  // Otherwise link the current rear to the new node
        rear->next = newNode;
        rear = newNode;       // Update rear pointer
    }
    printf("%d inserted at rear\n", value);
}

// Function to delete an element from the front
void deleteFront() {
    if(front == NULL) {       // Check if deque is empty
        printf("Dequeue is empty\n");
        return;
    }
    struct Node *temp = front;              // Temporarily store front node
    printf("Deleted from front: %d\n", temp->data);
    front = front->next;                    // Move front forward
    if(front == NULL) {                     // If deque becomes empty
        rear = NULL;
    } else {
        front->prev = NULL;                 // Otherwise remove backward link
    }
    free(temp);                             // Free the deleted node
}

// Function to delete an element from the rear
void deleteRear() {
    if(rear == NULL) {        // Check if deque is empty
        printf("Dequeue is empty\n");
        return;
    }
    struct Node *temp = rear;               // Temporarily store rear node
    printf("Deleted from rear: %d\n", temp->data);
    rear = rear->prev;                      // Move rear backward
    if(rear == NULL) {                      // If deque becomes empty
        front = NULL;
    } else {
        rear->next = NULL;                  // Otherwise remove forward link
    }
    free(temp);                             // Free the deleted node
}

// Function to display all elements
void display() {
    struct Node *temp = front;              // Start from front
    if(temp == NULL) {
        printf("Dequeue is empty\n");
        return;
    }
    printf("Dequeue elements (front to rear): ");
    while(temp != NULL) {                   // Traverse till end
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function for menu-driven deque operations
int main() {
    int choice, value;
    while(1) {
        printf("\n--- Deque Operations ---\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at Rear\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to insert at front: ");
                scanf("%d", &value);
                insertFront(value);
                break;
            case 2:
                printf("Enter value to insert at rear: ");
                scanf("%d", &value);
                insertRear(value);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0); // Exit the program
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
