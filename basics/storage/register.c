/*
This storage class declares register variables that have the same functionality as that of the auto variables. The only difference is that the compiler tries to store these variables in the register of the microprocessor if a free register is available making it much faster than any of the other variables.

Properties of register Storage Class Objects:
Scope: Local
Default Value: Garbage Value
Memory Location: Register in CPU or RAM
Lifetime: Till the end of its scope
*/

#include <stdio.h>
int main() {
    //suggest to store in a register
    register int i;
    for(i = 0; i < 5; i++) {
        printf("%d", i);
    }
    return 0;
}
//O/P = 0 1 2 3 4
//The register keyword suggests storing the variable in a register for faster access, but the compiler may not always honor this request based on available CPU registers.