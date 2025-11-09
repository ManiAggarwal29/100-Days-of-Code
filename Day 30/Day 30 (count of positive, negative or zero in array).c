/* Day-30 Question-60
Count positive, negative, and zero elements in an array.
*/
#include<stdio.h>
int main(){
    // n is the number of terms to be entered in array
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    //Entering the elements in an array
    int array[n];
    printf("Enter the elements: \n");
    //Saving the elements in an array
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int count=0;
    int count1=0;
    int count2=0;
    //Checking whether the given element in array is positive, negative or zero
    for(int i=0;i<n;i++){
        if(array[i]>0){
            count=count+1;
        }
        else if(array[i]<0){
        count1=count1+1;
        }
        else if(array[i]==0){
            count2=count2+1;
        }
    }
    printf("The total count of positive numberin array is: %d\n",count);
    printf("The total count of negative numberin array is: %d\n",count1);
    printf("The total count of zero in array is: %d\n",count2);
    return 0;
}