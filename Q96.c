//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[200];
    int i = 0, start = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    printf("Reversed words: %s", str);
    return 0;
}
