/*
#include <stdio.h>
// To check if a no. is positive or negative
int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("You entered zero.\n");
    }

    return 0;
}
*/


#include <stdio.h>
//To check whether a char is vowel or consonant
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}


/*
#include <stdio.h>
//To check whether a no. is positive, negative, or zero and if positive check whether even or odd
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is positive.\n", num);
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>
//To check if a person is eligible to vote and further check if the person is also eligible to apply for a driving license
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
        if (age >= 18 && age <= 70) {
            printf("You are also eligible to apply for a driving license.\n");
        } else {
            printf("You are not eligible to apply for a driving license.\n");
        }
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
*/


