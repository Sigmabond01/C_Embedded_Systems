/*The calloc() (stands for contiguous allocation) function is similar to malloc(),
but it initializes the allocated memory to zero. 
It is used when you need memory with default zero values.
*/

/*TO RUN
cd advanced/dynamicmemory
gcc calloc.c -o calloc
.\calloc.exe
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)calloc(5, sizeof(int));
    if(ptr == NULL) {
        printf("Failed");
        exit(0);
    }

    //no need to populate as it is already initialized to zero

    for(int i = 0; i < 5; i++) {
        printf("%d", ptr[i]);
    }
    return 0;
}