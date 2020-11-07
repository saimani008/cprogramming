#include<stdio.h>
int rightmost(int);
int main()
{
   int number,digit;
   printf("enter the number :");
   scanf("%d",&number);
   digit = rightmost(number);
   printf("the right most digit is : %d \n",digit);
return 0;
}


int rightmost(int num)
{
     int rem;
     rem = num%10;
return rem;
}
