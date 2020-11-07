#include<stdio.h>
int mull();
int main()
{
     int mul;
     mul = mull();
     printf("multiplication is :%d\n",mul);
return 0;
}

int mull()
{
    int num,num1;
    printf("enter the values to multiply :");
    scanf("%d%d",&num,&num1);
return num*num1;
}
    
