/*
We can use the static keyword before the inline function. 
This forces the compiler to treat the function with internal linkage and ensures that it is considered during the linking process, 
allowing the program to compile and run successfully. Though the inlining still depends on the compiler’s optimization level.
*/

#include <stdio.h>

// Inline function in C
static inline int foo() {
    return 2;
}

int main() {
    int res;

    // inline function call
    res = foo();
    printf("%d", res);
    return 0;
}