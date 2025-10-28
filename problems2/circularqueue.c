#include <stdio.h>      // For printf and standard I/O operations
#include <stdlib.h>     // For general utilities like dynamic memory (not used here but good practice)
#define MAX 5           // Define the maximum number of elements allowed in the circular queue

// Define a structure for the circular queue
typedef struct {
    int items[MAX];     // Array to store elements of the queue
    int front, rear;    // Two indices: front (for deletion) and rear (for insertion)
} circularQueue;

// Function to initialize the queue
void initQueue(circularQueue *q) {
    q->front = -1;      // -1 indicates that the queue is initially empty
    q->rear = -1;       // Both front and rear start at -1
}

// Function to check if the queue is full
int isFull(circularQueue *q) {
    // Queue is full if next rear position equals front (circularly)
    return (q->rear + 1) % MAX == q->front;
}

// Function to check if the queue is empty
int isEmpty(circularQueue *q) {
    // Empty when front is -1
    return q->front == -1;
}

// Function to insert an element into the queue
void enqueue(circularQueue *q, int element) {
    if(isFull(q)) {                     // Check if queue is full before inserting
        printf("queue is full\n");
        return;
    }
    if(isEmpty(q)) {                    // If inserting the first element
        q->front = 0;                   // Set front to 0
    }
    q->rear = (q->rear + 1) % MAX;      // Move rear forward circularly
    q->items[q->rear] = element;        // Insert the new element at rear position
    printf("Inserted-> %d\n", element); // Print confirmation
}

// Function to remove an element from the queue
int dequeue(circularQueue *q) {
    int element;
    if(isEmpty(q)) {                    // If queue is empty, no deletion possible
        printf("Queue is empty\n");
        return -1;                      // Return error code
    }
    element = q->items[q->front];       // Get the element at the front for deletion
    if(q->front == q->rear) {           // If there was only one element
        q->front = -1;                  // Reset queue to empty state
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX; // Move front forward circularly
    }
    return element;                     // Return the deleted element
}

// Function to display all elements in the queue
void printQueue(circularQueue *q) {
    int i;
    if(isEmpty(q)) {                    // Check if queue is empty before printing
        printf("Queue is empty\n");
        return;
    }
    printf("queue elements: ");
    i = q->front;                       // Start from front index
    while(1) {                          // Loop until we reach rear
        printf(" %d ", q->items[i]);    // Print current element
        if(i == q->rear) break;         // Stop when rear is printed
        i = (i + 1) % MAX;              // Move to next index circularly
    }
    printf("\n");
}

// Main function to demonstrate circular queue operations
int main() {
    circularQueue q;                    // Declare a queue variable

    initQueue(&q);                      // Initialize the queue

    enqueue(&q, 1);                     // Insert elements into the queue
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6);                     // This one fails because queue is full
    printQueue(&q);                     // Display current queue

    printf("Dequeued: %d\n",dequeue(&q)); // Remove two elements
    printf("Dequeued: %d\n",dequeue(&q));
    printQueue(&q);                     // Display updated queue

    return 0;                           // End of program
}
