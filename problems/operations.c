#include <stdio.h>   // For input-output functions
#include <stdlib.h>  // For general utilities

// Function to count different character types in a string
void stringCount(char *str) {
    int i, upper = 0, lower = 0, digits = 0, others = 0; // Counters

    // Loop through the string until null terminator '\0'
    for(i = 0; str[i]; i++) {
        // Check for uppercase letters
        if(str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        }
        // Check for lowercase letters
        else if (str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        }
        // Check for digits
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // Any other characters (symbols, spaces, punctuation)
        else {
            others++;
        }
    }

    // Print the counts after the loop completes
    printf("Uppercase = %d\n", upper);
    printf("Lowercase = %d\n", lower);
    printf("Digits = %d\n", digits);
    printf("Others = %d\n", others);
}

int main() {
    char s[100];  // Array to hold the string (max 99 chars + null terminator)

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);  // Safe alternative to gets()

    stringCount(s);  // Call the counting function

    return 0;  // End program
}
