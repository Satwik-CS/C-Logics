#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Enter the operator(+, -, *, /, %%) : ");
    scanf("%c", &operator);

    printf("Enter Two integers :");
    scanf("%d%d", &num1, &num2);

    switch(operator) {
    case '+':
    result = num1 + num2;
    printf("%d + %d = %d\n",  num1, num2, result);
    break;
    
    case '-':
    result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);
    break;

    case '*':
    result = num1 * num2;
    printf("%d * %d = %d\n" , num1, num2, result);
    break;

    case '/':
    if(num2 != 0) {
        result = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, result);
    }else{ 
        printf("Error divison by zero.\n");
    }
        break;

        case '%':
        if (num2 != 0) {
            result = num1 % num2;
            printf("%d %% %d = %d\n", num1, num2, result);
        } else {
            printf("Error divison by zero.\n");
        }
        break;
    default:
    printf("Error Invalid Operator.\n");
    break;
    }
    return 0;
}
