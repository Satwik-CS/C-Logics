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