/*
In C, double pointers are those pointers which stores the address of another pointer. 
The first pointer is used to store the address of the variable, 
and the second pointer is used to store the address of the first pointer. 
That is why they are also known as a pointer to pointer.
*/
#include <stdio.h>

int main() {
    int var = 10;
    //pointer to int
    //store address of the variable
    int *ptr1 = &var;

    //pointer to pinter(double pointer)
    //store address of first pointer
    int **ptr2 = &ptr1;

    printf("var: %d\n", var);
    printf("*ptr1: %d\n", *ptr1);
    printf("**ptr2: %d\n", **ptr2);
}

/*O/P
var: 10
*ptr1: 10
**ptr2: 10
*/

/*
Explanation: 
In this code, ptr1 is a pointer that stores the address of the integer variable var.
ptr2 is a double pointer that stores the address of the pointer ptr1. 
**ptr2 dereferences ptr2 to get the value of ptr1 (which is the address of var) 
and then dereferences that address to get the value of var itself.
*/