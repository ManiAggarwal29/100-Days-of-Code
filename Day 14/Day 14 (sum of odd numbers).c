# include <stdio.h>
int main()
{
    int i,n,sum=0,count=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=1;count<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
           count++;
        }
         

    }
    printf("The sum is %d",sum);
    return 0;
}