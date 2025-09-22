/*
The strcmp() is a built-in library function in C. 
This function takes two strings as arguments, 
compares these two strings lexicographically and returns an integer value as a result of comparison.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Apple";
    char s2[] = "Applet";
    
  	// Compare two strings 
  	// and print result
    int res = strcmp(s1, s2);
    if (res == 0) 
        printf("s1 and s2 are same");
  	else if (res < 0)
      	printf("s1 is lexicographically " 
      	        "smaller than s2");
  	else
      	printf("s1 is lexicographically " 
      	       "greater than s2");
    return 0;
}
//o/p: s1 is lexicographically smaller than s2

/* (strncmp)
This function lexicographically compares the first n characters from the two null-terminated strings and returns an integer based on the outcome.
*/