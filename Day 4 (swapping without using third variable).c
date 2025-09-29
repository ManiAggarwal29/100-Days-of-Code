# include <stdio.h>
int main()
{//Swapping without using third variable
    int a,b;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    printf("Before swapping a=%d,b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d,b=%d\n",a,b);
    return 0;
}