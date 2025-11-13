/* Day 38 Qiestion-75
Add two matrices.
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
    //a is the total number of rows
    int a;
    printf("enter the number of rows for array2: ");
    scanf("%d",&a);
    //b is the total number of columns
    int b;
    printf("enter the number of columns for array2: ");
    scanf("%d",&b);
    //Making a two dimensional array
    int array2[a][b];
    //Entering and saving the elements in 2-D array
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter the array elements [%d][%d]\n",i,j);
            scanf("%d",&array2[i][j]);
        }
    }
    //Printing the elements of 2-D array
    printf("the Array2 is: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d\t",array2[i][j]);
        }
        printf("\n");
    }
    //Making a new matrix named sum
    int sum[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            sum[i][j]=array[i][j]+array2[i][j];
        }
        printf("\n");
    }
    printf("\nThe Sum of Two Matrices:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}