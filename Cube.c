#include <stdio.h>
//Take a number(n) from user & output its cube(n*n*n)
int main() {
    int n, cube;
    printf("enter the number");
    scanf("%d", &n);

    cube = n * n* n;
    printf("output of cube is : %d \n",cube);
    return 0;
}