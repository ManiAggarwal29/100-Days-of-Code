// Online C compiler to run C program online
#include <stdio.h>
int main(){
    //Entering the natural number till we want to get the sum
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    //Calculating the sum of first n natural numbers
    int sum=0;
    for(int i=1;i<=number;i++){
        sum=sum+i;
    }
    printf("the sum of first n natural numbers is:%d\n",sum);
    return 0;
}