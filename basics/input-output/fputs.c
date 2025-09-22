/*
The fputs() function is used to output strings to the files 
but we can also use it to print strings to the console screen.
*/

#include <stdio.h>

int main() {
    fputs("This is my string", stdout);
    //stdout represents that the text should be printed to console.
    return 0;
}
//o/p: This is my string