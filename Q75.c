//Q75: Add two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    int a[10][10];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    int b[10][10];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible! Dimensions must be same.\n");
        return 0;
    }
    int sum[10][10];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("After addition the resultant matrix is:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
