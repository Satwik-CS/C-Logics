#include <stdio.h>
// To check if the given number is divisible by 2  or not
// To check even and  odd
//Even --> 1, Odd --> 0
int main () {
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("%d \n", x % 2 == 0);
    return 0;
} 