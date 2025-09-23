/*C program to calculate avg of 3 nos*/

#include <stdio.h>

//decalring variables
int i, j, k, sum;
float avg;

int main() {
    //input from user
    printf("enter 3 numbers:\n");
    scanf("%d %d %d", &i, &j, &k);

    //sum of three numbers
    sum = i + j + k;
    //avg of three numbers
    avg = i + j + k / 3;

    //displaying
    printf("Sum is %d\n", sum);
    printf("Average is %2f\n", avg);

    return 0;
}