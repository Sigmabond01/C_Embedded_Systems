//Pointer to a constant means that the value that the pointer is pointing to is constant.

#include <stdio.h>

int main() {
    int i = 10;
    int j = 20;
  
    // ptr is pointer to constant
    const int* ptr = &i;

    printf("ptr: %d\n", *ptr);
  
    // error: value pointed cannot be modified
    // using the pointer ptr
    //*ptr = 100;

  	// This is valid though
    ptr = &j; 
    printf("ptr: %d\n", *ptr);

    return 0;
}