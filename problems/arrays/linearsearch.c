#include <stdio.h>
#define MAX 100

int main() {
    int n, i, target, found;
    int arr[MAX];

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements of the array: ");
    for(i = 0; i< n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter number to be searched: ");
    scanf("%d", &target);

    found = 0;
    for(i = 0;i <= n; i++) {
        if(arr[i] == target) {
            found = 1;
            printf("Element %d found at index %d", target, i);
            break;
        }
    }

    if(!found) {
        printf("element not found a array\n", target);
    }
}