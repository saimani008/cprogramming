#include<stdio.h>
#include<ctype.h>
int main()
{
          char str[] = "MANIkanta";
          for(int i=0;i<9;i++)
          {
             if(isupper(str[i])) 
             {
                 printf("%c\n",str[i]);
             }  
          }
return 0;
}
