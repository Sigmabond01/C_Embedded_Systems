#include <stdio.h>   // Standard input-output header for printf, scanf

// Function to concatenate two strings manually (without using strcat)
void concatenate(char str1[], char str2[], char result[]) {
    int i, j;  // i and j are loop counters

    // Copy characters of str1 into result until null terminator '\0' is reached
    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];   // assign each character of str1 to result
    }

    // Copy characters of str2 into result, starting right after str1
    for (j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];   // continue writing into result
    }

    // Add null terminator at the end so result becomes a valid string
    result[i + j] = '\0';
}

int main() {
    // Declare three character arrays (strings)
    // str1 and str2 can hold up to 99 characters (+1 for '\0')
    // result can hold up to 199 characters (+1 for '\0')
    char str1[100], str2[100], result[200];

    // Prompt the user to enter first string
    printf("Enter first string: ");
    scanf("%99s", str1);   // %99s prevents buffer overflow (reads max 99 chars + '\0')

    // Prompt the user to enter second string
    printf("Enter second string: ");
    scanf("%99s", str2);   // again, safe input with limit

    // Call our concatenate function
    concatenate(str1, str2, result);

    // Print the final concatenated string
    printf("Concatenated string: %s\n", result);

    // Exit program with success status
    return 0;
}
