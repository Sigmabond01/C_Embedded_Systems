#include <stdio.h>    // For input/output functions (printf, scanf)
#include <stdlib.h>   // For malloc() and free()

// Function to find the sum of elements in an integer array
int findArraySum(int *arr, int size) {
    int sum = 0;  // Initialize sum
    int i;

    // Loop through all array elements
    for (i = 0; i < size; i++) {
        sum += arr[i];  // Add each element to sum
    }

    return sum;  // Return total sum
}

int main() {
    int *arr;     // Pointer to dynamically allocated array
    int size, i, sum;

    // Ask user for array size
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Allocate memory for the array using malloc
    arr = (int *)malloc(size * sizeof(int));

    // Check if malloc failed (returns NULL when out of memory)
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit with error code
    }

    // Prompt user to enter elements
    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);  // Read each integer into the allocated array
    }

    // Compute sum using the function
    sum = findArraySum(arr, size);

    // Display result
    printf("Sum of array elements: %d\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    // Indicate successful program termination
    return 0;
}
