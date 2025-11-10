/* Day-32 Question-63
Merge two arrays.
*/
#include<stdio.h>
int main(){
    //n is the number of terms to be entered in array1
    int n;
    printf("Enter the terms for array1: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of terms for array 2: ");
    scanf("%d",&m);
    int array1[n];
    printf("Enter the first array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    int array2[m];
    printf("Enter the elements for second array: \n");
    //Saving the elements for second array
    for(int j=0;j<m;j++){
        scanf("%d",&array2[j]);
    }
    //Creating a new array named merged_array and adding elements from array 1 and array2 one by one
    int merged_array[n+m];
    // Copy array11
    for (int i = 0; i < n; i++) {
        merged_array[i] = array1[i];
    }
    // Copy array2
    for (int j = 0; j < m; j++) {
        merged_array[n+j] = array2[j];
    }
    // Print merged array
    printf("The merged array is: \n")
    for (int k = 0; k < n+m; k++) {
        printf("%d ", merged_array[k]);
    }
    return 0;
    
}

