//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int len, i, lastSpace = -1;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }
    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", name[i + 1]);
    }
    if (lastSpace != -1)
        printf(" %s\n", &name[lastSpace + 1]);

    return 0;
}