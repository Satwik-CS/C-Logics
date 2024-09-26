#include <stdio.h>
//To convert temperature from celsius to fahrenheit
int main () {
    float celsius, fahrenheit;
    printf("Enter Temperature in Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%f celsius = %f farenheit\n", celsius, fahrenheit);
    return 0;
}