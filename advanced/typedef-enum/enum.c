/*
In C, an enumeration (or enum) is a user defined data type that contains a set of named integer constants. 
It is used to assign meaningful names to integer values, which makes a program easy to read and maintain.
*/

#include <stdio.h>

// Defining enum
enum direction {
    EAST, NORTH, WEST, SOUTH
};

int main() {

    // Creating enum variable
    enum direction dir = NORTH;
    printf("%d\n", dir);
    
    // This is valid too
    dir = 3;
    printf("%d", dir);
    return 0;
}

/*O/P
1
3
*/
//Though it is recommended to avoid using integers as enums loses their purpose when integer values are preferred in the use.