#include <stdio.h>
#define MAX 100

int main() {
    int n, i, max, min;
    int arr[MAX];
    
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i = 1; i<= n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        else if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Min element of array is : %d\n", min);
    printf("Max element of array is : %d\n", max);
}