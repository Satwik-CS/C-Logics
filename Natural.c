/*
#include  <stdio.h>
// To print first 'n' natural numbers usinng for loop (n - upper limit)
int main () {
      int n;
      printf("Enter Upper limit: ");
      scanf("%d", &n);

       for(int i = 1; i<n; i++) {
       printf("%d \n", i);
       } 
       return 0;
}
*/

/*
#include <stdio.h>
// To print first 'n' natural number in reverse order.
   int main () {
    int n;
    printf("Enter the upperlimit: ");
    scanf("%d", &n);

    for(int i = 10; i>=n; i--) {
        printf("%d\n", i);
    }
    return 0;
   }
*/


/*
#include <stdio.h>
// To find sum of the first 'n' natural no. 
int main() {
    int n, sum = 0;
    printf("Enter the Upperlimit : ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++) {
        sum += i;
        printf("Sum of %d natural number is :%d\n ", n, sum);
    }
    return 0;
}
*/

/*
#include <stdio.h>
 int main () {
    int n, sum = 0;
    float avg;
    printf("Enter the Upperlimit : ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++) {
    sum += n;
    }
    avg = (float)sum / n;
    printf("Sum of %d natural number is :%d\n", n, sum);
    printf("Average of %d natural numbers is :%.2f\n", n, avg);
    return 0;
 }
*/

/*
#include <stdio.h>
//To print the sum of first 'n' natural no. using while loop.
    int main () {
        int n, i, sum = 0;
        printf("Enter the UpperLimit: ");
        scanf("%d", &n);
        i = 1;
        while(i <= n)
        {
            sum = sum + i;
            i++;
        }
        printf("The sum is %d:\n", sum);
  }
*/

/*
#include <stdio.h>
//To print all uppercase alphabet from 'A' to 'Z'(using while loop)
    int main () {
        char letter = 'A';
           while(letter <= 'Z') {
            printf("%c\n", letter);
            letter++;
        }
           return 0;
    }
*/

/*
#include <stdio.h>
//To print the multiplication table for a given integer
      int main() {
        int n, i = 1;
      printf("Enter an integer:");
      scanf("%d", &n);
      while (i <= 10) {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
      }
        return 0;
}
*/

/*
#include <stdio.h>
//To print the first 10 natural no. using do-while loop.
    int main () {
        int i = 1;
        printf("The first 10 Natural Numbers are: ");
        do {
            printf("%d\n", i);
            i++;
        }
        while (i <= 10);
            return 0;
  }
*/

/*
#include <stdio.h>
//To print squares of all numbers from 1 to N using a do-while loop
     int main () {
        int i = 1, n;
        printf("Enter the value of N: ");
        scanf("%d", &n);
        do {
            printf("Square of %d is %d\n", i, i * i);
            i++;
        } while (i <= n);
        return 0;
     }
*/

/*
#include <stdio.h>
//To check whether a number is even or odd using bitwise & AND operator
    int main () {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num & 1) {
            printf("%d is odd.\n", num);
        } else {
            printf("%d is even.\n", num);
        }
        return 0;
     }
*/

/*
#include <stdio.h>
//To check whether a number is even or odd using bitwise ^ XOR operator
     int main () {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if((num ^ 1) == (num + 1)) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
        return 0;
     }
*/

/*
#include <stdio.h>
//To print the reverse of a given number
    int main () {
        int num, reverse = 0, remainder;
        printf("Enter a number:");
        scanf("%d", &num);

        while(num != 0){
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num /= 10;
        }
        printf("Reversed number is %d\n", reverse);
        return 0;
    }
*/

#include <stdio.h>
//To print the factorial of a given number using a while loop 
    int main() {
    int num, i = 1;
    int factorial = 1;  
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d is %d\n", num, factorial);
    return 0;
}
