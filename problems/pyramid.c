#include <stdio.h>

int main() {
    int i, j, k, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i <= rows; i++) {
        for(j = 0; j <= 2*(rows - 1); j++) {
            printf(" ");
        }
        for (k = 1; k < 2 * i; k++) {
            printf("%d", i);
        }
        printf("\n");
    }
}