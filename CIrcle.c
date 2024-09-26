/* #include <stdio.h>
//radius of circle
int main() {
    float radius;
    printf("enter radius");
    scanf("%f", &radius);

    printf("area is : %f \n", 3.14 * radius * radius);
    return 0;
}  
*/

#include <stdio.h>
// To find the area of circle
int main() {
    float radius, area;
    const float pi = 3.14;
    printf("Enter the radius of circle \n");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("The area  of cirlce is %f \n", area); 
    return 0;
}




