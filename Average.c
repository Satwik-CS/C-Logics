#include <stdio.h>
// To check the average of the 5 nuumbers
int main () {
    int num1, num2, num3, num4, num5;
    int average;
    printf("Enter the 5 Numbers \n");
    scanf("%d%d%d%d%d", &num1,&num2,&num3,&num4,&num5);

    average = (num1 + num2 + num3 + num4 + num5) /5;
    printf("The average of %d%d%d%d%d is :%d \n", num1, num2, num3, num4, num5, average);
    return 0;
}
