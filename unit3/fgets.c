#include<stdio.h>
int main()
{
   char strng[81];
   printf("please enter the string :");
   fgets(strng,sizeof(strng),stdin);
   printf("the strng is :%s\n",strng);
return 0;
}
