#include <stdio.h>
//To display the name of week days based on no. entered by user (1-7) using if-else ladder
int main() 
{
    int days;
    printf("Enter the days (1-7): \n");
    scanf("%d", &days);

    switch(days)
    {
        case 1: printf("Monday\n");
        break;

        case 2: printf("Tuesday\n");
        break;

        case 3: printf("Wednesday\n");
        break;

        case 4: printf("Thursday\n");
        break;

        case 5: printf("Friday\n");
        break;

        case 6: printf("Saturday\n");
        break;
        
        case 7: printf("Sunday\n");
        break;

        default: printf("Enter a valid day\n");
        return 0;
      }
}