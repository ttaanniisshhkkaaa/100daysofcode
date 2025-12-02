/*Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>
int main() {
    int n, i, j, isPrime;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through all numbers from 2 to n
    for(i = 2; i <= n; i++) {
        isPrime = 1; // Assume the number is prime

        // Check if i is prime
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        // If isPrime remains 1, then i is prime
        if(isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}