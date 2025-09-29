#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percent;
    printf("Enter selling Price and cost price \n ");
    scanf("%f %f ", &sp,&cp);

   

    if (sp > cp) {
        profit = sp - cp;
        percent = (profit / cp) * 100;
        printf("Profit of %f \n", percent);
    } 
    else if (sp < cp) {
        loss = cp - sp;
        percent = (loss / cp) * 100;
        printf("Loss of %f \n", percent);
    } 
    else
    {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
    