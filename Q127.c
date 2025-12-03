/*Q. Write a program that reads text from info.txt,
converts all lowercase letters to uppercase, and writes the result to output.txt.*/


#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *inputFile, *outputFile;
    char ch;
    inputFile = fopen("info.txt", "r");
    if(inputFile == NULL) {
        printf("Error! Could not open info.txt\n");
        return 1;
    }
    outputFile = fopen("output.txt", "w");
	    if(outputFile == NULL) {
        printf("Error! Could not create output.txt\n");
        fclose(inputFile);
        return 1;
    }
    while((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    printf("Conversion completed! Check output.txt\n");
    return 0;
}
