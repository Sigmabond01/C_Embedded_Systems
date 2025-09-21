/*
The if statement alone tells us that if a condition is true, 
it will execute a block of statements and if the condition is false, 
it won’t. But what if we want to do something else when the condition
is false? Here comes the C else statement. 
We can use the else statement with the if statement to execute
a block of code when the condition is false. 
The if-else statement consists of two blocks, one for false expression and one for true expression.
*/

#include <stdio.h>

int main() {
    int i = 10;

    if (i > 18) {
        printf("Eligible for vote");
    }
    else {
        printf("Not Eligible for vote");
    }
    return 0;
}
//o/p: Not Eligible for vote