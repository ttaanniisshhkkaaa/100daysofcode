/*Q. Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.*/
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    int maxSum = -1000000;
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        if (sum > maxSum) maxSum = sum;
    }

    printf("%d\n", maxSum);
    return 0;
}
