/*
The strtok() function is used to split a string into tokens based on specified delimiters.
It modifies the original string by replacing delimiters with null characters ('\0').
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Hello, Geeks, C!";
  
  	// Initializing tokens
    char *t = strtok(s, ", ");
  	// Printing rest of the tokens
    while (t != NULL) {
        printf("%s\n", t);
        t = strtok(NULL, ", ");
    }
    return 0;
}
/*O/P
Hello
Geeks
C!
*/