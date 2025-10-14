#include <stdio.h>
void transpose(int mat[100][100], int rows, int cols) {
    int transposed[100][100];
    for(int i = 0; i < rows;i ++) {
        for(int j = 0; j < cols; j++) {
            transposed[j][i] = mat[i][j];
        }
    }
    printf("Transposed matrix: \n");
    for(int i = 0; i < cols;i ++) {
        for(int j = 0;j < cols; j++) {
            printf("%d", transposed[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[100][100];
    int rows, cols;
    int i, j;

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter columns: ");
    scanf("%d", &cols);

    printf("Enter elemts of matrix: ");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose(matrix,rows,cols);

    return 0;
}