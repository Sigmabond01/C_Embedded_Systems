#include <stdio.h>   // For standard I/O functions
#define MAX 100       // Define maximum array size

// Function to perform binary search
int binarySearch(int arr[], int l, int r, int x) {
    // Repeat while the search space is valid
    while (l <= r) {
        // Find middle index safely
        int m = l + (r - l) / 2;

        // If x is present at middle, return its index
        if (arr[m] == x) {
            return m;
        }

        // If x is greater, ignore left half
        if (arr[m] < x) {
            l = m + 1;
        }
        // If x is smaller, ignore right half
        else {
            r = m - 1;
        }
    }

    // If we exit the loop, element was not found
    return -1;
}

int main() {
    int n, x, i, arr[MAX];  // Declare variables
    int binary_result;      // To store result

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input sorted array
    }

    printf("Enter element to search: ");
    scanf("%d", &x);           // Input target element

    // Call binary search function
    binary_result = binarySearch(arr, 0, n - 1, x);

    // Display result
    if (binary_result == -1) {
        printf("Binary Search: Element not found!\n");
    } else {
        printf("Binary Search: Element found at index %d\n", binary_result);
    }

    return 0;  // End of program
}
