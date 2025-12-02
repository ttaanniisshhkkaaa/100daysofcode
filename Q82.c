//Q82: Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') { 
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}
