# include <stdio.h>
int main()
{
    int n,i;
    int fac=1;
    printf("Enter a number to find its factorial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("Factorial of %d is %d",n,fac);
    return 0;
}