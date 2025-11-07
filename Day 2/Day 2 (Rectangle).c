// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Entering the length of the rectangle from the user
    int length;
    printf("Enter the length of the rectangle:");
    scanf("%d",&length);
    //Entering the breadth of the rectangle from the user
    int breadth;
    printf("Enter the breadth of the rectangle:");
    scanf("%d",&breadth);
    //Calculating the area of the rectangle
    int area;
    area=length*breadth;
    printf("The area of the rectangle with length %d and breadth %d is:%d\n",length,breadth,area);
    //Calculating the perimeter of the rectangle
    int perimeter;
    perimeter=2*(length+breadth);
    printf("The perimeter of the rectangle with length %d and breadth %d is:%d\n",length,breadth,area);
    return 0;
}