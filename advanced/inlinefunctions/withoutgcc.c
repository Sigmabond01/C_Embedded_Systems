/*
GCC implements inline functions as a part of optimization. 
When inline is used for a function in a C source file and compiled without any optimization flag, it throws an error as shown:
*/

#include <stdio.h>

inline int foo() {
    return 2;
}

int main() {
    int res;
    res = foo();
    printf("%d", res);
    return 0;
}

/*O/P
/usr/bin/ld: /tmp/ccBVKkSP.o: in function `main':
solution.c:(.text+0x12): undefined reference to `foo'
collect2: error: ld returned 1 exit status
*/