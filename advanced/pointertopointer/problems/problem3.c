//Pass Array of Strings to Function
/*TO RUN
cd advanced/pointertopointer/problems
gcc problem2.c -o str
.\str.exe
*/

#include <stdio.h>

void print(char** arr, int n) {
    for(int i = 0; i < n; i++)
    printf("%s\n", *(arr + i));   
}

int main() {
    char* arr[10] = {"X", "Twitter", "Sigmabond01"};
    print(arr, 3);
    return 0;
}

/*
Array of strings are generally stored as array of pointer to strings. 
This can be passed using double pointers to function.
*/