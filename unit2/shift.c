#include<stdio.h>
#include<stdint.h>
int main()
{
uint16_t n1=0xff;
uint16_t out1=n1>>2;
uint16_t out2=n1<<2;
printf("number:%#06x\n",n1);
printf("output:%#06x\n",out1);
printf("output:%#06x\n",out2);
return 0;
}
