#include <stdio.h>  // For printf, scanf

// Define a structure to hold student data
struct Student {
    char name[50];   // Student's name (up to 49 chars + null terminator)
    int marks[3];    // Array to store 3 subject marks
    float total;     // Total marks across all subjects
    float average;   // Average marks
};

int main() {
    int n, i, j, marks;
    struct Student students[100];  // Array of 100 Student structures

    // Ask user how many students' data to enter
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Loop through each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        // Input student's name
        printf("Name: ");
        scanf("%s", students[i].name);  // Reads a single word (no spaces)

        // Initialize total marks to 0
        students[i].total = 0;

        // Input marks for 3 subjects
        printf("Enter marks in 3 subjects: ");
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks);                // Take mark input
            students[i].marks[j] = marks;       // Store in struct
            students[i].total += marks;         // Add to total
        }

        // Calculate average (explicitly use float division)
        students[i].average = students[i].total / 3.0;
    }

    // Print results
    printf("\nResults:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d Name: %s | Total: %.2f | Average: %.2f\n",
               i + 1, students[i].name, students[i].total, students[i].average);
    }

    return 0;  // End of program
}
