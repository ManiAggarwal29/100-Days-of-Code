/* Day-28 Question-55
Write a program to print all the prime numbers from
1 to n.
*/
#include<stdio.h>
int main(){
    int terms;
    printf("enter the number of terms");
    scanf("%d",&terms);
    for(int i=2;i<=terms;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count=count+1;
            }
        }
        if(count==2){
                printf("%d ",i);}
    }
    return 0;
}