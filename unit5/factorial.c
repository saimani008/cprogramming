#include<stdio.h>
int fact(int);
void main()
{
     int n,res;
     printf("enter a number\n");
     scanf("%d",&n);
     res = fact(n);
     printf("factorial of given number is %d ",res);
}

int fact(int x)
{
     if(x<=1)
     {
          return 1;
     }
     else
     {
          return(x*fact(x-1)); 
     }
}
 
