/*
for loop is an entry-controlled loop, which means that the condition is checked before the loop's body executes.

The various parts of the for loop are:
Initialization: Initialize the variable to some initial value.
Test Condition: This specifies the test condition. If the condition evaluates to true, then body of the loop is executed. If evaluated false, loop is terminated.
Update Expression: After the execution loop’s body, this expression increments/decrements the loop variable by some value.
Body of Loop: Statements to repeat. Generally enclosed inside {} braces.
*/

//loop to print numbers from 1 to 5
#include <stdio.h>

int main() {
    for(int i = 0; i < 5; i++) {
        printf("%d", i + 1);
    }
    return 0;
}
//o/p: 1 2 3 4 5 