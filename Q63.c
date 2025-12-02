//Q63: Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2, i;

    // Read first array
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements of first array: ", n1);
    for (i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of second array: ", n2);
    for (i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    printf("Merged array: ");
    for (i = 0; i < n1; i++)
     {
        printf("%d ", arr1[i]);
    }
    for (i = 0; i < n2; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
