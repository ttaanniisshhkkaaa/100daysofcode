//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (n != m) {
        printf("Matrix must be square to have a main diagonal.\n");
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("The sum of it's diagonal elements are:\n");
    printf("%d\n",sum);

    return 0;
}
