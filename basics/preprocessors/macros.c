/*
Macros are used to define constants or create functions 
that are substituted by the preprocessor before the code is compiled.
The two preprocessors #define and #undef are used to create and remove macros in C.
*/

#include <stdio.h>
// Macro Definition
#define LIMIT 5

int main(){
    for (int i = 0; i < LIMIT; i++) {
        printf("%d \n", i);
    }
    return 0;
}
/*O/P
0 
1 
2 
3 
4
*/