//Constant pointer means that the pointer itself is a constant. It means that we cannot change the pointer to point to another variable.

// C program to demonstrate that the value of object pointed
// by pointer can be changed but the pointer can not point
// to another variable

#include <stdio.h>

int main(void)
{
    int i = 10;
    int j = 20;
    /* constant pointer to integer */
    int* const ptr = &i;

    printf("ptr: %d\n", *ptr);

    *ptr = 100; /* valid */
    printf("ptr: %d\n", *ptr);

    //error line
    //ptr = &j;
    return 0;
}