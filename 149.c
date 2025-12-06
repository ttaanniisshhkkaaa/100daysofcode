//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/

#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int rollNo;
    int marks;
};
int main() {
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL) {
        perror("Unable to allocate memory");
        return 1;
    }
    printf("Enter Student details (Name RollNo Marks): ");
    scanf("%s %d %d", student->name, &student->rollNo, &student->marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", student->name, student->rollNo, student->marks);
    free(student);
    return 0;
}

