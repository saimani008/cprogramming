#include<stdio.h>
#include<stdint.h>
int main()
{
uint16_t n1=0x357;
uint16_t n2=0xA459;
uint16_t out1=(n1&n2),out2=(n1|n2),out3=(n1^n2),out4=(~n1),out5=(~n2);
printf("number1:%#06x\n",n1);
printf("number2:%#06x\n",n2);
printf("output1:%#06x\noutput2:%#06x\noutput3:%#06x\noutput4:%#06x\noutput5:%#06x\n",out1,out2,out3,out4,out5);
return 0;
}
