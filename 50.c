/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>
int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = n; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}