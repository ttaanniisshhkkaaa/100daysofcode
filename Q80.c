//Q80: Multiply two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    int A[r1][c1];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    int B[r2][c2];
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        printf("Reason: Columns of first matrix %d != Rows of second matrix %d\n", c1, r2);
        return 0;
    }
    printf("First Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    int result[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("After multiplication the resultant matrix is:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
