#include<stdio.h>
#include<string.h>
int main()
{    
     FILE*text;
     char str[100];
     while(fgets(text,sizeof(text),str)!=EOF)
     {
         fputs(str,stdout);
         fputs("\n",stdout);
         fputs("\n",stdout);
     }
return 0;
}
   
