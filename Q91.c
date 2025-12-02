//Q91: Remove all vowels from a string.

#include <stdio.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower((unsigned char)c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {
    char str[200];
    int i, j;

    printf("Enter a string: ");
    if (!fgets(str, sizeof str, stdin)) return 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') { str[i] = '\0'; break; }
    }
    j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String without vowels: %s\n", str);
    return 0;
}
