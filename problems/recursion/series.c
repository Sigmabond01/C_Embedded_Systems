#include <stdio.h>   // Standard input-output library

// Recursive function to calculate the sum of series: 1 + 1/2 + 1/3 + ... + 1/n
double calculateSum(double term, int position, double currentSum) {
    if (position <= 0) {             // Base case: when position becomes 0, stop recursion
        return currentSum;           // Return the accumulated sum
    }

    term = 1.0 / position;           // Compute the current term (1 / position)
    currentSum += term;              // Add the term to the ongoing sum

    // Recursive call: move to the previous term (position - 1)
    return calculateSum(term, position - 1, currentSum);
}

int main() {
    int n;   // Number of terms in the harmonic series

    // Ask user for input
    printf("Enter number of terms in series: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Number of terms must be +ve\n");
    } else {
        // Call recursive function starting from n down to 1
        double sum = calculateSum(0.0, n, 0.0);

        // Print the result
        printf("Sum of series: %11f\n", sum);
    }

    return 0;  // End of program
}
