#include<stdio.h>
void sub(int x,int y);
int main()
{
    int num1,num2;
    printf("enter the number to subtract :");
    scanf("%d%d",&num1,&num2);
    sub(num1,num2);
return 0;
}

void sub(int x,int y)
{
    int total ;
    total = y-x;
    printf("%d\n",total);
}
