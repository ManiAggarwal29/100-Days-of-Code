# include <stdio.h>
int main()
{
    int i,n,fac;
    fac=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    if (n<=1)
    {
        printf(" %d Not a prime number",n);
    }
    else 
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        fac++;
        }
    }
    if(fac==2)
    printf("Is a prime number %d",n);
    else 
    printf("Is not a prime number %d",n);
    return 0;
}