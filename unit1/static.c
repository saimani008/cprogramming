#include<stdio.h>
int  main()
{
static int a,b;
printf("enter the a,b value :");
scanf("%d%d",&a,&b);
a= a+b;
printf("%d",a);
return 0;
}

