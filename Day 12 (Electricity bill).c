# include <stdio.h>
int main()
{
    int bill,unit;
    bill=0;
    printf("enter unit \n");
    scanf("%d",&unit);
    if (unit <=100)
    {
        bill=unit*5;
        printf("the bill is %d",bill);

    }    else  if(unit >100 && unit <=200)
    {
        bill=150 +(unit-50)*7;
        printf("The bill is %d",bill);
    }
    else if(unit>200 && unit <=300)
    {
        bill=200+(unit-100)*10;
        printf("The bill is %d",bill);
    }
    else
    {
        printf("The bill is %d",unit*12);
    }
    return 0;
}
