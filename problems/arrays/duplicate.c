#include <stdio.h>

int main() {
    int n, i , j, k;
    int arr[100];
    printf("Enter elements in array: ");
    scanf("%d", &n);

    printf("Enter elements of array: \n");
    for(i = 0; i < n; i++) {
        scanf(" %d ", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n;) {
            if(arr[i] == arr[j]) {
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    printf("After after eliminating duplicates: ");
    for(i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}