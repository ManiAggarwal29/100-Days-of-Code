/* Day-28 Question-56
Read and print elements of a one-dimensional array.
*/
#include<stdio.h>
int main(){
    // n is the number of terms to be entered in array
    int n;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    //Entering the elements in an array
    int array[n];
    printf("Enter the elements of array\n");
    //Saving the elements in an array
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    //printing the elements of an array
    printf("The array elements are: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);}
    return 0;
}