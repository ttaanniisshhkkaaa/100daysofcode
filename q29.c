//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

int main() {
    int n, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial of negative number not possible.\n");
    else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("%d\n", fact);
    }

    return 0;
}
