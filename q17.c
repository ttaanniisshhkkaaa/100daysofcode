//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>

int main(){
float a, b, c, d, r1, r2;
printf("Enter coefficients a, b and c (ax^2+bx+c=0): ");
scanf("%f %f %f", &a, &b, &c);
d=b*b-4*a*c;
if(d>0){
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("Roots are real and different: %.2f, %.2f\n", r1, r2);
}
else if (d==0){
    r1=r2=-b/(2*a);
    printf("Roots are real and same: %.2f\n", r1);
}
else{
    printf("Roots are complex\n");
}
return 0;
}