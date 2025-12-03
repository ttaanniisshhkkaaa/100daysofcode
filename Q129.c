//Q. A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main() {
    FILE *file;
    int num, count = 0, sum = 0;
    float avg;

    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(file);
    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
