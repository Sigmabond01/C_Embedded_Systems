/*
realloc() function is used to resize a previously allocated memory block.
It allows you to change the size of an existing memory allocation without 
needing to free the old memory and allocate a new block.

Suppose we initially allocate memory for 5 integers but later
need to expand the array to hold 10 integers.
We can use realloc() to resize the memory block:
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    // Reallocation
    int *temp = (int *)realloc(ptr, 10 * sizeof(int));
    
    // Only update the pointer if reallocation is successful
    if (temp == NULL)
        printf("Memory Reallocation Failed\n");
    else
        ptr = temp;

    return 0;
}

/*It is important to note that if realloc() fails and returns NULL, the original memory block is not freed, so you should not overwrite the original pointer until you've successfully allocated a new block. To prevent memory leaks, it’s a good practice to handle the NULL return value*/