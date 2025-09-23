//Create a Dynamic 2D Array
/*TO RUN
cd advanced/pointertopointer/problems
gcc problem2.c -o arr
.\arr.exe
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 2, n = 3;

    //create a double pointer
    int **arr;

    //allocate memory for rows
    //arr is a pointer to a pointer to int
    //malloc() allocates a contiguous block of memory of the size you specify
    //sizeof(int*) gives the size of a pointer to int on your system (usually 4 bytes on 32-bit, 8 bytes on 64-bit)
    arr = (int**)malloc(m * sizeof(int*));

    //allocate memory for each row
    for(int i = 0; i < m; i++)
    arr[i] = (int*)malloc(n * sizeof(int));

    //init with values
    for(int i = 0; i < m; i++) {
        for (int j = 0 ; j < n; j++) {
            arr[i][j] = i * n + j + 1;
        }
    }

    //print the arrray
    for(int i = 0 ; i < m; i++) {
        for(int j = 0 ; j < n; j++) {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    //free alocated memory
    for(int i = 0 ; i < m; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

/*
Explanation: 
A 2D array is an array where each element is essentially a 1D array. 
This can be implemented using double pointers. 
The double pointer points to the first element of the 2D array, 
and each pointer it references points to a dynamically allocated 1D array using malloc().
*/