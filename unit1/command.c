#include<stdio.h>
#include<stdlib.h>
int main(int arc,char *argv[])
{
int rem,sum=0,n,num;
num=atoi(argv[1]);
int temp = num;
while(temp!=0)
{
rem=temp%10;
sum=sum*10+rem;
temp=temp/10;
}
if(sum==num)
{
printf("the number is palindrome\n");
}
else
{
printf("the number is not palindrome\n");
}
return 0;
}
