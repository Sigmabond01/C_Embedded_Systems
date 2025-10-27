#include <stdio.h>     // Standard I/O functions (printf, etc.)
#include <stdlib.h>    // For exit(), malloc(), etc.
#include <string.h>    // For string functions (strlen, etc.)
#include <ctype.h>     // For isdigit() to check if a character is a digit

#define MAX 100         // Maximum size of the stack

// -----------------------------
// Definition of stack structure
// -----------------------------
struct stack {
    int top;           // Index of the top element in the stack
    int items[MAX];    // Array to store stack elements
};

// -----------------------------
// Function to initialize stack
// -----------------------------
void initStack(struct stack *s) {
    s->top = -1;       // When top = -1, stack is empty
}

// -----------------------------
// Check if stack is empty
// -----------------------------
int isEmpty(struct stack *s) {
    return s->top == -1;  // Returns 1 (true) if empty, else 0
}

// -----------------------------
// Check if stack is full
// -----------------------------
int isFull(struct stack *s) {
    return s->top == MAX - 1;  // Returns 1 if full, else 0
}

// -----------------------------
// Push operation (insert element)
// -----------------------------
void push(struct stack *s, int value) {
    if (isFull(s)) {                            // If stack is already full
        printf("Stack is full\n");              // Print error
        return;                                 // Exit the function
    }
    s->items[++(s->top)] = value;               // Increment top and store value at that position
}

// -----------------------------
// Pop operation (remove element)
// -----------------------------
int pop(struct stack *s) {
    if (isEmpty(s)) {                           // If stack is empty
        printf("Stack is empty\n");             // Print error
        exit(1);                                // Terminate program (invalid operation)
    }
    return s->items[(s->top)--];                // Return top element, then decrement top
}

// -----------------------------
// Evaluate postfix expression
// -----------------------------
int evaluate(char *exp) {
    struct stack s;                             // Declare a stack instance
    initStack(&s);                              // Initialize it (set top = -1)
    int i, val1, val2;                          // Variables for iteration and operand storage

    // Loop through each character in the expression
    for (i = 0; exp[i]; i++) {
        
        if (isdigit(exp[i])) {                  // If character is a digit (0-9)
            push(&s, exp[i] - '0');             // Convert char to int (e.g., '3' → 3) and push onto stack
        } 
        else if (exp[i] == ' ') {               // If space, skip it
            continue;                           
        }
        else {                                  // If operator (+, -, *, /)
            val1 = pop(&s);                     // Pop first operand (top of stack)
            val2 = pop(&s);                     // Pop second operand (next item)
            
            // Perform operation based on operator
            switch (exp[i]) {
                case '+': push(&s, val2 + val1); break;  // Add and push result
                case '-': push(&s, val2 - val1); break;  // Subtract and push result
                case '*': push(&s, val2 * val1); break;  // Multiply and push result
                case '/':                               // Division case
                    if (val1 == 0) {                    // Check division by zero
                        printf("Division by zero\n");
                        exit(1);
                    }
                    push(&s, val2 / val1);              // Perform division and push result
                    break;
                default:                                // Handle invalid operators
                    printf("Invalid operator: %c\n", exp[i]);
                    exit(1);
            }
        }
    }
    
    return pop(&s);                            // Final result will be the only value left in stack
}

// -----------------------------
// Main function (entry point)
// -----------------------------
int main() {
    char exp[] = "231*+9-";                    // Postfix expression (equivalent to 2 + 3 * 1 - 9)
    printf("Postfix evaluation: %s = %d\n", exp, evaluate(exp)); 
    // Prints the expression and its evaluated result
    return 0;                                  // Successful program termination
}
