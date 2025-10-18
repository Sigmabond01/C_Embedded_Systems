#include <stdio.h>   // Include standard input-output library
#include <stdlib.h>  // Include library for malloc and free

int main() {
    // Allocate memory for 5 integers dynamically using malloc
    int *ptr = malloc(5 * sizeof(int));

    // Free the allocated memory
    free(ptr);

    // At this point, ptr still holds the address of the freed memory
    // This makes ptr a **dangling pointer** — pointing to memory that is no longer valid
    printf("ptr is now a dangling pointer\n");

    return 0;  // End of program
}
