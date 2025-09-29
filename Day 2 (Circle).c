// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Entering the radius of the circle from the user
    float radius;
    printf("Enter the  of radius the circle:");
    scanf("%f",&radius);
    //Calculating the area of the circle
    float area;
    area=3.14*radius*radius;
    printf("The area of the circle with radius %f is:%f\n",radius,area);
    //Calculating the circumference of the circle
    float circumference;
    circumference=2*3.14*radius;
    printf("The circumference of the circle with radius %f is:%f\n",radius,circumference);
    return 0;
}