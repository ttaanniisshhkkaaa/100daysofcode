//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
int main() {
    int n, binary[32], i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("1\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 10;
        n = n / 10;
        i++;
    }

    printf("1's complement: ");
    for (int j = i - 1; j >= 0; j--) {
        if (binary[j] == 0) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}