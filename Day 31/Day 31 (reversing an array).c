/* Day-31 Question-62
Reverse an array without taking extra space.
*/
#include<stdio.h>
int main(){
    // n is the. number of elemts to be entered in array 
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    //Entering the array elements
    int array[n];
    printf("Enter the array elements: \n");
    //Saving the array elements
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    //Reversing the array
    printf("The reversed array is: \n");
    for(int i=n-1;i>=0;i--){
        printf("%d ",array[i]);
    }
}