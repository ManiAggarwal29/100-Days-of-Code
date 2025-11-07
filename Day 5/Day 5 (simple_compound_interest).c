// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main(){
    //Entering the principal
    float principal;
    printf("Enter the principal");
    scanf("%f",&principal);
    //Entering the rate
    float rate;
    printf("Enter the rate");
    scanf("%f",&rate);
    //Entering the time
    float t;
    printf("Enter the time");
    scanf("%f",&t);
    //Calculating simple and coumpound interest
    float simple_interest;
    float compound_interest;
    simple_interest=(principal*rate*t)/100;
    compound_interest= principal* (pow((1 + rate / 100), t));
    printf("the simple interest is:%f\n",simple_interest);
    printf("the compound interest is:%f\n",compound_interest);
    return 0;
}