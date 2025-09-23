/*C program to convert temperatue from farenheit to celsius and vice-versa*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float fh, cl;
    int choice;

    printf("\n 1: Convert from farenheit to celsius");
    printf("\n 2: Convert from celsius to farenheit");
    printf("\n Enter your choice: \n");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("\nEnter temp in farenheit: ");
        scanf("%f", &fh);
        cl = (fh - 32) / 1.8;
        printf("Temp in celsius: %f", cl);
    }

    else if(choice == 2) {
        printf("\n Enter temp in celsius: ");
        scanf("%f", &cl);
        fh = (cl * 1.8) + 32;
        printf("Temp in farenheit: %f", fh);
    }

    else {
        printf("Invalid choice\n");
    }

    return 0;
}