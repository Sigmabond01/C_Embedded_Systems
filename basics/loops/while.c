/*
A while loop is also an entry-controlled loop in which the condition is checked before entering the body.
Only the condition is the part of while loop syntax, we have to initialize and update loop variable manually.
*/

#include <stdio.h>

int main() {
    int i = 0;
    while (i <= 5)
    {
        printf("%d", i + 1);
        //update expression
        i++;
    }
    return 0;
}

//o/p: 1 2 3 4 5 6