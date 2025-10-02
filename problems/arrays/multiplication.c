#include <stdio.h>

int main() {
    int row1, col1, row2, col2, i, j, k;
    int matrix1[100][100], matrix2[100][100], result[100][100];

    printf("Enter number of rows for matrix1: ");
    scanf("%d", &row1);
    printf("Enetr number of columns for matrix1: ");
    scanf("%d", &col1);

    printf("Enter elements of matrix1: ");
    for( i = 0; i < row1; i++) {
        for( j = 0; j < col1 ;j ++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter number of rows for matrix2: ");
    scanf("%d", &row2);
    printf("Enter number of columns for matrix2: ");
    scanf("%d", &col2);

    if(col1 != row2) {
        printf("Matrix multipliction is not possible");
        return 0;
    }

    printf("Enter elements of matrix2: ");
    for( i = 0; i < row2; i++) {
        for( j = 0; j < col2 ;j ++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for( i = 0; i < row1; i++) {
        for( j = 0; j < col2; j++) {
            result[i][j] = 0;
            for(k = 0 ; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resultant matrix: ");
    for(i = 0; i < row1; i++) {
        for( j = 0; j < col2; j++) {
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}