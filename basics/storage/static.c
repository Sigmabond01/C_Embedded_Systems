/*
This storage class is used to declare static variables that have the property 
of preserving their value even after they are out of their scope! 
Hence, static variables preserve the value of their last use in their scope.

Properties of static Storage Class:
Scope: Local
Default Value: Zero
Memory Location: RAM
Lifetime: Till the end of the program
*/
#include <stdio.h>
void counter() {
    //// Static variable retains value between calls
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}

int main() {
    //prints: Count = 1
    counter();
    //prints: Count = 2
    counter();
    return 0;
}

//The static variable count retains its value between function calls.
//Unlike local variables, which are reinitialized each time the function is called, 
//static variables remember their previous value.