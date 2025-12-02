//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int n, first, last, temp, digits = 0, power = 1;

    scanf("%d", &n);
    temp = n;
    last = n % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
        power *= 10;
    }
    first = temp;

    int middle = (n % power) / 10;
    int swapped = last * power + middle * 10 + first;

    printf("%d", swapped);
    return 0;
}
