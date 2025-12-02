//Q67: Insert an element in an array at a given position.

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

    int position, value;
    printf("Enter the position: ");
    scanf("%d", &position);
    printf("Enter the element to insert: ");
    scanf("%d", &value);


    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value; 
    n++; 
    
    printf("After inserting the element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
