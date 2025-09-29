#include <stdio.h>

int main() {
    int m, n, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &m);

    temp = m;
    n = m;

    while (n > 0) {
        int digit = n % 10;
        sum = (sum * 10) + digit;
        n = n / 10;
    }

    if (temp == sum) {
        printf("Palindrome number\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
