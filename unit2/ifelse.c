#include<stdio.h>
int main()
{
int percentage;
printf("enter the percentage:");
scanf("%d",&percentage);
if(percentage>=90)
{
printf("eligible for interview\n");
}
else if(percentage>=80&&percentage<=90)
{
printf("eligible for interview\n");
}
else if(percentage>=75&&percentage<=80)
{
printf("eligible for interview\n");
}
else
{
printf("not eligible for interview\n");
}
return 0;
}
