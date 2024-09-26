#include <stdio.h>
// To  find the product of 3 Integers
int main() {
    int num1, num2, num3, product;
    printf("Enter the Integer Number \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    product = num1 * num2 * num3;
    printf("Product of the number is : %d%d%d ", num1, num2, num3);
    return 0;
}