/* #include <stdio.h>
/* Q1.) To print pattern of  alphabets
A
B B
C C C
D D D D
E E E E E

int main() {
    int i, j;
    char input, alphabet = 'A';
    printf("Enter an uppercase character you want to print in last row: ");
    scanf("%c", &input);
    for(i = 1; i<= 5; ++i) {
        for(j = 1; j<= i; ++j)
        {
            printf("%c", alphabet);
        }
        alphabet++;
        printf("\n");
    }
    return 0;
}
*/


/* #include <stdio.h>
/* Q2.) To print a pattern of alphabets in increasing ordern in each line
A
A B
A B C
A B C D
A B C D E

int main () {
    int i, j;
    char letter;

    for(i = 1; i <= 5; i++) {
        letter = 'A'; //Reset letter 'A' for each row 
        // Inner loop for printing characters
        for(j = 1; j <= i; j++) {
            printf("%c", letter);
            letter++;  // Move to next letter
        }
        printf("\n");
    } 
    return 0;
}
*/

/* #include <stdio.h>
/* Q3.) To print a pattern 
          *
         **
        ***
       ****
      *****

int main() {
    int i, j, space;
    int rows = 5;

     for(i = 1; i <= rows; i++) {
        for(space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for(j = 1; j <= i; j++) {
            printf(" *");
        }
        printf("\n");
     }
     return 0;
}
*/

/* #include <stdio.h>
/* Q4.) To print a pattern
          *
         ***
        *****
       *******
      *********

int main() {
    int i, j, space;
    int rows = 5;
    
    for(i = 1; i <= rows; i++) {
        for(space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/

/* #include <stdio.h>
/* Q5.) To print the following pattern
            1
           232
          34543
         4567654
        567898765

int main () {
    int i, j, k;
    int rows = 5;

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= rows - 1; j++){
            printf(" ");
        }
        for(k = i; k < (2 * i); k++) {
            printf("%d", k);
        }
        for(k = (2 * i) - 2; k >= i; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
*/

/* #include <stdio.h>
/* Q6.) To print a pattern
            *
            **
            ***
            ****
            *****

int main () {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/


/* #include <stdio.h>
/* Q7.) To print the following pattern
            *****
            ****
            ***
            **
            *

int main () {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 5; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/

 #include <stdio.h>
/* Q8.) To print the following pattern'
            *
           **
          ***
         ****
        *****
*/
int main() {
    int i, j, k;
    for(i = 1; i <= 5; i++) {
        for(j = i; j < 5; j++) {
            printf(" ");
        }
        for(k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
