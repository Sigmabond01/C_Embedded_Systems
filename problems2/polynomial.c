#include <stdio.h>      // For input/output functions (printf, scanf)
#include <stdlib.h>     // For malloc() and free()

// Node structure representing one term of a polynomial
struct Node {
    int coeff;              // Coefficient of the term
    int exp;                // Exponent of the term
    struct Node* next;      // Pointer to the next term in the list
};

// Function to create and insert a new term at the end of the polynomial
void insertTerm(struct Node** poly, int coeff, int exp) {
    // Allocate memory for a new node
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *poly; // Used to traverse to the end of the list

    newnode->coeff = coeff;    // Assign coefficient
    newnode->exp = exp;        // Assign exponent
    newnode->next = NULL;      // New node will be the last one, so next = NULL

    // Case 1: Empty list → new node becomes the head
    if (*poly == NULL) {
        *poly = newnode;
    }
    // Case 2: Non-empty list → traverse to the end and append
    else {
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newnode;
    }
}

// Function to add two polynomials represented as linked lists
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL; // Head pointer for the result list

    // Process both polynomials simultaneously while both have terms left
    while (poly1 != NULL && poly2 != NULL) {

        // Case 1: Same exponent → add coefficients
        if (poly1->exp == poly2->exp) {
            insertTerm(&result, poly1->coeff + poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        // Case 2: Exponent of poly1 > poly2 → take poly1 term
        else if (poly1->exp > poly2->exp) {
            insertTerm(&result, poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        }

        // Case 3: Exponent of poly2 > poly1 → take poly2 term
        else {
            insertTerm(&result, poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        }
    }

    // Add remaining terms from poly1 (if any)
    while (poly1 != NULL) {
        insertTerm(&result, poly1->coeff, poly1->exp);
        poly1 = poly1->next;
    }

    // Add remaining terms from poly2 (if any)
    while (poly2 != NULL) {
        insertTerm(&result, poly2->coeff, poly2->exp);
        poly2 = poly2->next;
    }

    return result; // Return the resulting polynomial
}

// Function to print the polynomial neatly
void printPolynomial(struct Node* head) {
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->exp); // Print one term

        head = head->next; // Move to the next term

        if (head != NULL)  // Print "+" only between terms
            printf(" + ");
    }
    printf("\n");
}

// Function to free memory used by a polynomial linked list
void freePolynomial(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp); // Free each node
    }
}

int main() {
    struct Node* poly1 = NULL;   // First polynomial
    struct Node* poly2 = NULL;   // Second polynomial
    struct Node* result = NULL;  // Resultant polynomial

    // -------- Define first polynomial: 5x^3 + 4x^2 + 2x^1 --------
    insertTerm(&poly1, 5, 3);
    insertTerm(&poly1, 4, 2);
    insertTerm(&poly1, 2, 1);

    // -------- Define second polynomial: -3x^2 + 2x^1 + 1 --------
    insertTerm(&poly2, -3, 2);
    insertTerm(&poly2, 2, 1);
    insertTerm(&poly2, 1, 0);

    // -------- Display input polynomials --------
    printf("Polynomial 1: ");
    printPolynomial(poly1);

    printf("Polynomial 2: ");
    printPolynomial(poly2);

    // -------- Add both polynomials --------
    result = addPolynomials(poly1, poly2);

    // -------- Display the result --------
    printf("Resultant Polynomial: ");
    printPolynomial(result);

    // -------- Clean up memory --------
    freePolynomial(poly1);
    freePolynomial(poly2);
    freePolynomial(result);

    return 0; // Exit successfully
}
