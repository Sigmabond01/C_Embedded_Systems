/*
These macros take parameters and behave like functions,
allowing you to define reusable logic for common operations. 
They are expanded at compile time. 
A function-like macro is only lengthened if and only if its name appears with a pair of parentheses after it. If we don't do this, the function pointer will get the address of the real function and lead to a syntax error.
*/

#include <stdio.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
//grasp them brackets lmao

int main() {
    //let two no.s be a and b
    int a = 18, b = 76;
    printf("Minimun: %d", min(a,b));
    return 0;
}
//o/p: 18
/*
In this code, the function-like macro min(a, b) compares two values and returns the smaller using the ternary operator. The values 18 and 76 are passed to the macro, which returns 18.
*/