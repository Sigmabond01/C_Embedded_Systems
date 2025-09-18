/*
These macros span multiple lines for readability and organization. 
They are often used when you need a more complex expression or code block.
To create a multi-line macro you have to use backslash \. 
*/

#include <stdio.h>

// Multi-line Macro definition
#define ELE 1, \
            2, \
            3

int main(){
    // Array arr[] with elements
    // defined in macros
    int arr[] = { ELE };
    for (int i = 0; i < 3; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}

//o/p: 1 2 3
/*
In this program, 
a multi-line macro ELE is defined with the values 1, 2, 3 which is used to initialize the array arr[].
 The preprocessor replaces ELE with these values.
*/