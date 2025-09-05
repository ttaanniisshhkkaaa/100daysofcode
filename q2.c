//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Enter opperation (+, -, *, /): \n");
    char op;
    scanf(" %c", &op);
    switch(op){
        case '+':
            c=a+b;
            printf("The Sum is: %d\n", c);
            break;
        case '-':
            c=a-b;
            printf("The Difference is: %d\n", c);
            break;
        case '*':
            c=a*b;
            printf("The Product is: %d\n", c);
            break;
        case '/':
            if(b!=0){
                float result = (float)a/b;
                printf("The Quotient is: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }
    return 0;
    }