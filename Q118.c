/*Q. Write a program to take an input array of size n.
The array should contain all the integers between 0 to n except for one.
Print that missing number*/
#include <stdio.h>
int main() {
    int n, i, a, sum = 0, total, missing;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a);
        sum = sum + a;
    }
    total = n * (n + 1) / 2;
    missing = total - sum;
    printf("Missing number is: %d", missing);
    return 0;
}
