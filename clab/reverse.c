#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
     char str[80];
     printf("Enter the string :");
     fgets(str,80,stdin);
     int length = strlen(str);
     for(int i=length-1;i>=0;i--)
     {
       printf("%c",str[i]);
     }
return 0;
}
    
