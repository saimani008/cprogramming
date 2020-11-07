#include<stdio.h>
int add(int ,int);
int main()
{
     int number1,number2,sum;
     printf("Enter the number to add :");
     scanf("%d%d",&number1,&number2);
     sum = add(number1,number2);
     printf("the addition of two numbers is :%d\n",sum);
return 0;
}


int add(int a,int b)
{
   int total;
   total = a+b;
return total;
}
