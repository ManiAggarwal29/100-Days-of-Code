/*Write a program to swap the first and last digit of a number.*/
#  include <stdio.h>
int main()
{
int first,middle,last,pow=1,num,n,swapped;
printf("Enter a number\n");
scanf("%d",&num);
n=num;
last=n %10;
while(n>=10)
{
    n=n/10;
    pow=pow*10;
}
first=n;
middle=num %pow;
middle=middle/10;
swapped=last*pow+middle*10+first;
printf("numbers are swapping are %d",swapped);
return 0;
}