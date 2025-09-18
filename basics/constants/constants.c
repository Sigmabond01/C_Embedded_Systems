/*
In C programming, const is a keyword used to declare a variable as constant, meaning its value cannot be changed after it is initialized.
It is mainly used to protect variables from being accidentally modified, making the program safer and easier to understand. 
These constants can be of various types, such as integer, floating-point, string, or character constants.
syntax: const data_type var_name = value;
*/

#include <stdio.h>

int main() {
  	// Defining constant variable
  	const int a = 10;
 	printf("%d", a);
    return 0;
}
//O/P = 10

/* PROPERTIES
1. Initialization with Declaration
We can only initialize the constant variable in C at the time of its declaration. If we do not initialize it at the time of declaration,
it will store the garbage value that was previously stored in the same memory.
*/

int dec() {
  	// Not initializing a constant variable
	const int a;
  	// printing value
  	printf("%d", a);
    return 0;
}
//O/P = 0, The garbage value here is 0 but i can by anything depending on your environment.

/*
2. Immutability
The constant variables in c are immutable after its definition, i.e., they can be initialized only once in the whole program.
After that, we cannot modify the value stored inside that variable.
*/

#include <stdio.h>
int imm() {
    // Declaring a constant variable
    const int b;
    // Initializing constant variable var after declaration
    //b = 20;
    printf("%d", b);
    return 0;
}
//this will give an error, remove the comment and hover over it to understand

/*
Constants Using #define
In C, the #define directive can also be used to define symbolic constants that do not require a data type.
They are called macros and are replaced by their values at compile time.
syntax : #define CONSTANT_NAME value
*/

#define PI 3.14

int main() {
    printf("%.2f", PI);  
    return 0;
}