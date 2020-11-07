#include<stdio.h>
int radd(int);
int main()
{
     int num,digit;
     printf("enter the number :");
     scanf("%d",&num);
     digit   = radd(num);
     printf("the addition of two rightmost digits is  :%d\n",digit);
   
return 0;
}


int radd(int number)
{
     int rem[3],add;
     rem[0] = number%10;
     number  = number/10;
     rem[1] = number%10;
     add = rem[0]+rem[1];
return add;
}
        
   
