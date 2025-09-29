/*Write a program to check if a number is a strong number.*/
# include <stdio.h>
int main()
{
    int n,sum=0,fac,copy;
    printf("Enter a number \n ");
    scanf("%d",&n);
    copy=n;
    while(copy>0)
    {
        fac=1;
        int d=copy%10;
        for(int i=1;i<=d;i++)
        {
        fac=fac*i;    
        }
        sum=sum+fac;
        copy/=10;
    
    }
    if(sum==n)
    printf("IT IS A STRONG NUMBER %d",n);
    else
    printf("NOT A STRONG NUMBER %d",n);
    return 0;
}