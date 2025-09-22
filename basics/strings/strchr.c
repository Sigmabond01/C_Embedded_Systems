/*
The strchr() function is used to find the first occurrence of a given character in a string. If the character is found, it returns a pointer to the first occurrence of the character; otherwise, it returns NULL.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Hello, World!";
  
  	// Finding the first occurence of 'o' in string s
    char *res = strchr(s, 'o');
    if (res != NULL)
        printf("Character found at: %ld index", res - s);
    else
        printf("Character not found");
    return 0;
}
//o/p: Character found at: 4 index

/*
In C, strrchr() function is similar to strchr() function used to find the last occurrence of a given character in a string.
*/