#include <stdio.h>
#include <stdlib.h>

// Define structure for circular linked list node
struct Node {
    int data;              // Data field
    struct Node *next;     // Pointer to next node
};

// Function to create a new node dynamically
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {                      // Check memory allocation
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;                       // Assign value
    newNode->next = NULL;                       // Initialize pointer
    return newNode;
}

// Insert node at the beginning of circular linked list
struct Node *insertAtBeginning(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    if (head == NULL) {                         // Case: empty list
        head = newNode;
        newNode->next = head;                   // Point to itself (circular)
        printf("Inserted %d at beginning\n", data);
    } else {
        struct Node *temp = head;
        while (temp->next != head) {            // Traverse till last node
            temp = temp->next;
        }
        temp->next = newNode;                   // Link last node to new node
        newNode->next = head;                   // Link new node to head
        head = newNode;                         // Update head pointer
        printf("Inserted %d at beginning\n", data);
    }
    return head;
}

// Insert node at the end of circular linked list
struct Node *insertAtEnd(struct Node *head, int data) {
    struct Node *newNode = createNode(data);
    if (head == NULL) {                         // If list empty, same as beginning
        head = newNode;
        newNode->next = head;
    } else {
        struct Node *temp = head;
        while (temp->next != head) {            // Traverse to last node
            temp = temp->next;
        }
        temp->next = newNode;                   // Link last node to new node
        newNode->next = head;                   // Link new node back to head
        printf("Inserted %d at end\n", data);
    }
    return head;
}

// Delete a node by its value
struct Node *deleteNode(struct Node *head, int data) {
    if (head == NULL) {                         // Empty list check
        printf("List is empty\n");
        return head;
    }

    struct Node *temp = head;
    struct Node *prevNode = NULL;

    do {
        if (temp->data == data) {               // Node found
            if (prevNode == NULL) {             // Case: deleting head node
                while (temp->next != head)      // Find last node
                    temp = temp->next;
                temp->next = head->next;        // Update last node's next
                free(head);                     // Delete old head
                head = temp->next;              // Update head
            } else {                            // Case: deleting middle or last node
                prevNode->next = temp->next;
                free(temp);
            }
            printf("Node with data %d deleted\n", data);
            return head;
        }
        prevNode = temp;
        temp = temp->next;
    } while (temp != head);

    printf("Node with data %d not found\n", data);
    return head;
}

// Display all elements in the circular linked list
void displayList(struct Node *head) {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }
    struct Node *temp = head;
    printf("Circular linked list: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// Main function
int main() {
    struct Node *head = NULL;                   // Initialize empty list

    // Perform insertions
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 10);
    head = insertAtEnd(head, 30);

    displayList(head);                          // Show list

    head = deleteNode(head, 20);                // Delete one node
    displayList(head);                          // Show final list

    return 0;
}
