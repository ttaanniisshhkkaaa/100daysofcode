//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main() {
    int n, original, rem, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        rem = n % 10;             
        result = result + rem * rem * rem; 
        n = n / 10;              
    }

    if (result == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
