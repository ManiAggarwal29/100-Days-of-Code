/*Day-29 Question-58
Find the maximum and minimum element in an array.
*/
#include<stdio.h>
int main(){
    //n is the number of terms to be entered in array
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int array[n];
    //Entering the elements in an array
    printf("Enter the elements of array:");
    //Saving the elements in an array
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    //Finding maximum and minimum of array
    int max=array[0];
    int min=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        else if(array[i]<min){
            min=array[i];
        }
    }
    printf("The maximum of array is: %d\n",max);
    printf("The minimum of array is: %d\n",min);
}