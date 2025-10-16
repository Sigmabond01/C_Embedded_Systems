#include <stdio.h>  // Include standard input-output library

// Function prototype for swap using pointers
void swap(int *, int *);

int main() {
    int a = 10;  // Initialize variable a
    int b = 20;  // Initialize variable b

    // Print values before swapping
    printf("Before swapping values in main: a = %d, b = %d\n", a, b);

    // Call swap function, passing the **addresses** of a and b
    swap(&a, &b);

    // Print values after swapping in main to show effect on original variables
    printf("After swapping values in main: a = %d, b = %d\n", a, b);

    return 0;  // End of program
}

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp;       // Temporary variable to hold a value during swap
    temp = *a;      // Dereference pointer a to get its value and store in temp
    *a = *b;        // Dereference pointer b and assign its value to location pointed by a
    *b = temp;      // Assign temp value to location pointed by b

    // Print values inside function to show swap effect at function scope
    printf("After swapping values in function: a = %d, b = %d\n", *a, *b);
}
