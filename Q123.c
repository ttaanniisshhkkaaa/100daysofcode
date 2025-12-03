/*Q. Read a text file and count the total number of characters, words, and lines.
A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    file = fopen("info.txt", "r");
    if(file == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }
    while((ch = fgetc(file)) != EOF) {
        characters++;

        if(ch == '\n')
            lines++;

        if(isspace(ch)) {
            inWord = 0;
        } else if(inWord == 0) {
            inWord = 1;
            words++;
        }
    }
    fclose(file);
    if(characters > 0 && ch != '\n')
        lines++;
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
