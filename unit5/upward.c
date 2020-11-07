#include<stdio.h>
void display(int *,int *);
int main()
{
   int p,q;
   display(&p,&q);
   printf("%d %d\n",p,q);
return 0;
}

void display(int *a,int *b)
{
   *a = 10;
   *b = 15;
}
