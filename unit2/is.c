#include<stdio.h>
#include<ctype.h>
int main()
{
char a;
printf("enter the character:");
scanf("%c",&a);
if(iscntrl(a))
{
printf("%c is a control character\n",a);
}
else
{
printf("%c is not a control character\n",a);
}
if(isprint(a))
{
printf("%c is a printable character\n",a);
}
else
{
printf("%c is not a printable character\n",a);
}
if(isalnum(a))
{
printf("%c is alphanumeric character\n",a);
}
else
{
printf("%c is not a alphanumeric character\n",a);
}
if(isspace(a))
{
printf("%c is a space character\n",a);
}
else
{
printf("%c is not a space character \n",a);
}
if(isgraph(a))
{
printf("%c is graphical printable charcater \n",a);
}
else
{
printf("%c is not a graphical printable character\n",a);
}
if(isupper(a))
{
printf("%c is a uppercase character\n",a);
}
else
{
printf("%c is not a uppercase character\n",a);
}
if(islower(a))
{
printf("%c is lowercase charcater\n",a);
}
else {
printf("%c is not a lower case character \n",a);
}
if(isalpha(a))
{
printf("%c is a aplhabet\n",a);
}
else
{
printf("%c is not a alphabet\n",a);
}
if(isdigit(a))
{
printf("%c is a digit\n",a);
}
else
{
printf("%c is not a digit\n",a);
}
if(ispunct(a))
{
printf("%c is a punctuation character\n",a);
}
else
{
printf("%c is not a punctuation character \n",a);
}
return 0;
}



