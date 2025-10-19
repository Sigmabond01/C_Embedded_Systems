#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int size) {
    int minIndex, temp, i, j;

    // Outer loop moves through each element (except last)
    for(i = 0; i < size - 1; i++) {
        minIndex = i; // Assume current index has the smallest value

        // Inner loop finds the actual minimum in the unsorted part
        for(j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) { // Compare and update minIndex
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first unsorted element
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[50], i, n;

    // Input number of elements
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter list of elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display original array before sorting
    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call function to sort array using Selection Sort
    selectionSort(arr, n);

    // Display sorted array
    printf("Sorted array using Selection Sort: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
