/*
The printf() function is used to print formatted output 
to the standard output stdout (which is generally the console screen).
It is one of the most commonly used functions in C.
*/

#include <stdio.h>

int main() {
    int age = 19;

    // Prints some text
    printf("First Print");
    //o/p: First Print

    //prints age
    printf("%d\n", age); 
    //o/p: 19

    //prints age
    printf("The value of the variable age is %d\n", age);
    //o/p: The value of the variable age is 19
  
    return 0;
}