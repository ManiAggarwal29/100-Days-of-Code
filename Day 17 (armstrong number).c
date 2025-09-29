# include <stdio.h>
# include <math.h>
int main()
{
    int n,sum=0;
    int copy;
    int d;
    int digit=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    copy=n;
    while(copy>0) // to calculate number of digits
    {
       digit++;
       copy/=10;
    }
    while(copy>0)
    {
         d=copy%10;
        sum+=pow(d,digit);
        copy/=10;
    }
            if(sum==copy)
    printf("armstrong number \n");
    else
    printf("not a armstrong  number \n");
    
    return 0;
    
    
}