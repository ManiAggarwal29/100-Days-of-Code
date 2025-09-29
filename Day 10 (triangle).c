# include <stdio.h>
int main()
{
    int  a,b,c;
    

    printf("Enter sides of triangle");
    scanf("%f %f %f ",&a,&b,&c);
    if ((a+b>c) && (b+c>a) && (c+a>b))
    {
       if (a==b && b==c)
       printf("The triangle is equilateral");
       
       else if(a==b || b==c|| c==a)
     printf("The triangle is isosceles");
     else if(c*c=a*a+b*b || a*a=c*c+b*b || b*b=c*c+a*a)
     printf("The triangle is right angle ");
       else
       printf("The triangle is scalene");
    }
    
    else
    
        printf("The triangle is not valid");

    
    return 0;

}
