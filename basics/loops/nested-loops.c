/*
Nesting loops means placing one loop inside another. The inner loop runs fully for each iteration of the outer loop. 
This technique is helpful when you need to perform multiple iterations within each cycle of a larger loop,
like when working with a two-dimensional array or performing tasks that require multiple levels of iteration.
*/

#include <stdio.h>

int main() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("i = %d, j = %d \n", i, j);
        }
    }
    return 0;
}
/*
i = 0, j = 0
i = 0, j = 1
i = 1, j = 0
i = 1, j = 1
i = 2, j = 0
i = 2, j = 1
*/