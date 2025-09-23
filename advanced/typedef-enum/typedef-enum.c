/*The typedef keyword can be used to define an alias for an enum so that we can avoid using the keyword enum again and again.*/

#include <stdio.h>

// Defining enum
typedef enum direction {
    EAST, NORTH, WEST, SOUTH
}Dirctn;

int main() {
    Dirctn dir = NORTH;
    
    // Checking the size of enum
    printf("%d", dir);
    return 0;
}
//o/p: 1
/*
In the above program, we have used typedef to create a nickname Dirctn for the direction enum 
so that we can directly refer to it by using the nickname. It enhances the code readability.
*/