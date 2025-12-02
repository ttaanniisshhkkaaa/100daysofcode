//Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int low = 0, high = n - 1, mid, found = 0;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == key) {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (!found) {
        printf("-1\n");
    }
    
    return 0;
}
