#include<stdio.h>
int main()
{
int number,remainder;
printf("enter the number:");
scanf("%d",&number);
remainder = number%10;
printf("the right most digit of %d is %d\n",number,remainder);
return 0;
}

