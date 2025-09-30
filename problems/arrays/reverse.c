#include <stdio.h>
#define MAX 100

int main() {
    int n, i, temp;
    int arr[MAX];

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // original array
    printf("Original array is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // reverse array
    for(i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // reversed array
    printf("Reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
