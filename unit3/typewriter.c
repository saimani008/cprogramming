#include<stdio.h>
int main()
{
    char name[100] = "cprogram on type writing";
    int i=0;
    while(i<=2)
    {
          fputs(name,stdout); 
          fputs("\n",stdout);
          i++;
    }
return 0;
}


