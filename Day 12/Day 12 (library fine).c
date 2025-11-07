# include <stdio.h>
int main()
{
    int fine ,day;
    fine=0;
    printf("Enter a day");
    scanf("%d",&day);
    if(day <=5)
    {
        fine=day*2;
        printf("the fine is %d",fine);
    }
    else if(day >5 && day <=10)
    {
        fine=10+(day-5)*4;
        printf("the fine is %d",fine);
    }
    else if(day >10 && day<=30)
    {
        fine=30+(day-10)*6;
        printf("the fine is %d ",fine);
    }
    else
    {
        printf("Membership cancelled");
    }
    return 0;
}
