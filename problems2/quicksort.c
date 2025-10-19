#include <stdio.h>

// Function: partition
// Purpose: Rearranges the array so that all elements smaller
//          than the pivot are on the left, and greater ones
//          are on the right. Returns the final position of pivot.
int partition(int a[], int start, int end) {
    int pivot = a[end];       // Choose the last element as pivot
    int i = start - 1;        // i tracks the boundary of smaller elements

    // Loop through elements before the pivot
    for (int j = start; j < end; j++) {  // Loop till j < end (pivot excluded)
        if (a[j] < pivot) {              // If current element < pivot
            i++;                         // Move boundary for smaller elements
            int temp = a[i];             // Swap a[i] and a[j]
            a[i] = a[j];
            a[j] = temp;
        }
    }

    // Place pivot in its correct sorted position
    int temp = a[i + 1];
    a[i + 1] = a[end];
    a[end] = temp;

    return i + 1;  // Return pivot index
}

// Function: quick
// Purpose: Recursively apply Quick Sort on subarrays
void quick(int a[], int start, int end) {
    if (start < end) {                   // Continue if at least 2 elements
        int p = partition(a, start, end); // Partition the array and get pivot index
        quick(a, start, p - 1);          // Recursively sort the left subarray
        quick(a, p + 1, end);            // Recursively sort the right subarray
    }
}

// Function: printArr
// Purpose: Print all elements of the array
void printArr(int a[], int n) {
    for (int i = 0; i < n; i++) {        // Loop through array elements
        printf("%d ", a[i]);             // Print each element followed by a space
    }
    printf("\n");                        // Move to next line
}

// Function: main
// Purpose: Demonstrate Quick Sort with a sample array
int main() {
    int a[] = {24, 9, 29, 14, 19, 27};   // Initialize unsorted array
    int n = sizeof(a) / sizeof(a[0]);    // Calculate number of elements

    printf("Before sorting elements are:\n");
    printArr(a, n);                      // Print array before sorting

    quick(a, 0, n - 1);                  // Call quick sort function

    printf("After sorting elements are:\n");
    printArr(a, n);                      // Print array after sorting

    return 0;                            // End of program
}
