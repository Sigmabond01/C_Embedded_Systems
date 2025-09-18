/*
In C programming, a macro is a symbolic name or constant that represents a value, expression, or code snippet.
They are defined using the #define directive, and when encountered, the preprocessor substitutes it with its defined content.
*/

#include <stdio.h>
// Macro definition
#define LIMIT 5

int main(){
    // Print the value of macro defined
    printf("LIMIT: %d", LIMIT);
    return 0;
}

/*
In this code, a macro LIMIT is defined with the value 5 using the #define directive. 
The macro LIMIT is then used in the printf function to print its value, 
which is 5. The preprocessor replaces the macro LIMIT with its defined value before the code is compiled, 
so the output of the program will display the value 5.
*/