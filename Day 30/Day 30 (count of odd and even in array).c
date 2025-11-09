/*Day-30 Question-59
Count even and odd numbers in an array.
*/
#include<stdio.h>
int main(){
    //n is the number of terms to be entered in array
    int n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    int array[n];
    //Entering the elements in array from user choice
    printf("Enter the elements of arry: ");
    //Saving the elements in an array
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    //Counting the number of elements in array on the basis of odd or even
    int count=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            count=count+1;
        }
        else if(array[i]%2!=0){
            count1=count1+1;
        }
    }
    printf("The count off even elements in an array is: %d\n",count);
    printf("The count off odd elements in an array is: %d\n",count1);
    return 0;
}
