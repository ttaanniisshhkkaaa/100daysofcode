//Q76: Check if a matrix is symmetric.

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
        printf("False\n");
        return 0;
    }
    int isSymmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }
    if (isSymmetric)
        printf("The given matrix is symmetric\n");
    else
        printf("The given matrix is not symmetric\n");

    return 0;
}
