/*
In C, bitwise operators are used to perform operations directly
on the binary representations of numbers. These operators work 
by manipulating individual bits (0s and 1s) in a number.

The following 6 operators are bitwise operators (also known as bit operators as they work at the bit-level). 
CHECK IMAGES
They are used to perform bitwise operations in C.
*/

#include <stdio.h>

int main() {
    
    // a = 5 (00000101 in 8-bit binary) 
    // b = 9 (00001001 in 8-bit binary)
    unsigned int a = 5, b = 9;

    // The result is 00000001
    printf("a&b = %u\n", a & b);

    // The result is 00001101
    printf("a|b = %u\n", a | b);

    // The result is 00001100
    printf("a^b = %u\n", a ^ b);

    // The result is 11111111111111111111111111111010
    // (assuming 32-bit unsigned int)
    printf("~a = %u\n", a = ~a);

    // The result is 00010010
    printf("b<<1 = %u\n", b << 1);

    // The result is 00000100
    printf("b>>1 = %u\n", b >> 1);
    return 0;
}