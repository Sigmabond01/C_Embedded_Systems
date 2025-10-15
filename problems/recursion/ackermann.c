#include <stdio.h>   // Include standard input/output functions

// Recursive implementation of the Ackermann function
int ackermann(int m, int n) {
    if (m == 0) {                    // Base case 1: if m = 0 → A(m, n) = n + 1
        return n + 1;
    } 
    else if (m > 0 && n == 0) {      // Base case 2: if m > 0 and n = 0 → A(m, 0) = A(m - 1, 1)
        return ackermann(m - 1, 1);
    } 
    else if (m > 0 && n > 0) {       // Recursive case: A(m, n) = A(m - 1, A(m, n - 1))
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    
    // Technically unreachable, but helps avoid compiler warnings
    return -1;
}

int main() {
    int m, n;  // Variables to store user input values

    // Ask the user for two positive integers
    printf("Enter two +ve integers: ");
    scanf("%d %d", &m, &n);

    // Validate input (Ackermann is only defined for non-negative integers)
    if (m < 0 || n < 0) {
        printf("Integers should be +ve\n");
    } else {
        // Compute the Ackermann function
        int result = ackermann(m, n);

        // Display the result
        printf("A(%d, %d) = %d\n", m, n, result);
    }

    return 0;   // Successful termination
}
