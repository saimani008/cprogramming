#include<stdio.h>
#include<string.h>
int main()
{
      char name[] = "cprogram on string functions";
      fputs(name,stdout);
      fputs("\n",stdout);
      fputs(name+11,stdout);
return 0;
}
