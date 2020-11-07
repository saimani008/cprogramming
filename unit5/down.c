#include<stdio.h>
void add(int ,int);
int main()
{
   int a=10 ,b = 30;
   add(a,b);
return 0;
}

void add(int x,int y)
{
   x = x+y;
   y = y+2;
   printf("a is %d and b is %d\n",x,y);
}
