#include <stdio.h>   // Include standard input/output library for printf and scanf

// ===========================
// STRUCT DEFINITION
// ===========================
// 'struct Student' can hold multiple *independent* pieces of data:
// a name (string) and an age (integer).
struct Student {
    char name[20];  // Character array to store the student's name
    int age;        // Integer variable to store the student's age
};

// ===========================
// UNION DEFINITION
// ===========================
// 'union info' can store *either* a roll number OR an average,
// but both share the **same memory space**.
// That means writing to one field overwrites the other.
union info {
    int rollNumber;  // Integer roll number
    float average;   // Floating-point average marks
};

int main() {
    // Create and initialize two Student structures
    struct Student student1 = {"Alice", 20};
    struct Student student2 = {"Borderland", 22};

    // Create a union variable
    union info info1;

    // Assign a value to the 'rollNumber' member of the union
    info1.rollNumber = 101;

    // ===========================
    // PRINT STRUCTURE DATA (student1)
    // ===========================
    printf("Structure Output:\n");
    printf("Name: %s\n", student1.name);       // Prints name of first student
    printf("Age: %d\n", student1.age);         // Prints age of first student
    printf("Roll number: %d\n", info1.rollNumber);  // Prints roll number (from union)

    // ===========================
    // PRINT STRUCTURE DATA (student2)
    // ===========================
    printf("Structure Output:\n");
    printf("Name: %s\n", student2.name);       // Prints name of second student
    printf("Age: %d\n", student2.age);         // Prints age of second student
    printf("Roll number: %d\n", info1.rollNumber);  // Prints roll number (same union, still 101)

    // ===========================
    // UNION DEMONSTRATION
    // ===========================
    // Now assign to 'average' — this OVERWRITES the memory used by 'rollNumber'.
    info1.average = 85.5;

    // Print union values
    printf("Union Output:\n");
    printf("Roll number: %d\n", info1.rollNumber);  // Corrupted value (same memory as 'average')
    printf("Average: %.2f\n", info1.average);       // Correct floating-point value

    // End of program
    return 0;
}
