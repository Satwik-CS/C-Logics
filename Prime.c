#include <stdio.h>
//To check if a number is prime or not
int main() {
    int num, i, isPrime = 1;

    // Prompt user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to num/2
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
