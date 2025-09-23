/*
One of the most useful applications of function pointers is
passing functions as arguments to other functions. 
This allows you to specify which function to call at runtime.
*/

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

// A simple subtraction function
int subtract(int a, int b) {
    return a - b;
}

void calc(int a, int b, int (*op)(int, int)) {
    printf("%d\n", op(a, b));
}

int main() {
  
    // Passing different 
    // functions to 'calc'
    calc(10, 5, add);
  	calc(10, 5, subtract);
    return 0;
}

//o/p: 15 5

/*
The calc function accepts a function pointer operation that is used to perform a specific operation 
(like addition or subtraction) on the two integers a and b. 
By passing the add or subtract function to calc, the correct function is executed dynamically.
*/