#include <stdio.h>   // For input and output functions

// Function declaration to copy one string into another
void copy_string(char *target, char *source);

int main() {  // 'main' must always return int
    char source[100];   // Array to store input string
    char target[100];   // Array to store copied string

    printf("Enter source string: ");
    gets(source);

    // Remove newline added by fgets (optional cleanup)
    int i = 0;
    while (source[i] != '\0') {
        if (source[i] == '\n') {
            source[i] = '\0';
            break;
        }
        i++;
    }

    // Call function to copy contents of 'source' into 'target'
    copy_string(target, source);

    // Print the copied string
    printf("Target string is: %s\n", target);

    return 0;   // Exit program successfully
}

// Function to copy string from source to target manually
void copy_string(char *target, char *source) {
    // Loop continues until null character '\0' is reached
    while (*source) {
        *target = *source;   // Copy character from source to target
        source++;            // Move source pointer to next char
        target++;            // Move target pointer to next position
    }
    *target = '\0';          // Add null terminator at end of copied string
}
