#include <stdio.h>  // Standard input-output library for printf and scanf

// Recursive function to calculate factorial of a number
unsigned long long calculateFactorial(int n) {
    if (n == 0) {               // Base case: factorial(0) = 1
        return 1;
    } else {                    // Recursive case: n! = n × (n - 1)!
        return (unsigned long long)n * calculateFactorial(n - 1);
    }
}

int main() {
    int num;   // Variable to store the user's input number

    // Prompt user to enter a positive integer
    printf("Enter +ve integer: ");
    scanf("%d", &num);

    // Check if the entered number is negative
    if (num < 0) {
        // Factorial is undefined for negative numbers
        printf("Factorial is not defined for -ve integers\n");
    } else {
        // Call the recursive function to compute factorial
        unsigned long long factorial = calculateFactorial(num);

        // Print the result
        printf("%d! = %llu\n", num, factorial);
    }

    return 0;  // Successful program termination
}
