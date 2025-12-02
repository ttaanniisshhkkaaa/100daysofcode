//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>
int main() {
    int n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Read the number of elements
    scanf("%d", &n);
    int arr[n];

    // Read the elements of the array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positiveCount++;
        } else if(arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Print the counts
    printf("Positive=%d, Negative=%d, Zero=%d\n", positiveCount, negativeCount, zeroCount);

    return 0;
}