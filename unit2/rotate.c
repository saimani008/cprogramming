#include<stdio.h>
#include<stdint.h>
uint16_t rotatel(uint16_t no1,int n);
uint16_t rotater(uint16_t no1,int n);
int main()
{
uint16_t no1=0x2345;
int n=4;
printf("number:%#06x\n",no1);
printf("left rotate:%#06x\n",rotatel(no1,n));
printf("right rotate:%#06x\n",rotater(no1,n));
return 0;
}

uint16_t rotatel(uint16_t no1,int n)
{
return((no1>>n)|(no1<<16-n));
}

uint16_t rotater(uint16_t no1,int n)
{
return((no1<<n)|(no1>>16-n));
}
