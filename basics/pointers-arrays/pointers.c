/*
A pointer is a variable that stores the address of another variable. 
In C, the symbol (&) is used as the address-of operator. The value returned by this operator is assigned to a pointer.
To declare a variable as a pointer, you need to put an asterisk (*) before the name. 
Also, the type of pointer variable must be the same as the type of the variable whose address it stores.
*/

#include <stdio.h>

int main(){

   int a = 5;
   //"b" is an integer pointer that stores the address of an integer variable "a" 
   int *b = &a;
   
   printf("Address of a: %d\n", b);
   b++;
   printf("After increment, Address of a: %d\n", b);
   
   return 0;
}
//o/p: Address of a: 6422036
//After increment, Address of a: 6422040

/*
In C, the "*" symbol is used as the dereference operator. It returns the value stored at the address to which the pointer points.
Hence, the following statement returns "5", which is the value stored in the variable "a", the variable that "b" points to.
int a = 5;
int *b = &a;
printf("value of a: %d\n", *b);
In above example, we only print b not *b so dont get confused (check out pointers2.c for clarity)
*/