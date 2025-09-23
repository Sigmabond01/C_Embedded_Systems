//Find the Size of Double Pointer

/*TO RUN
cd advanced/pointertopointer/problems
gcc problem1.c -o pont
.\point.exe
*/

#include <stdio.h>

int main() {
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    printf("%d bytes", sizeof(ptr2));
    //size of dobule pointer
}