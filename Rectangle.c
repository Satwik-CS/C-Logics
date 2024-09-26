#include <stdio.h>
//To find the Perimeter of rectangle
int main () {
    int a, b, perimeter;
    printf("enter the side a");
    scanf("%d", &a);

    printf("enter the side b");
    scanf("%d", &b);

    perimeter = 2 * (a + b);

    printf("perimeter of rectangle is : %d \n",perimeter);
    return 0;
}