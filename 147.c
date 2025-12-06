//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
void writeEmployeeData(const char *filename) {
    FILE *file = fopen(filename
, "wb");
    if (file == NULL) {
        perror("Unable to open file for writing");
        return;
    }
    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("Employee details stored successfully.\n");
}
void readEmployeeData(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Unable to open file for reading");
        return;
    }
    struct Employee emp;
    fread(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
}
int main() {
    const char *filename = "employee.dat";
    writeEmployeeData(filename);
    readEmployeeData(filename);
    return 0;
}

