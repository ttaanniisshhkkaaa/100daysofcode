//Q77: Check if the elements on the diagonal of a matrix are distinct.

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
        printf("Matrix is not square, so diagonal check not possible.\n");
        return 0;
    }
    int diagonal[10];
    int count = 0;
    int isDistinct = 1;
    for (int i = 0; i < n; i++) {
        diagonal[count++] = matrix[i][i];
    }
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (diagonal[i] == diagonal[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }
    if (isDistinct)
        printf("Elements on the diagonal of the matrix are distinct\n");
    else
        printf("Elements on the diagonal of the matrix are not distinct\n");

    return 0;
}
