/*
The strcpy() function copies a string from the source to the destination. 
It copies the entire string, including the null terminator.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[20];
    
    // Copies "Hello" to dest
    strcpy(dest, src);  
    printf("%s", dest);
    return 0;
}

//o/p: Hello

/*
The strncpy() function is similar to strcpy(),
but it copies at most n bytes from source to destination string. 
If source is shorter than n, strncpy() adds a null character to destination to ensure n characters are written.
*/
//add strncpy and 4 next to src in aove code to get o/p as 4