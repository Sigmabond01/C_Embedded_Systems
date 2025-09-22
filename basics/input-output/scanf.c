/*
scanf() is used to read user input from the console.
It takes the format string and the addresses of the variables where the input will be stored.
*/

#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
  
    // Reads an integer
    scanf("%d", &age);  
  
    // Prints the age
    printf("Age is: %d\n", age);  
    return 0;
}
/*O/P
Enter your age: 
19
Age is: 19
*/

/*
%d is used to read an integer; 
and &age provides the address of the variable where the input will be stored.
%c for character and %s for string
*/