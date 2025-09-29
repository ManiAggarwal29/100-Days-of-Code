// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Entering the first number
    int number1;
    printf("Enter the first number:");
    scanf("%d",&number1);
    //Entering the second number
    int number2;
    printf("Enter the second number:");
    scanf("%d",&number2);
    //Adding two numbers
    int sum;
    sum = number1 + number2;
    printf("The sum of two numbers %d and %d is:%d\n",number1,number2,sum);
    //Subtractig two numbers
    int subtraction;
    subtraction=number1-number2;
    printf("The subtraction of two numbers %d and %d is:%d\n",number1,number2,subtraction);
    //Multiplying two numbers
    int multiplication;
    multiplication = number1 * number2;
    printf("The multiplication of two numbers %d and %d is:%d\n",number1,number2,multiplication);
    //Quotient of two numbers
    int quotient;
    quotient = number1 / number2;
    printf("The quotient of two numbers %d and %d is:%d\n",number1,number2,quotient);
    return 0;
}