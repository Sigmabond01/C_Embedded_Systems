/*
The strstr() function in C is used to search 
the first occurrence of a substring in another string. 
If it is not found, it returns a NULL.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Hello, Geeks!";
  
  	// Find the occurence of "Geeks" in string s
    char *pos = strstr(s, "Geeks");
    
    if (pos != NULL)
        printf("Found"); 
    else
        printf("Not Found");
    return 0;
}
//o/p: Found