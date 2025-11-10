/* Day-31 Question-61
Search for an element in an array using linear search.
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
    //Entering the number to be searched n array
    int number;
    printf("Enter the number to be searched in array: \n");
    scanf("%d",&number);
    int found=0;
    //Checking the number if it is equar to array element
    for(int i=0;i<n;i++){
        if(number==array[i]){
            printf("The number %d is present in the array at position %d (index %d): \n",number,i+1,i);
            found=1;
            break;
        }
    }
    if(!found){
            printf("Element %d not found in the array.\n", number);
    }
    return 0;
}
