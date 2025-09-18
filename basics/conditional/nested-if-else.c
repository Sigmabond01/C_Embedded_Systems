/*A nested if in C is an if statement that is the target of another if statement. Nested if statements mean an if statement inside another if statement. Yes, C allow us to nested if statements within if statements, i.e, we can place an if statement inside another if statement.*/

#include <stdio.h>

int main(){
    int i = 10;

    if (i == 10) {
        if (i < 18)
            printf("Still not eligible for vote");
        else
            printf("Eligible for vote\n");
    }
    else {
        if (i == 20) {
            if (i < 22)
                printf("i is smaller than 22 too\n");
            else
                printf("i is greater than 25");
        }
    }

    return 0;
}
//o/p: Still not eligible for vote