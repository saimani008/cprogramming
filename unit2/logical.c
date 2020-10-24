#include<stdio.h>
int main()
{
int n1,n2,n3,n4;
printf("enter the numbers :");
scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
if((n1>n2)&&(n3<n4))
{
printf("true\n");
}
else
{
printf("false\n");
}
if((n1>n2)||(n3<n4))
{
printf("true\n");
}
else
{
printf("false\n");
}
if(!(n1>n2))
{
printf("true\n");
}
else
{
printf("flase\n");
}
return 0;
}
