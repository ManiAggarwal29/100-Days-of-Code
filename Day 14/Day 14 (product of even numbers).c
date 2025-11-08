# include <stdio.h>
int main()
{
    int i,n,pro=1;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        pro=pro*i;
    }
    printf("The product is %d",pro);
    return 0;

    
}