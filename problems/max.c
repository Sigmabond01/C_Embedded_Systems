#include <stdio.h>

int main() {
    int a, b, c, big;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d \n", &a, &b, &c);

    //If a is greater than both b and c, big = a, otherwise big = (b if b > c else c)
    big = (a > b && a > c ? a : b > c ? b : c);

    printf("The biggest number is: %d \n", big);

    return 0;
}