#include<stdio.h>
int main()
{
float number1,number2,number3,number4;
printf("Enter the numbers:");
scanf("%f%f%f%f",&number1,&number2,&number3,&number4);
float average = (number1+number2+number3+number4)/4;
printf("The average of four numbers is %f",average);
return 0;
}


