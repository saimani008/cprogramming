#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    printf("uppercase of %c is %c \n",ch,toupper(ch));
return 0;
}
