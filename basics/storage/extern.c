/*
Extern storage class simply tells us that the variable is defined elsewhere and not within the same block where it is used. Basically, the value is assigned to it in a different block and this can be overwritten/changed in a different block as well.
Also, a normal global variable can be made extern as well by placing the ‘extern’ keyword before its declaration/definition in any function/block

Properties of extern Storage Class Objects:
Scope: Global
Default Value: Zero
Memory Location: RAM
Lifetime: Till the end of the program.
*/

#include <stdio.h>

// Global variable
int globalVar = 100;  
void printGlobalVar();
int main() {
    // Prints: Global variable is: 100
    printGlobalVar(); 
    return 0;
}

/*kinda complicated to run it but basically
have a global var declaration in another file
int globalVar;
Another file declares this variable as extern static that it is declared in another file. It then prints this variable.
then to run, compile both the files together
*/