//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0}; 
    int i;
    char result = '\0';

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a'; 

        if (count[index] == 1) {  
            result = str[i];
            break;
        } else {
            count[index]++;
        }
    }
    if (result != '\0')
        printf("First repeating character: %c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
