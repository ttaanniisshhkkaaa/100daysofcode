//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    
    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);
    
    strncpy(day, date, 2);
    day[2] = '\0';
    
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    
    strcpy(year, date + 6);
        if (strcmp(month, "04") == 0)
        printf("%s-Apr-%s\n", day, year);
    else
        printf("Month not 04, no conversion applied.\n");
    
    return 0;
}
