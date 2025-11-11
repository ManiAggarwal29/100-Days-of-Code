/* Day 36 Qiestion-71
Read and print a matrix.
*/
#include<stdio.h>
int main(){
    //n is the total number of rows
    int n;
    printf("enter the number of rows for array: ");
    scanf("%d",&n);
    //m is the total number of columns
    int m;
    printf("enter the number of columns for array: ");
    scanf("%d",&m);
    //Making a two dimensional array
    int array[n][m];
    //Entering and saving the elements in 2-D array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the array elements [%d][%d]\n",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    //Printing the elements of 2-D array
    printf("the Array is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}