//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    scanf("%s", input);   // Example: Gender=MALE

    struct Person p;

    if (strcmp(input, "Gender=MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "Gender=FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(input, "Gender=OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid Input\n");
        return 0;
    }

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
