/* Day-29 Question-57 
Find the sum of array elements.
*/
#include<stdio.h>
int main(){
    //n is the number of terms to be entered in array
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    //Entering the elements in an array
    int array[n];
    printf("Enter the elements in an array: ");
    //Saving the elements in an array
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    //Getting sum of elements of array
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+array[i];
    }
    printf("The sum of elements of one dimensional array is: %d",sum);
}