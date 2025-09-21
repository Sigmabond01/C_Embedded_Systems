/*
A function is a named block of code that performs a specific task.
It allows you to write a piece of logic once and reuse it wherever needed in the program. 
This helps keep your code clean, organized, and easier to understand.
*/

void hello() {
    printf("This is the hello function\n");
}

//function definition (function decalaration is olt the first line)
int square(int x) {
    return x * x;
}

int main() {
    //calling the hello(void) function
    hello();
    //calling the square(return-type) function
    int result = square(5);
    printf("the square of 5 is %d", result);
    return 0;
}

//o/p: This is the hello function
//Square of 5 is: 25

/*
main() function: This is the starting point of every C program. When the program runs, execution begins from the main function.
hello() function: This is a user-defined function that does not take any input and does not return a value. Its purpose is to print the value its given to the screen. It is called inside the main function using hello();.
square() function: This is another user-defined function, but unlike hello(), it has a return type. It takes one integer as input and returns the square of that number. In main(), we call square(5) and store the returned result in a variable to print it.
*/