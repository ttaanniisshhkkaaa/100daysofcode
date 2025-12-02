//Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;
    int temp[100];

    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
