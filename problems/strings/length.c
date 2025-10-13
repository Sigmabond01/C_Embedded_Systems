#include <stdio.h>  // Includes the standard input-output library for printf() and scanf()

// Function to calculate the length of a string manually (without using strlen)
int Length(const char *str) {
    int length = 0;  // Initialize a counter to zero

    // Loop through each character until the null terminator '\0' is found
    while (str[length] != '\0') {
        length++;    // Increment length for each character
    }

    return length;   // Return the final count (number of characters)
}

int main() {
    char inputString[100];  // Declare a character array to store the input string (max 99 chars + '\0')

    printf("Enter string: ");  // Ask the user to input a string
    scanf("%s", inputString);  // Read the string from user input (stops reading at whitespace)

    int length = Length(inputString);  // Call the Length function and store the result

    printf("Length of string: %d\n", length);  // Print the calculated string length

    return 0;  // Return 0 to indicate successful program execution
}
