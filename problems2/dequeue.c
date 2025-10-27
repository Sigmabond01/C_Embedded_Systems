#include <stdio.h>      // For printf() — used to display output
#include <stdlib.h>     // For exit() — used when program must terminate

#define MAX 10         // The maximum number of elements that can fit in the deque

int deque[MAX];         // Array that will hold all elements of the deque
int front = -1;         // Index of the front element (-1 means deque is empty)
int rear = -1;          // Index of the rear element (-1 means deque is empty)

int isFull() {
    // The deque is full if front is just ahead of rear in circular order.
    // Two cases: (1) front = 0 and rear = MAX-1 (wrapped around full)
    // or (2) front == rear + 1 (normal circular overflow)
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

int isEmpty() {
    // If front == -1, there’s nothing in the deque
    return (front == -1);
}

void insertFront(int value) {
    // First check: no more space left
    if (isFull()) {
        printf("Deque is full\n");
        return;  // Exit the function without inserting
    }

    // Case 1: If deque is empty, both front and rear point to the same element
    if (isEmpty()) {
        front = rear = 0;
    }
    // Case 2: If front is at index 0, wrap it around to the last index (MAX-1)
    else if (front == 0) {
        front = MAX - 1;
    }
    // Case 3: Normal case, move front one position back
    else {
        front = front - 1;
    }

    // Place the new value at the new front index
    deque[front] = value;

    // Print confirmation for clarity
    printf("Inserted %d at front\n", value);
}

void insertRear(int value) {
    // Check if there’s space to insert
    if (isFull()) {
        printf("Deque is full\n");
        return;
    }

    // Case 1: If deque is empty, initialize both ends to 0
    if (isEmpty()) {
        front = rear = 0;
    }
    // Case 2: If rear is at last index, wrap around to 0
    else if (rear == MAX - 1) {
        rear = 0;
    }
    // Case 3: Normal case, just move rear one step forward
    else {
        rear = rear + 1;
    }

    // Store the new value at the rear position
    deque[rear] = value;

    // Confirmation message
    printf("Inserted %d at rear\n", value);
}

int deleteFront() {
    int data;  // Variable to hold the deleted value

    // Cannot delete if there are no elements
    if (isEmpty()) {
        printf("Deque is empty\n");
        return -1;  // Return a sentinel value
    }

    // Take out the front element (store it before overwriting)
    data = deque[front];

    // Case 1: Only one element left — reset both indices to -1
    if (front == rear) {
        front = rear = -1;
    }
    // Case 2: If front is at the last index, wrap it around to 0
    else if (front == MAX - 1) {
        front = 0;
    }
    // Case 3: Normal increment — move front one step ahead
    else {
        front = front + 1;
    }

    // Show what was deleted
    printf("Deleted %d from front\n", data);

    // Return the deleted element (useful if needed later)
    return data;
}

int deleteRear() {
    int data;  // To hold the value that will be removed

    // If deque is empty, cannot delete
    if (isEmpty()) {
        printf("Deque is empty\n");
        return -1;
    }

    // Store the current rear element to return it later
    data = deque[rear];

    // Case 1: If only one element was left, reset everything
    if (front == rear) {
        front = rear = -1;
    }
    // Case 2: If rear is at position 0, wrap around to MAX - 1
    else if (rear == 0) {
        rear = MAX - 1;
    }
    // Case 3: Move rear one position back
    else {
        rear = rear - 1;
    }

    // Confirm which element was deleted
    printf("Deleted %d from rear\n", data);

    // Return deleted value
    return data;
}

void display() {
    int i;

    // If deque is empty, nothing to print
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque elements: ");

    // Start printing from front index
    i = front;

    // Loop runs until we reach the rear element (circularly)
    while (1) {
        printf("%d ", deque[i]);   // Print the current element

        // Stop when we’ve printed up to rear
        if (i == rear)
            break;

        // Move to next index (circular increment)
        i = (i + 1) % MAX;
    }

    printf("\n");  // Newline after printing all elements
}

int main() {
    // Insert element 5 at rear — deque: [5]
    insertRear(5);

    // Insert element 10 at front — deque: [10, 5]
    insertFront(10);

    // Insert element 15 at rear — deque: [10, 5, 15]
    insertRear(15);

    // Insert element 20 at front — deque: [20, 10, 5, 15]
    insertFront(20);

    // Show all elements from front to rear
    display();

    // Remove element from front (20 removed)
    deleteFront();

    // Display remaining elements
    display();

    // Remove element from rear (15 removed)
    deleteRear();

    // Display remaining elements
    display();

    // Program end — return 0 indicates successful execution
    return 0;
}
