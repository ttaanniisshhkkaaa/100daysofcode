/*Q. Open an existing file in append mode and allow the user to enter a new line of text.
Append the text at the end without overwriting existing content.*/
#include <stdio.h>
int main() {
    FILE *file;
    char filename[50];
    char text[200];
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();
    file = fopen(filename, "a");
    if(file == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }
    printf("Enter text to append: ");
    gets(text);
    fprintf(file, "\n%s", text);
    fclose(file);
    printf("File updated successfully with appended text.\n");
    return 0;
}
