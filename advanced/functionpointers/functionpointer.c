/*
In C, a function pointer is a type of pointer that stores the address of a function, 
allowing functions to be passed as arguments and invoked dynamically. 
It is useful in techniques such as callback functions, event-driven programs, 
and polymorphism (a concept where a function or operator behaves differently based on the context).
*/

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer that matches
  	// the signature of add() function
    int(*fptr)(int, int);

    //assign to add()
    fptr = &add;

    printf("%d", fptr(10, 5));
    return 0;
}

//o/p: 15
/*
In this program, we define a function add(), assigns its address to a function pointer fptr, and invokes the function through the pointer to print the sum of two integers.
*/