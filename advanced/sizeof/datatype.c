/*When sizeof() is used with the data types such as int, float, char... etc it simply returns the amount of memory allocated to that data types.*/

#include <stdio.h>

int main(){

    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of pointer: %lu bytes\n", sizeof(void *));

    return 0;

}

/*O/P
Size of char: 1 bytes
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of pointer: 8 bytes
*/