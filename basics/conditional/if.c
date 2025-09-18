/*
The if statement is the simplest decision-making statement. 
It is used to decide whether a certain statement or block of statements
 will be executed or not i.e if a certain condition is true 
 then a block of statements is executed otherwise not.
A condition is any expression that evaluates to either a true or false (or values convertible to true or flase).
*/

#include <stdio.h>

int main() {
    
    int i = 10;
    // If statement
    if (i < 18) {
        printf("Eligible for vote");
    }
}
//o/p: eligible for vote
//if there is only a single statement in the body, {} braces can be omitted.