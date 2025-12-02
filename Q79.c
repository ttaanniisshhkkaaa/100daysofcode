//Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    int matrix[rows][columns];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Diagonal traversal of the matrix is: ");

    for (int k = 0; k < rows + columns - 1; k++) {
        for (int i = 0; i <= k; i++) {
            int j = k - i;  
            if (i < rows && j < columns) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}
