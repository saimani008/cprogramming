#include<stdio.h>
int main()
{ 
     int number,sum = 0,remainder,temp;
     printf("Enter the number :");
     scanf("%d",&number);
     temp = number;
     while(number>0)
     {
       remainder = number%10;
       sum  = sum +(remainder*remainder*remainder);
       number = number/10;
     }
     if(sum==temp)
     {
        printf("%d is armstrong number\n",temp);
     }
     else
     {
        printf("%d is not armstrong number\n",temp);
     }
return 0;
}
