/*Write a program to check if a number is a perfect number.*/
# include <stdio.h>
int main()
{
    int n ,sum=0;
    printf("Enter a number \n ");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
        sum=sum+i;
        }
    }
    if(sum==n && n!=0)
    printf("Is a perfect number %d",n);
    else 
    printf("NOT A PERFECT NUMBER %d",n);
    return 0;
}