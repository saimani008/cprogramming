#include<stdio.h>
#include<ctype.h>
int main()
{
     char text[80];
     printf("please enter the text:");
     while((fscanf(stdin,"%s",text))!=EOF)
     {
            printf("the text after deleting whitespaces is :%s\n",text);
            fgetc(stdin);
           *(text) = '\0';
     }
return 0;
}
