/*
In C, storage classes define the lifetime, scope, and visibility of variables. 
They specify where a variable is stored, how long its value is retained,
and how it can be accessed which help us to trace the existence of a particular variable during the runtime of a program.

auto: This is the default storage class for all the variables declared inside a function or a block.
Auto variables can be only accessed within the block/function they have been declared and not outside them 
(which defines their scope).

Properties of auto Variables:
Scope: Local
Default Value: Garbage Value
Memory Location: RAM
Lifetime: Till the end of its scope
*/

#include <stdio.h>

int main() {
    // auto is optional here, as it's the default storage class
    auto int x = 10;  
    printf("%d", x);
    return 0;
}

//The auto keyword is used to declare a local variable with automatic storage. 
//However, in C, local variables are automatically auto by default, so specifying auto is optional.