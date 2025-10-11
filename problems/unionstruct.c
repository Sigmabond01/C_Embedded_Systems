#include <stdio.h>   // Includes standard input/output functions (printf, scanf, etc.)

// ==============================
// STRUCT DEFINITION
// ==============================
// 'struct Student' groups together two different data types:
// - a string (character array) for the student's name
// - an integer for the student's age
struct Student {
    char name[50];  // Array to hold the student's name (up to 49 chars + null terminator)
    int age;        // Integer variable for the student's age
};

int main() {
    // ==============================
    // STRUCT DECLARATION AND INITIALIZATION
    // ==============================
    // Create a struct variable 'student1' and initialize it
    // with the name "Alice" and the age 20.
    struct Student student1 = {"Alice", 20};

    // Declare another struct variable 'student2' with no initial values yet.
    struct Student student2;

    // ==============================
    // STRUCTURE ASSIGNMENT
    // ==============================
    // In C, you can directly assign one structure to another of the same type.
    // This performs a *shallow copy* — it copies all field values bit-by-bit.
    // Since all fields here are simple (no pointers or dynamic memory), 
    // it effectively creates a full duplicate of 'student1'.
    student2 = student1;

    // ==============================
    // PRINT ORIGINAL STRUCTURE
    // ==============================
    printf("Original student:\n");
    printf("Name: %s\n", student1.name);  // Print the name stored in 'student1'
    printf("Age: %d\n", student1.age);    // Print the age stored in 'student1'

    // ==============================
    // PRINT COPIED STRUCTURE
    // ==============================
    printf("Copied student:\n");
    printf("Name: %s\n", student2.name);  // Prints the name copied from 'student1'
    printf("Age: %d\n", student2.age);    // Prints the age copied from 'student1'

    // End of program — successful execution
    return 0;
}
