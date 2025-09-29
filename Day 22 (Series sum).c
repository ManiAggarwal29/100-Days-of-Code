/*Write a program to find the sum of the series: 1/2 + 3/4 + 5/6 + 7/8 + … up to n terms.*/
# include <stdio.h>
int main()
{
    int n;
    float sum=0.0;
    printf("Enter number of terms \n ");
    scanf("%d",&n);
   for(int i=2;i<=n;i++)
   {
       sum+=(float)1+(2*i-1)/(2*i);
   }
       printf("sum of series upto %d is :%f",n,sum);
       return 0;
   }
/* see this program*/