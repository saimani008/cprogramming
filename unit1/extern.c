#include<stdio.h>
int a,b;
int main()
{
int a =10;
printf("%d",a);
printf("enter the numbers of a,b:");
scanf("%d%d",&a,&b);
printf("%d %d",a,b);
a= a+b;
printf("%d",a);
return 0;
}
