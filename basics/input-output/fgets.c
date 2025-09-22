/*
fgets() reads the given number of characters of a line from the input
and stores it into the specified string. It can read multiple words at a time.
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    // String variable
    char name[20];
    
    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);
    
    printf("Hello, %s", name);
    return 0;
}
/*O/P
Enter your name: 
John
Hello, John
*/