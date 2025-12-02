//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLength = 0, length = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); 
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; 
            length = strlen(word);

            if (length > maxLength) {
                maxLength = length;
                strcpy(longest, word);
            }
            j = 0; 
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
