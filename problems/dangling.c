#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(5 * sizeof(int));
    free(ptr);
    printf("ptr is now a dangling pointer");

    return 0;
}