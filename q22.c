//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>
int main() {
    float costPrice, sellingPrice;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if(sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        float profitPercentage = (profit / costPrice) * 100;
        printf("Profit %.2f%%\n", profitPercentage);
    } 
    else if(costPrice > sellingPrice) {
        float loss = costPrice - sellingPrice;
        float lossPercentage = (loss / costPrice) * 100;
        printf("Loss %.2f%%\n", lossPercentage);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}