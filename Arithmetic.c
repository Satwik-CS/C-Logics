#include <stdio.h>
 //To perform all basic arithmetic operator on 2 int variable
 int main() {
    int a = 15;
    int b = 10;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    printf("sum: %d \n difference: %d \n product: %d \n quotient: %d \n remainder: %d \n", sum, difference, product, quotient, remainder);
    return 0;
 }