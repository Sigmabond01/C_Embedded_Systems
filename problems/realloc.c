#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *arr = (int*)malloc(3 * sizeof(int));
    for(i = 0; i < 3; i++) {
        arr[i] = i + 1;
    }
    printf("Original array: ");
    for(i = 0; i < 3; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    arr = (int*)realloc(arr, 5 * sizeof(int));
    for(i = 3; i < 5; i++) {
        arr[i] = i + 2;
    }
    printf("Reallocated array: ");
    for(i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    arr = (int*)realloc(arr, 2* sizeof(int));
    printf("Reallocated array: ");
    for(i = 0 ; i < 2; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}