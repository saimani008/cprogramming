#include<stdio.h>
int main()
{
int number;
printf("enter the number:");
scanf("%d",&number);
do
{
printf("%d",number);
number++;
}while(number<=10);
return 0;
}

