#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i, arr1[100];

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter elemnts of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    bubbleSort(arr1, n);
    printf("Sorted array is: ");
    for(i = 0; i < n; i++) {
        printf(" %d ", arr1[i]);
    }
    return 0;
}