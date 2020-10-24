#include<stdio.h>
int main()
{
int number1,number2,remainder,quotient;
printf("enter the numbers:");
scanf("%d%d",&number1,&number2);
remainder = (number1%number2);
quotient  = (number1/number2);
printf("remainder and quotient is %d and %d\n",remainder,quotient);
return 0;
}

