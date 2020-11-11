#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[40];
    printf("enter the string :");
    fgets(str,20,stdin);
    printf("the string in long integer form %d\n",atoi(str));
return 0;
}
