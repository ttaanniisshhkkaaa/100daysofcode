//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int rollNo;
    int marks;
};
int main() {
    struct Student student;
    struct Student *ptr = &student;

    printf("Enter Student details (Name RollNo Marks): ");
    scanf("%s %d %d", ptr->name, &ptr->rollNo, &ptr->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->rollNo, ptr->marks);
    return 0;
}

