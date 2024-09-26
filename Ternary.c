 /*#include <stdio.h>
//To check whether user is eligible for voting or not using ternary operator
int main () {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("You are eligible for voting \n") : 
                 printf("You are not eligible for voting \n");
                 return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int num;
    printf("Enter the integer : ");
    scanf("%d", &num);

    (num %2 == 0) ? printf("%d is even \n", num) : 
                           printf("%d is odd \n", num);
                           return 0;
}
*/

#include <stdio.h>
//To find the largest no. among three no. using ternary operator
int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The largest number is: %d\n", largest);
    return 0;
}
