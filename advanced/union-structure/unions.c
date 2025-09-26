/*
A union in C is similar to a structure, but with a key difference: 
all members of a union share the same memory location. 
This means only one member of the union can store a value at any given time. 
The size of a union is determined by the size of its largest member.
*/

#include <stdio.h>

union Data
{
    int i;
    double d;
    char c;
};

int main() {
    //creating union var
    union Data data;

    //store int in union
    data.i = 100;
    printf("%d", data.i);

    //storing double overrides int
    data.d = 9.99;
    printf("%2f", data.d);

    //storing caharacter overwrites double
    data.c = 'A';
    printf("%c", data.c);

    printf("Size: %d", sizeof(data));
}
