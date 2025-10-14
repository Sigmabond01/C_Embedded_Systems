#include <stdio.h>  // Include standard I/O library for printf and scanf

// Function to find GCD (Greatest Common Divisor) using recursion
int gcd(int a, int b) {
    if (b == 0) {        // Base case: if b becomes 0, GCD is a
        return a;
    } else {              // Recursive case: gcd(a, b) = gcd(b, a % b)
        return gcd(b, a % b);
    }
}

// Function to find LCM (Least Common Multiple) using the relationship between GCD and LCM
int findLCM(int a, int b) {
    int gcdValue = gcd(a, b);       // First, find the GCD of the two numbers
    return (a * b) / gcdValue;      // Use formula: LCM(a, b) = (a * b) / GCD(a, b)
}

int main() {
    int n1, n2;  // Variables to store user input

    printf("Enter first number: ");
    scanf("%d", &n1);  // Take first number input

    printf("Enter second number: ");
    scanf("%d", &n2);  // Take second number input

    int lcm = findLCM(n1, n2);  // Call function to compute LCM

    printf("LCM of %d and %d is %d\n", n1, n2, lcm);  // Display result

    return 0;  // End program
}
