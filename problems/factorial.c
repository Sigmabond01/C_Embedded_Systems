#include <stdio.h>

int main() {
    int number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++) {
        factorial = factorial * i;
    }
    printf("Factorial of the number %d is: %d\n", number, factorial);
}