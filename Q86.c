//Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("String is a Palindrome\n");
    else
        printf("String is not palindrome\n");

    return 0;
}
