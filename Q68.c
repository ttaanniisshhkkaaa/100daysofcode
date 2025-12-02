//Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int position;
    printf("Enter the position to delete: ");
    scanf("%d", &position);

    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
