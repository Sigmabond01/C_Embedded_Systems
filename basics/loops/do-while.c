/*
The do-while loop is an exit-controlled loop, which means that the condition is checked after executing the loop body.
Due to this, the loop body will execute at least once irrespective of the test condition.
*/

#include <stdio.h>

int main() {
    int i = 0;
    do
    {
        printf("%d", i);
        i++;
    } while (i <= 10);
    return 0;
}

//o/p: 0 1 2 3 4 5 6 7 8 9 10