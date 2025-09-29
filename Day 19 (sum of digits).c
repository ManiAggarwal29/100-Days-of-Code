# include <stdio.h>
int main()
{
    int n,sum;
    sum=0;
    printf("Enter a number  \n ");
    scanf("%d",&n);
    while(n>0)
    {
        int d=n%10;
        sum=sum+d;
        n/=10;
    }
    printf("The sum of %d is ",sum);
    return 0;
}
    
