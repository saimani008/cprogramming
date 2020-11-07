#include<stdio.h>

union name
{
   int x;
} a={5};

int main()
{
  printf("%d\n",a.x);
return 0;
}
