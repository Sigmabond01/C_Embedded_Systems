/*
The strlen() function is used to find the length of a string. 
It returns the number of characters in a string, excluding the null terminator ('\0').
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = 'sigmabond01';

    printf("%lu", strlen(s));
    return 0;
}

//o/p: 11