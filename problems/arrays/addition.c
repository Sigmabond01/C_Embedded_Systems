#include <stdio.h>

int main() {
    int i, j;
    int row, col;
    int matrix1[100][100], matrix2[100][100], result[100][100];

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    if (row > 100 || col > 100 || row <= 0 || col <= 0) {
        printf("Invalid size!\n");
        return 1;
    }

    printf("Enter elements of first matrix (%d x %d):\n", row, col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix (%d x %d):\n", row, col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix addition
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant matrix is:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%4d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
