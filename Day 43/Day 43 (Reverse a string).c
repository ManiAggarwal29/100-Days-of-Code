/* Day-43 Question-85
Reverse a string.
*/
#include <stdio.h>
#include<string.h>
int main() {
    //Entering the string
    char string[100];
    printf("Enter a string: ");
    fgets(string,100, stdin);
    int end=(strlen(string)-1);
    int limit=end/2;
    for(int i=0;i<limit;i++){
        end--;
        //Creating a temporary string named temp that stores the first letter of the string
        char temp=string[i];
        string[i]=string[end];
        string[end]=temp;
    }
    printf("%s",string);
    return 0;
}
