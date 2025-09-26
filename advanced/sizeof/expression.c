/*
When sizeof() is used with the expression, it returns the size of the expression. 
*/

#include <stdio.h>

int main() {
    int a = 0;
    double d = 10.1;

    printf("%lu", sizeof( a + d));

    return 0;
}
//o/p: 8
/*As we know from the first case size of int and double is 4 and 8 respectively, a is int variable while d is a double variable. The final result will be double, Hence the output of our program is 8 bytes.*/