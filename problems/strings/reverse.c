#include <stdio.h>    // For printf, scanf
#include <string.h>   // For strlen (to get string length), strcpy (to copy strings)

// Function to reverse a string in-place
void reverse(char str[]) {
    int length = strlen(str);   // Find the length of the string
    int i, j;                   // i = start index, j = end index
    char temp;                  // Temporary variable for swapping

    // Correct for loop: initialize both i and j properly
    for (i = 0, j = length - 1; i < j; i++, j--) {
        // Swap str[i] and str[j]
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char inputStr[100], reversedStr[100];  // Two arrays: one for input, one for reversed

    // Ask user for input
    printf("Enter a string: ");
    scanf("%99s", inputStr);   // Read string safely (max 99 chars)

    // Copy inputStr into reversedStr (so we don't destroy the original)
    strcpy(reversedStr, inputStr);

    // Reverse the copy
    reverse(reversedStr);

    // Print the reversed version
    printf("Reversed string: %s\n", reversedStr);

    return 0;   // Program finished successfully
}
