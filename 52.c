/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>
int main() {
    int i, j, k;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    printf("*\n");
    return 0;
}