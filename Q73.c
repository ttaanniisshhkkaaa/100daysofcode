//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, columns;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[10][10]; 
    int rowSum[10];    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j]; 
        }
    }
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
