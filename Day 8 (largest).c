# include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d ",&a ,&b,&c);
    if(a>b && a>c)
    printf("The largest number =%d",a);
    else if (b>c && b>a)
    printf("The largest number =%d",b);
    else
    printf("The largest number =%d",c);
    return 0;
}