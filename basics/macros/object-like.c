/*
Object-like macros are the simplest type of macros. They replace the macro name with a defined value or expression. 
These are used for constants or simple values.
*/

#include <stdio.h>

#define DATE 31

int main() {
    printf("Lockdown is extended upto %d-MAY-2020", DATE);
    return 0;
}

//o/p: Lockdown will be extended upto 31-MAY-2020
/*
 In this program, the object-like macro DATE is defined as 31.
 It is used in the printf function to insert the value 31 into the message, which the preprocessor replaces before compilation.
*/