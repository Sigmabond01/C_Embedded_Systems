/*
If the function is declared separately, then it will be added to the symbol table. 
Later on, it can be defined as inline, and the compiler will consider it for inlining if the optimization level is O1 or above.
 But if the optimization is O0, then this function will not be inlined but still will be able to be executed as a normal function.
*/

#include <stdio.h>

// Forward declaration
int foo();

// Inline function in C
inline int foo() {
    return 2;
}

int main() {
    int res;

    // Inline function call
    res = foo();
    printf("%d", res);
    return 0;
}