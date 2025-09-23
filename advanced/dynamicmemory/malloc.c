/*
The malloc() (stands for memory allocation) function is used to allocate a single block of contiguous memory on the heap at runtime. 
The memory allocated by malloc() is uninitialized, meaning it contains garbage values.
*/

/*TO RUN
cd advanced/dynamicmemory
gcc malloc.c -o malloc
.\malloc.exe
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 5);

    //checking if failed or passed
    if(ptr == NULL) {
        printf("Failed");
        exit(0);
    }

    for(int i = 0; i< 5; i++) {
        ptr[i] = i + 1;
    }

    for(int i = 0; i < 5; i++) {
        printf("%d", ptr[i]);
    }
    return 0;
}