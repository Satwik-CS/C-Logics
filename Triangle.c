#include <stdio.h>
// To find the area of triangle
int main () {
    float base, height, area;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("The area of triangle is : %.2f\n", area);
    return 0;
}