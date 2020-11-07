#include<stdio.h>
int main()
{
       int number1,number2,*pointer1,*pointer2,sum;
       printf("Enter the two numbers :");
       scanf("%d%d",&number1,&number2);
       pointer1 = &number1;
       pointer2 = &number2;
       sum = *pointer1+*pointer2;
       printf("the addition of two numbers is %d \n",sum);


return 0;
}
