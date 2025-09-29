# include <stdio.h>
int main()
{
float perc;
printf("Enter your percentage");
scanf("%f",&perc);
if(perc>=90)
printf("Grade A+\n ");
else if(perc >=80)
printf("Grade A \n");
else if(perc >=70)
printf("Grade B  \n");
else if(perc >=60)
printf("Grade c \n");
else if(perc>=50)
printf("Grade D \n");
else if(perc >=40)
printf("Grade E \n");
else 
printf("Grade F \n");
return 0;

}
