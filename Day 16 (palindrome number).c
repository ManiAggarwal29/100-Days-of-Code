# include <stdio.h>
int main()
{
    int n,rev=0;
    int copy;
    int d;
    printf("Enter a number \n");
    scanf("%d",&n);
    copy=n;
    while(n>0)
    {
         d=n%10;
        rev=rev*10 +d;
        n/=10;
    }
            if(copy==rev)
    printf("palindrome number \n");
    else
    printf("not a palindrome number \n");
    
    return 0;
    
    
}