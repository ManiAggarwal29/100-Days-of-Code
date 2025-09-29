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
    printf("The sum of two numbers %d and %d is:%d",number1,number2,sum);
    return 0;
}