#include <stdio.h>  // Include standard input/output library for printf and scanf

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        // Recursive formula: F(n) = F(n-1) + F(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;  // Variable to store number of terms in the series

    printf("Enter number of terms in series: ");
    scanf("%d", &n);  // Take user input

    printf("Fibonacci Series:\n");

    // Loop through n terms and print each Fibonacci number
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));  // Call recursive function for each term
    }

    printf("\n");  // Newline for cleaner output
    return 0;      // End of program
}
