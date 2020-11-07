#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char *str;
   str = (char*)malloc(15);
   strcpy(str,"welcome");
   str =(char*)realloc(str,30);
   strcat(str,"cprogramming");
   printf("string is %s\n",str);
   free(str);
return 0;
}

