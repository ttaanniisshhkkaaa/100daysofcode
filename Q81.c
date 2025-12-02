//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[1000];  
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }
    printf("Number of characters in the string: %d\n", count);

    return 0;
}
