/* Day 37 Qiestion-73
Find the sum of each row of a matrix and store it in an array.
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
    //calculating row sum
    int sum[n];
    for(int i=0;i<n;i++){
        sum[i]=0;
        for(int j=0;j<m;j++){
            sum[i]=sum[i]+array[i][j];
        }
    }
    // Print row sums
    printf("\nRow sums:\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d sum = %d\n", i, sum[i]);
    }
    return 0;
}