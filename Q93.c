//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", string1);

    printf("Enter second string: ");
    scanf("%s", string2);

    if (strlen(string1) != strlen(string2)) {
        printf("They are not anagrams\n");
        return 0;
    }
    for (i = 0; string1[i] != '\0'; i++) {
        count1[string1[i] - 'a']++;
        count2[string2[i] - 'a']++;
    }
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("They are not anagrams\n");
            return 0;
        }
    }

    printf("They are Anagrams\n");
    return 0;
}
