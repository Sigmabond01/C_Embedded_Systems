/*sizeof() is a compile-time operator. compile time refers to the time at which the source code is converted to a binary code. It doesn't execute (run) the code inside (). */

#include <stdio.h>

int main(void)
{
    int y;
    int x = 11;

    // value of x doesn't change
    y = sizeof(x++);

    // prints 4 and 11
    printf("%i %i", y, x);

    return (0);
}

//If we try to increment the value of x, it remains the same. This is because x is incremented inside the parentheses and sizeof() is a compile-time operator.  