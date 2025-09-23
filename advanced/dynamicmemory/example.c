/*
Consider the first scenario where we were having issues 
with the fixes size array. Let's see how we can 
resolve both of these issues using dynamic memory allocation.
*/

/*TO RUN
cd advanced/dynamicmemory
gcc example.c -o example
.\example.exe
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //initially allocate memory for 5 ints
    int *ptr = (int *)malloc(5 * sizeof(int));

    if(ptr == NULL) {
        printf("Failed!");
        exit(0);
    }

    //reallocate to store 8 ints
    ptr = (int*)realloc(ptr, 8 * sizeof(int));

    if(ptr == NULL) {
        printf("Reallocation failed\n");
        exit(0);
    }

    //we only use 5 elements now
    for(int i = 0 ; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }

    //shrink back to 5 elements
    ptr = (int *)realloc(ptr, 5 * sizeof(int));

    if(ptr == NULL) {
        printf("Realloc failed!\n");
        exit(0);
    }

    for(int i = 0; i< 5; i++) {
        printf("%d", ptr[i]);
    }

    free(ptr);

    return 0;
}

/*In this program, we are managing the memory allocated to the pointer ptr according to our needs by changing the size using realloc(). It can be a fun exercise to implement an array which grows according to the elements inserted in it. This kind of arrays are called dynamically growing arrays.*/