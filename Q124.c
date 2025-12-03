/*Q124: Take two filenames from the user – a source file and a destination file.
Copy all the content from the source file to the destination file using fgetc() and fputc().*/
#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourceName[50], destName[50];
    char ch;
    printf("Enter source file name: ");
    scanf("%s", sourceName);
    printf("Enter destination file name: ");
    scanf("%s", destName);
    sourceFile = fopen(sourceName, "r");
    if(sourceFile == NULL) {
        printf("Error! Could not open source file.\n");
        return 1;
    }
    destFile = fopen(destName, "w");
    if(destFile == NULL) {
        printf("Error! Could not create destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    while((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    printf("File copied successfully to %s\n", destName);
    return 0;
}
