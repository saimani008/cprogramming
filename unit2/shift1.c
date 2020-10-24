#include<stdio.h>
#include<stdint.h>
void bin16(uint16_t no, char*bitstring);
int main()
{
uint16_t no=0x0040;
uint16_t res;
char bitstring[17]={0};
bin16(no,bitstring);
printf("the value of original number:%s(%#06x)\n",bitstring,no);
res =no>>1;
bin16(res,bitstring);
printf("the value of 1st shift      :%s(%#06x)\n",bitstring,res);
res = no>>2;
bin16(res,bitstring);
printf("the value of 2nd shift      :%s(%#06x)\n",bitstring,res);
return 0;
}

void bin16(uint16_t no,char*bitstring)
{
for(int i=0;i<16;i++)
{
bitstring[i]=(char)((no>>15-i)&(0x0001))+48;
}
return;
}
