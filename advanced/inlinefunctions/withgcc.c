#include <stdio.h>

// Inline function in C
inline int foo() {
    return 2;
}

int main() {
    int res;

    // inline function call
    res = foo();
    printf("%d", res);
    return 0;
}