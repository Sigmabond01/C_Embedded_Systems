#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;               // Stores data value
    struct Node *next;      // Pointer to the next node
};

// Function to create a new node with given data
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node)); // Allocate memory for new node
    newNode->data = data;   // Assign data
    newNode->next = NULL;   // Initialize next pointer to NULL
    return newNode;         // Return pointer to newly created node
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(struct Node **head, int data) {
    struct Node *newNode = createNode(data); // Create new node
    newNode->next = *head;  // Make new node point to current head
    *head = newNode;        // Update head to point to new node
    printf("Inserted %d at beginning\n", data);
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node **head, int data) {
    struct Node *newNode = createNode(data); // Create new node
    struct Node *last;                       // Temporary pointer to traverse list

    if (*head == NULL) {                     // If list is empty
        *head = newNode;                     // Make new node the head
        printf("Inserted %d as first node\n", data);
        return;
    }

    last = *head;                            // Start traversal from head
    while (last->next != NULL) {             // Move till the last node
        last = last->next;
    }

    last->next = newNode;                    // Link last node to new node
    printf("Inserted %d at end\n", data);
}

// Function to delete the first node
void deleteFirst(struct Node **head) {
    struct Node *temp;

    if (*head == NULL) return;               // If list is empty, do nothing

    temp = *head;                            // Store current head
    *head = temp->next;                      // Move head to next node
    free(temp);                              // Free old head
    printf("First node deleted\n");
}

// Function to delete the last node
void deleteLast(struct Node **head) {
    struct Node *temp;

    if (*head == NULL) return;               // Empty list, nothing to delete

    if ((*head)->next == NULL) {             // Only one node
        free(*head);                         // Delete it
        *head = NULL;                        // Set head to NULL
        printf("Last node deleted\n");
        return;
    }

    temp = *head;                            // Start traversal
    while (temp->next->next != NULL)         // Stop at second-last node
        temp = temp->next;

    free(temp->next);                        // Free last node
    temp->next = NULL;                       // Mark new end of list
    printf("Last node deleted\n");
}

// Function to print all nodes in the list
void printList(struct Node *head) {
    while (head != NULL) {                   // Traverse until NULL
        printf("%d ", head->data);           // Print data
        head = head->next;                   // Move to next node
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;                // Initialize empty list

    // Insert elements at beginning and end
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 1);
    insertAtEnd(&head, 6);
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 0);

    printf("Created Linked List: ");
    printList(head);

    // Delete first node and print
    deleteFirst(&head);
    printf("List after deleting first node: ");
    printList(head);

    // Delete last node and print
    deleteLast(&head);
    printf("List after deleting last node: ");
    printList(head);

    return 0;
}
