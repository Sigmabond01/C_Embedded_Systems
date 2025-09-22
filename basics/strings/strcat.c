/*
The strcat() function is used to concatenate (append) one string to the end of another. 
It appends the source string to the destination string, replacing the null terminator of the destination with the source string’s content.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[30] = "Hello, ";
    char s2[] = "Guys";
    
    // Appends "Guys" to "Hello, "
    strcat(s1, s2);  
    printf("%s", s1);
    return 0;
}
//o/p:Hello, Guys

/*
In C, there is a function strncat() similar to strcat(). This function appends not more than n characters from the string pointed to by source to the end of the string pointed to by destination plus a terminating NULL character.
*/