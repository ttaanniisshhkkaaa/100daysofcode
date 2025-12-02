//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

int main() {
    int n, num=2, den=3;
    float sum=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum += (float)num/den;
        num += 2;
        den += 4;
    }

    printf("Approximate sum: %.2f", sum);
    return 0;
}
