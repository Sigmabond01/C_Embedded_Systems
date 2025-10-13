#include <stdio.h>  // Includes the standard input-output library for using printf() and scanf()

// Function to calculate factorial of a number using recursion
long long factorial(int num) {
    if (num <= 1)  // Base case: factorial of 0 or 1 is 1
        return 1;
    else            // Recursive case: n! = n * (n-1)!
        return num * factorial(num - 1);
}

// Function to calculate nCr = n! / (r! * (n - r)!)
long long ncr(int n, int r) {
    if (n < r)      // If r is greater than n, nCr is mathematically undefined (set to 0)
        return 0;
    else
        // Apply the formula for combination: nCr = n! / (r! * (n - r)!)
        return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {  // Main function: program execution starts here
    int N, R;  // Declare two integer variables to store user input values of N and R

    printf("Enter value of N: ");  // Prompt user to enter N
    scanf("%d", &N);               // Read and store the value of N

    printf("Enter value of R: ");  // Prompt user to enter R
    scanf("%d", &R);               // Read and store the value of R

    // Call the ncr() function with user inputs and store the result in a long long variable
    long long result = ncr(N, R);

    // Print the result of the nCr calculation using %lld for long long values
    printf("%d choose %d (NCR) is %lld\n", N, R, result);

    return 0;  // Return 0 indicates successful program execution
}
