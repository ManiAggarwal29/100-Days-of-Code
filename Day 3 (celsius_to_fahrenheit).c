#include <stdio.h>
int main(){
    //Entering the temperature in celsius
    float celsius;
    float fahrenheit;
    printf("Enter temp in Celsius");
    scanf ("%f",&celsius);
    //Calculating fahrenheit teperature
    fahrenheit=(celsius*9/5)+32;
    printf("Temperature in fahrenheit is=%f",fahrenheit);
    return 0;
}