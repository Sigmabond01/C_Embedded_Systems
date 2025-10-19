#include <stdio.h>      // Standard input-output header
#define MAX 100          // Define a constant MAX for array size limit

int main() {
    int n, i, target, found = 0;   // n = number of elements, i = loop counter, target = number to search, found = flag variable
    int arr[MAX];                  // Declare an integer array with MAX size

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements into the array
    printf("Enter elements of the array: ");
    for (i = 0; i < n; i++) {      // Loop runs from 0 to n-1
        scanf("%d", &arr[i]);      // Store each input number into array
    }

    // Ask for the number to search
    printf("Enter number to be searched: ");
    scanf("%d", &target);

    // Perform linear search
    for (i = 0; i < n; i++) {      // Traverse the entire array
        if (arr[i] == target) {    // Check if current element matches target
            found = 1;             // Set found flag to true
            printf("Element %d found at index %d\n", target, i);  // Print index where element is found
            break;                 // Exit loop after finding the element
        }
    }

    // If element was not found
    if (!found) {                  
        printf("Element not found in array\n");  // Display not found message
    }

    return 0;   // Return 0 to indicate successful program termination
}
