/* Day-43 Question-86
Check if a string is palindrome.
*/
#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    //Entering the string
    char string[100];
    printf("Enter a string: ");
    fgets(string,100, stdin);
    int len=(strlen(string)-1);
    int end=len;
    int k=0;
    for(int i=0;i<len/2;i++){
        char ch1=string[i];
        char ch2=string[end];
        if(tolower(ch1)!=tolower(ch2)){
            end--;
            k=1;
        }
    }
    if(k==0){
        printf("String is palindrome");
    }
    else{
        printf("String is not palindrome");
    }
    return 0;
}
