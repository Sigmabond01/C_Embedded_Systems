/*
The sprintf() function is used to format a string and store it in a buffer.
It is similar to printf(), but instead of printing the result, it stores it in a string.
*/

#include <stdio.h>

int main() {
    char s[50];
    int n = 10;
    
    // Output formatted string into string bugger s
    sprintf(s, "The value is %d", n);
    printf("%s", s);
    return 0;
}
//o/p: The value is 10