/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode.
If the file pointer is NULL, print an error message; otherwise, read and display its content.*/
#include <stdio.h>
int main() {
    FILE *file;
    char filename[50];
    char ch;
    printf("Enter file name: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if(file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }
    printf("File opened successfully.\n");
    printf("File content:\n\n");
    while((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    fclose(file);
    return 0;
}
